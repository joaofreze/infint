/**
 *
 *  @file    Infint.h
 *  @class   Infint
 *  @version 1.0
 *  @date    02/22/2016 - 05/22/2016
 *  @since   02/22/2016
 *  @author  João Carlos Fréze Sthorc <joao.freze@hotmail.com>
 *  @brief   Class that enables handling with potentially Infinite Integers.
 *
 */
#ifndef INFINT
#define INFINT
#include "DigitNode.h"
#include "Sign.h"
#include "InfintException.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Infint {
	private:
	    /**
	    * @var Sign
	    */
		Sign sign;
		/**
	    * @var DigitNode
	    */
		DigitNode *start;
          const  Infint    FromString( const string &s );
                 bool      ValidateString( const string &s );
                 void      AddDigit( const Digit &digit );
                 void      DeleteDigit();
                 void      DeleteLeftZeros();
                 bool      hasSingleDigit();
          const  Digit     FirstDigit();
          const  Digit     Increment( const Digit &digit );
          const  Digit     Decrement( const Digit &digit );
          const  Infint    Sum( const Infint &a, const Infint &b );
          const  Infint    Subtract( const Infint &a, const Infint &b );
          const  bool      GreaterAbsoluteValue ( const Infint &a, const Infint &b );
                 bool      isZero();
	public:
		  Infint();
		  Infint( const string &s );
		  Infint( const char*   c );
		  Infint( const Infint &infint );
		  Infint( const int &INT );
		  Infint( const unsigned int &UINT );
		  Infint( const long int &LONG );
		  Infint( const unsigned long int &ULONG );
		  Infint( const long long int &LLONG );
		  Infint( const unsigned long long int &ULLONG );
		  Infint( const double &DBL );
		  Infint( const float &FLT );
		  Infint( const long double &LDBL );

  virtual ~Infint();

  template <typename T>
  friend  const  string NumberToString ( const T &number );
  friend  const  string RemoveFloatingPoint ( const string &s );
  friend         ostream & operator << ( ostream &oss, const Infint &infint );
  		  const  Infint  & operator -- ();
		  const  Infint  & operator ++ ();
          const  Infint  & operator -- ( int );
		  const  Infint  & operator ++ ( int );
		  const  Infint  & operator =  ( const Infint &infint );
		  const  Infint  & operator =  ( const string &s );
		  const  Infint  & operator =  ( const char*   c );
		  const  Infint  & operator =  ( const int    &INT );
		  const  Infint  & operator =  ( const unsigned int &UINT );
		  const  Infint  & operator =  ( const long int &LONG );
		  const  Infint  & operator =  ( const unsigned long int &ULONG );
		  const  Infint  & operator =  ( const long long int &LLONG );
		  const  Infint  & operator =  ( const unsigned long long int &ULLONG );
          const  Infint  & operator =  ( const double &DBL );
		  const  Infint  & operator =  ( const float &FLT );
		  const  Infint  & operator =  ( const long double &LDBL );

  friend  const  Infint    operator -  ( const Infint &infint );
  friend  const  Infint    operator -  ( const Infint &a, const Infint &b );
  friend  const  Infint    operator +  ( const Infint &a, const Infint &b );
  friend  const  Infint    operator *  ( const Infint &a, const Infint &b );
  friend  const  Infint    operator /  ( const Infint &a, const Infint &b );
  friend  const  Infint    operator %  ( const Infint &a, const Infint &b );
  friend  const  Infint    operator -= (       Infint &a, const Infint &b );
  friend  const  Infint    operator += (       Infint &a, const Infint &b );
  friend  const  Infint    operator *= (       Infint &a, const Infint &b );
  friend  const  Infint    operator /= (       Infint &a, const Infint &b );
  friend  const  Infint    operator %= (       Infint &a, const Infint &b );
  friend  const  bool      operator == ( const Infint &a, const Infint &b );
  friend  const  bool      operator != ( const Infint &a, const Infint &b );
  friend  const  bool      operator <  ( const Infint &a, const Infint &b );
  friend  const  bool      operator >  ( const Infint &a, const Infint &b );
  friend  const  bool      operator <= ( const Infint &a, const Infint &b );
  friend  const  bool      operator >= ( const Infint &a, const Infint &b );
};

/**
 *
 *  Creates a object Infint from a valid string.
 *
 *  @param  s (string)  Number validated.
 *  @return Infint      Object created from the string
 *  @throw  InfintException   If the 's' is not in the correct text format
 *
 */
inline const Infint Infint::FromString( const string &s ){
    int i, length;
	length = s.length(); // Stores the size of the string.
	this->start = NULL;

    if( this->ValidateString( s ) ){
        this->sign = POSITIVE;
            if ( s[0] == '-' ){
                this->sign = NEGATIVE;
            }

		for( i = length - 1; i >= 0; i = i - 1 ) {
            // Again, validating the text as an Infint.
            if ( s[i] >= '0' && s[i] <= '9' ) {
                // Adding one digit at a time, starting from the last.
                this->AddDigit( CharToDigit( s[i] ) );
            }
		}
		// Deletes the possible extra zeros from the left.
		this->DeleteLeftZeros();

		if ( isZero() ){
            this->sign = SIGNLESS;
		}

    } else {
        throw InfintException( "Invalid arguments." );
    }

    return (*this);
}

/**
 *
 *  Validating the text as a Infint by checking if the number has been passed correctly.
 *
 *  @param  s (string)      Text to be validated.
 *  @return bool    true    If the text is valid.
 *  @return bool    false   If the text is not valid.
 *
 */
inline bool Infint::ValidateString( const string &s ) {
    int i, length;
    bool valid = true;
    length = s.length(); // Stores the size of the string.

    // Validating the text as an Infint.
	for ( i = 0; i < length; i++ ) {
        if ( ! ( ( i == 0 && ( s[i] == '+' || s[i] == '-' ) ) || ( s[i] >= '0' && s[i] <= '9') ) ) {
			valid = false; // A number was not passed correctly.
			break;
        }
	}

	//  Checking absence of text.
	if ( length == 0 ) {
        valid = false;
	}

    return valid;
}

/**
 *
 *  Constructs Infint object from a formatted text.
 *
 *  @param  s (string)     Text containing numbers those will be inserted in the deque.
 *
 */
inline Infint::Infint( const string &s ) {
    (*this) = this->FromString( s );
}

/**
 *
 *  Constructs an object by setting sign attribute
 *  to signless and starts pointing to NULL.
 *
 */
inline Infint::Infint() {
    this->start = NULL;
    this->sign = SIGNLESS;
}

/**
 *
 *  Destructor.
 *  Eliminates the double ended queue by sweeping and deleting a struct at a time.
 *
 */
inline Infint::~Infint() {
   while(this->start->next != NULL) {
		this->DeleteDigit();
	}
	struct DigitNode *pointer = this->start;
	this->start = NULL;
	delete pointer;
}

/**
 *
 *  Inserts a digit at the beginning of the deque.
 *
 *  @param   digit (Digit)  Digit will be added.
 *  @return  void
 *
 */
inline void Infint::AddDigit( const Digit &digit ) {
	if ( this->start == NULL ) {
		this->start = new struct DigitNode;
		this->start->digit = digit;
		this->start->next = NULL;
		this->start->previous = NULL;
	} else {
		struct DigitNode *pointer;
		pointer = new struct DigitNode;
		pointer->digit = digit ;
		pointer->next = this->start ;
		pointer->previous = NULL;
		this->start->previous = pointer;
		this->start = pointer;
	}
}

/**
 *
 *  Deletes the first digit.
 *
 *  @return  void
 *
 */
inline void Infint::DeleteDigit() {
	struct DigitNode *pointer;
	pointer = this->start;
	this->start = pointer->next;
	this->start->previous = NULL;
	delete pointer;
}

/**
 *
 *  Returns the first digit.
 *
 *  @return  Digit  First digit pointed by start.
 *  @throw   InfintException    If the list does not have a first digit.
 *
 */
inline const enum Digit Infint::FirstDigit() {
	if( this->start != NULL ) {
		return this->start->digit;
	}
	throw InfintException( "Empty digit node list." );
}

/**
 *
 *  Checks if there is only one single digit, regardless if it is zero.
 *
 *  @retval  TRUE    There is only one digit.
 *  @retval  FALSE   There is more than one digit, or there is none.
 *
 */
inline bool Infint::hasSingleDigit() {
    return ( this->start->next == NULL ) ? true : false;
}

/**
 *
 *  Checks if the list has one single digit and if it is zero.
 *
 *  @retval  TRUE    It is the digit zero and it is unique.
 *  @retval  FALSE   It is not the single digit and/or is not the zero digit.
 *
 */
inline bool Infint::isZero(){
    return ( this->hasSingleDigit() && this->FirstDigit() == ZERO ) ? true : false;
}

/**
 *
 *  Eliminates possible zeros from the left, unnecessary zeros.
 *
 *  @return  void
 *
 */
inline void Infint::DeleteLeftZeros() {
    // Deletes the first digit, while the list does not have one single digit and it is zero.
	while( ( ! ( this->hasSingleDigit() ) ) && ( this->FirstDigit() == ZERO ) ) {
		this->DeleteDigit();
	}
}

/**
 *
 *  Copy constructor.
 *
 *  @param   infint (Infint)  Object to be copied.
 *
 *  Example Usage:
 *  @code
 *      Infint obj("123456"); // Creates an object called obj with 6 digits.
 *      Infint objCopy( obj ); // Creates a copy of object obj.
 *  @endcode
 *
 */
inline Infint::Infint( const Infint &infint ) {
	(*this) = infint;
}

/**
 *
 *  Constructs Infint object from a char*.
 *
 *  @param  c (char*)   Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const char* c ) {
	(*this) = c;
}

/**
 *
 *  Constructs Infint object from a integer.
 *
 *  @param   INT (int)    Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const int &INT ) {
	(*this) = INT;
}

/**
 *
 *  Constructs Infint object from a unsigned integer.
 *
 *  @param   UINT (unsigned int)    Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const unsigned int &UINT ) {
	(*this) = UINT;
}

/**
 *
 *  Constructs Infint object from a long integer.
 *
 *  @param   LONG (long int)   Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const long int &LONG ) {
	(*this) = LONG;
}

/**
 *
 *  Constructs Infint object from a unsigned long integer.
 *
 *  @param   ULONG (unsigned long int)   Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const unsigned long int &ULONG ) {
	(*this) = ULONG;
}

/**
 *
 *  Constructs Infint object from a long long integer.
 *
 *  @param   LLONG (long long int)   Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const long long int &LLONG ) {
	(*this) = LLONG;
}

/**
 *
 *  Constructs Infint object from a unsigned long long integer.
 *
 *  @param   ULLONG (unsigned long long int)   Numbers that will be inserted in the deque.
 *
 */
inline Infint::Infint( const unsigned long long int &ULLONG ) {
	(*this) = ULLONG;
}

/**
 *
 *  Constructs Infint object from a double.
 *
 *  @param    DBL (double)   Number that will be inserted in the deque.
 *
 */
inline Infint::Infint( const double &DBL ) {
	(*this) = DBL;
}

/**
 *
 *  Constructs Infint object from a long double.
 *
 *  @param    LDBL (long double)   Number that will be inserted in the deque.
 *
 */
inline Infint::Infint( const long double &LDBL ) {
	(*this) = LDBL;
}

/**
 *
 *  Constructs Infint object from a float.
 *
 *  @param    FLT (float)    Number that will be inserted in the deque.
 *
 */
inline Infint::Infint( const float &FLT ) {
	(*this) = FLT;
}

/**
 *
 *  Returns an output stream object that allows objects from Infint class to be displayed.
 *
 *  @param   oss (ostream)
 *  @param   infint (Infint)
 *  @return  ostream
 *  @see     http://www.cplusplus.com/reference/ostream/ostream/
 *
 */
inline ostream & operator << ( ostream &oss, const Infint &infint ) {
	if( infint.start == NULL ) {
        return oss;
	}
	switch( infint.sign ) {
		case NEGATIVE :
			oss << "-";
			break;
		case POSITIVE :
			oss << "+";
			break;
		case SIGNLESS  :
			oss << "";
			break;
	}
	struct DigitNode *pointer = infint.start;
	while( pointer != NULL ) {
		oss << pointer->digit;
		pointer = pointer->next;
	}
	return oss;
}

/**
 *
 *  Returns an identical replica of the object received by parameter.
 *
 *  @param  infint (Infint)  Object to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const Infint &infint ) {
	struct DigitNode *pointer;
	this->sign = infint.sign;
	this->start = NULL;
	// It routes the list as far as the last struct is reached.
	for( pointer = infint.start; pointer->next != NULL; pointer = pointer->next );
	while( pointer != NULL ) {
		this->AddDigit( pointer->digit );
		pointer = pointer->previous;
	}
	return (*this);
}

/**
 *
 *  Returns an object Infint with digits values identical from string received by parameter.
 *
 *  @param  s (string)   String to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const string &s ) {
	Infint infint( s );
	return (*this) = infint;
}

/**
 *
 *  Returns an object Infint with digits values identical from char* received by parameter.
 *
 *  @param  c (char*)     Char* to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const char* c ) {
	string s = c;
	Infint infint( s );
	return (*this) = infint;
}

/**
 *
 *  Converts any number to strings.
 *
 *  @param  number (typename)    Number to be converted.
 *  @return String
 *
*/
template <typename T>
inline const string NumberToString ( const T &number ) {
    stringstream ss;
    ss.flags( ios_base::fixed );
    ss << number;
    return ss.str();
}

/**
 *
 *  Returns a Infint object with values of identical digits to number received by parameter.
 *
 *  @param  INT (int)    Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const int &INT ) {
	Infint infint( NumberToString ( INT ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a Infint object with values of identical digits to number received by parameter.
 *
 *  @param  UINT (unsigned int)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const unsigned int &UINT ) {
	Infint infint( NumberToString ( UINT ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a Infint object with values of identical digits to number received by parameter.
 *
 *  @param  LONG (long int)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const long int &LONG ) {
	Infint infint( NumberToString ( LONG ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a Infint object with values of identical digits to the number received by parameter.
 *
 *  @param  ULONG (unsigned long int)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const unsigned long int &ULONG ) {
	Infint infint( NumberToString ( ULONG ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a Infint object with values of identical digits to number received by parameter.
 *
 *  @param  LLONG (long long int)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const long long int &LLONG ) {
	Infint infint( NumberToString ( LLONG ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a Infint object with values of identical digits to number received by parameter.
 *
 *  @param  ULLONG (unsigned long long int)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const unsigned long long int &ULLONG ) {
	Infint infint( NumberToString ( ULLONG ) );
	return (*this) = infint;
}

/**
 *
 *  Remove Floating Point of a number represented in string.
 *
 *  @param  s (string) 	Number to be modified.
 *  @return String
 *
*/
inline const string RemoveFloatingPoint ( const string &s ) {
    int pos = s.find(".", 0);
    string numb = s.substr(0, pos);
    return numb;
}

/**
 *
 *  Returns a Infint object with values of identical digits
 *  to the part integer of the double received as parameter.
 *
 *  @param  DBL (double)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const double &DBL ) {
    string number = NumberToString ( DBL );
    Infint infint( RemoveFloatingPoint ( number ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a  Infint object with values of identical digits
 *  to the part integer of the float received as parameter.
 *
 *  @param  FLT (float)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const float &FLT ) {
    string number = NumberToString ( FLT );
    Infint infint( RemoveFloatingPoint ( number ) );
	return (*this) = infint;
}

/**
 *
 *  Returns a  Infint object with values of identical digits
 *  to the part integer of the long double received as parameter.
 *
 *  @param  LDBL (long double)   Number to be copied.
 *  @return Infint
 *
 */
inline const Infint & Infint::operator = ( const long double &LDBL ) {
    string number = NumberToString ( LDBL );
    Infint infint( RemoveFloatingPoint ( number ) );
	return (*this) = infint;
}

/**
 *  PreDecrement
 *  Returns an object with Decremented number (number -1).
 *
 *  @return  Infint
 *
 */
inline const Infint & Infint::operator-- () {
	struct DigitNode *pointer;
	for( pointer = this->start; pointer->next != NULL; pointer = pointer->next );
	bool inLoop = true;
	switch( this->sign ) {
		case NEGATIVE:
			while( inLoop ) {
				if( pointer->digit == NINE ) {
					pointer->digit = this->Increment( pointer->digit );
					if( pointer->previous != NULL ) {
						pointer = pointer->previous;
					} else {
						this->AddDigit( ONE );
						inLoop = false;
					}
				} else {
					pointer->digit = this->Increment( pointer->digit );
					inLoop = false;
				}
			}
			break;
		case SIGNLESS:
			if( isZero() ) {
				this->sign = NEGATIVE;
				pointer->digit = this->Increment( pointer->digit );
			}
			break;
		case POSITIVE:
			while( inLoop ) {
				if( pointer->digit == ZERO ) {
					pointer->digit = this->Decrement( pointer->digit );
					pointer = pointer->previous;
				} else {
					pointer->digit = this->Decrement( pointer->digit );
					if( isZero() ) {
						this->sign = SIGNLESS;
					}
					inLoop = false;
				}
			}
			break;
	}
	this->DeleteLeftZeros();
	return (*this);
}

/**
 *  PreIncrement
 *  Returns an object with Incremented number (number +1).
 *
 *  @return  Infint
 *
 */
inline const Infint& Infint::operator++ () {
	struct DigitNode *pointer;
	for( pointer = this->start; pointer->next != NULL; pointer = pointer->next );
	bool inLoop = true;
	switch( this->sign ) {
		case NEGATIVE:
			while( inLoop ) {
				if( pointer->digit == ZERO ) {
					pointer->digit = this->Decrement( pointer->digit );
					pointer = pointer->previous;
				} else {
					pointer->digit = this->Decrement( pointer->digit );
					if( isZero() ) {
						this->sign = SIGNLESS;
					}
					inLoop = false;
				}
			}
			break;
		case SIGNLESS:
			if( isZero() ) {
				this->sign = POSITIVE;
				pointer->digit = this->Increment( pointer->digit );
			}
			break;
		case POSITIVE:
            while( inLoop ) {
				if( pointer->digit == NINE ) {
					pointer->digit = this->Increment( pointer->digit );
					if( pointer->previous != NULL ) {
						pointer = pointer->previous;
					} else {
						this->AddDigit( ONE );
						inLoop = false;
					}
				} else {
					pointer->digit = this->Increment( pointer->digit );
					inLoop = false;
				}
			}
			break;
	}
	this->DeleteLeftZeros();
    return (*this);
}

/**
 *
 *  Returns an incremented digit.
 *
 *	@param  digit (Digit)  Digit will be incremented.
 *  @return Digit
 *  @throw  InfintException If does not identify the digit.
 *
 */
inline const enum Digit Infint::Increment( const Digit &digit ) {
	switch ( digit ) {
		case ZERO : return ONE;
		case ONE  : return TWO;
		case TWO  : return THREE;
		case THREE: return FOUR;
		case FOUR : return FIVE;
		case FIVE : return SIX;
		case SIX  : return SEVEN;
		case SEVEN: return EIGHT;
		case EIGHT: return NINE;
		case NINE : return ZERO;
        default   : throw InfintException( "Unidentified digit." );
	}
}

/**
 *
 *	Returns a decremented digit.
 *
 *  @param	digit (Digit)   Digit will be decremented.
 *  @return	Digit
 *  @throw  InfintException If does not identify the digit.
 *
 */
inline const enum Digit Infint::Decrement( const Digit &digit ) {
	switch ( digit ) {
		case ONE  : return ZERO;
		case TWO  : return ONE;
		case THREE: return TWO;
		case FOUR : return THREE;
		case FIVE : return FOUR;
		case SIX  : return FIVE;
		case SEVEN: return SIX;
		case EIGHT: return SEVEN;
		case NINE : return EIGHT;
		case ZERO : return NINE;
        default   : throw InfintException( "Unidentified digit." );
        break;
	}
}

/**
 *
 *  Converts the sign attribute so that the positive becomes negative and vice versa.
 *
 *  @param  infint (Infint)    Object that will have 'sign' attribute converted.
 *  @return Infint  Object identical to the infint with modified sign.
 *
 */
inline const Infint operator - ( const Infint &infint ) {
	Infint I = infint;
	I.sign = ( enum Sign ) ( ( int ) ( infint.sign ) * -1 );
	return I;
}

/**
 *
 *  Returns the sum of two terms.
 *
 *  @param  a (Infint)  First term will be added.
 *  @param  b (Infint)	Second term will be added.
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "123" );       // Creates an object called a with 3 digits.
 *      Infint b( "456" );       // Creates an object called b with 3 digits.
 *      Infint response = a + b; // Creates an object that stores the value with the sum of a and b.
 *      cout << response;        // output: "+579".
 *  @endcode
 *
 */
inline const Infint operator + ( const Infint &a, const Infint &b ) {
    Infint infint;
	if( a.sign == b.sign ) {
        infint = infint.Sum( a, b );
	} else {
        infint = infint.Subtract( a, b );
	}
	if( infint.isZero() ){
		infint.sign = SIGNLESS;
	}
	return infint;
}

/**
 *
 *  Returns an object with the result of the subtraction between first and second terms.
 *
 *  @param  a (Infint) Number from which another is to be subtracted. (Minuend).
 *  @param  b (Infint) Number to be subtracted from another. (Subtrahend).
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "123" );       // Creates an object called a with 3 digits.
 *      Infint b( "456" );       // Creates an object called b with 3 digits.
 *      Infint response = a - b; // Creates an object that stores the value of the subtraction of a and b.
 *      cout << response;        // output: "-333".
 *  @endcode
 *
 */
inline const Infint operator - ( const Infint &a, const Infint &b ) {
	Infint infint;
	if( a.sign == b.sign ) {
        infint = infint.Subtract( a, -b );
	} else {
        infint = infint.Sum( a, -b );
	}
	if( infint.isZero() ){
		infint.sign = SIGNLESS;
	}
	return infint;
}

/**
 *
 *  Checks which is the smallest parameter.
 *  From the latter to the former, it adds the digits and studies the carry.
 *  Returns the object corresponding to the sum.
 *
 *  @param  a (Infint)  First object to be checked.
 *  @param  b (Infint)  Second object to be checked.
 *  @return Infint
 *
 */
inline const Infint Infint::Sum( const Infint &a, const Infint &b ) {
    Infint greatest;
    Infint infint;
	Infint lowest;
	if( this->GreaterAbsoluteValue(a, b) ) {
        lowest = b;
        greatest = a;
	} else {
        lowest = a;
        greatest = b;
	}
	struct DigitNode *pointerToLowest, *pointerToGreatest;
    int digit, newVal, carry = 0;
    for ( pointerToLowest = lowest.start;
        pointerToLowest->next != NULL;
        pointerToLowest = pointerToLowest->next );
    for (   pointerToGreatest = greatest.start;
        pointerToGreatest->next != NULL;
        pointerToGreatest = pointerToGreatest->next );
    do {
        if( pointerToLowest == NULL && pointerToGreatest != NULL ) {
            newVal = pointerToGreatest->digit + carry;
        } else if ( pointerToGreatest == NULL && pointerToLowest == NULL ) {
            newVal = carry;
        } else{
            newVal = pointerToLowest->digit + pointerToGreatest->digit + carry;
        }
        digit = newVal % 10;
        infint.AddDigit( ( enum Digit ) digit );
        if ( newVal >= 10 ) {
            carry = newVal / 10;
        } else {
            carry = 0;
        }
        if( pointerToLowest != NULL ) {
            pointerToLowest = pointerToLowest->previous;
        }
        if( pointerToGreatest != NULL ) {
            pointerToGreatest = pointerToGreatest->previous;
        }
    } while( pointerToGreatest != NULL );
    if(carry > 0){
        infint.AddDigit( ( enum Digit ) carry );
    }

    infint.sign = greatest.sign;
    infint.DeleteLeftZeros();
	return infint;
}

/**
 *
 *  Checks which is the smallest parameter.
 *  From the latter to the former, it subtracts the digits.
 *  Returns the object corresponding to the subtraction.
 *
 *  @param  a (Infint)  First object to be checked.
 *  @param  b (Infint)  Second object to be checked.
 *  @return Infint
 *
 */
inline const Infint Infint::Subtract( const Infint &a, const Infint &b ) {
    Infint greatest;
    Infint infint;
	Infint lowest;
	if( this->GreaterAbsoluteValue(a, b) ) {
        lowest = b;
        greatest = a;
	} else {
        lowest = a;
        greatest = b;
	}
	struct DigitNode *pointerToLowest, *pointerToGreatest;
    int digit, newVal, emp, carry = 0;
    for ( pointerToLowest = lowest.start;
        pointerToLowest->next != NULL;
        pointerToLowest = pointerToLowest->next );
    for (   pointerToGreatest = greatest.start;
        pointerToGreatest->next != NULL;
        pointerToGreatest = pointerToGreatest->next );
    do {
        pointerToGreatest->digit = ( ( enum Digit ) ( pointerToGreatest->digit -  carry ) );
        if( pointerToLowest == NULL && pointerToGreatest != NULL ) {
            newVal = pointerToGreatest->digit;
        } else {
            newVal = ( pointerToGreatest->digit + 10 ) - pointerToLowest->digit;
       }
        digit = newVal % 10;
        infint.AddDigit( ( enum Digit ) digit );
        emp = digit - pointerToGreatest->digit;
        if ( emp > 0 ) {
            carry = 1;
        } else {
            carry = 0;
        }
        if( pointerToLowest != NULL ) {
            pointerToLowest = pointerToLowest->previous;
        }
        if( pointerToGreatest != NULL ) {
            pointerToGreatest = pointerToGreatest->previous;
        }
    } while( pointerToGreatest != NULL );

    infint.sign = greatest.sign;

    infint.DeleteLeftZeros();

	return infint;

}

/**
 *
 *  Checks which list has the greatest absolute value.
 *  Returns true whether param a has a greater absolute value compared to param b.
 *
 *  @param  a (Infint)  First comparison object.
 *  @param  b (Infint)  Second comparison object.
 *  @return boolean
 *
 */
inline const bool Infint::GreaterAbsoluteValue ( const Infint &a, const Infint &b ){
    DigitNode *pointer, *newPointer;
 bool aIsLarger = false;
 bool aIsGreater = false;
 bool aSameLengthB = false;
 bool bIsGreater = false;
 for( pointer = a.start, newPointer = b.start;
         pointer != NULL && newPointer != NULL;
         pointer = pointer->next, newPointer = newPointer->next ) {
            if( ( ( int ) pointer->digit ) >  ( ( int ) newPointer->digit ) ) {
                if( ! bIsGreater ){
                    // represents that the digit of 'a' has larger value than the digit of 'b'.
                    aIsGreater = true;
                }
            }else if( ( ( int ) pointer->digit ) <  ( ( int ) newPointer->digit ) ) {
                if( ! aIsGreater ){
                // represents that the digit of 'b' has greater value than the digit of 'a'.
                bIsGreater = true;
                }
            }
            if( pointer->next != NULL && newPointer->next == NULL ){
               // represents that 'a' has more node of digits of than 'b'.
               aIsLarger = true;
               // represents that the length of 'a' not equals to 'b'.
               aSameLengthB = false;
            }
            if( pointer->next == NULL && newPointer->next == NULL ){
                // represents that the length of 'a' equals to 'b'.
                aSameLengthB = true;
            }
 }
 if( aIsLarger || ( ( aIsGreater ) && ( aSameLengthB ) && (! bIsGreater ) ) ){
        return true;
    }
    return false;
}

/**
 *
 *  Returns true whether param a is greater than param b.
 *
 *  @param  a (Infint)  First comparison object.
 *  @param  b (Infint)  Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator > ( const Infint &a, const Infint &b ) {
	if( a.sign == SIGNLESS && b.sign == NEGATIVE ) return true;
	if( a.sign == POSITIVE && b.sign != POSITIVE ) return true;
	if( a.sign == NEGATIVE && b.sign != NEGATIVE ) return false;
	if( a.sign == SIGNLESS && b.sign == POSITIVE ) return false;
	if( a.sign == SIGNLESS && b.sign == SIGNLESS ) return false;
	Infint copyA = a; // create a copy from 'a'
	Infint copyB = b; // create a copy from 'b'
    if( a.sign == NEGATIVE && b.sign == NEGATIVE ) return copyA.GreaterAbsoluteValue( copyB, copyA );
    return copyA.GreaterAbsoluteValue( copyA, copyB );

}

/**
 *
 *  Returns true whether the two objects are equal.
 *
 *  @param  a (Infint)   First comparison object.
 *  @param  b (Infint)   Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator == ( const Infint &a, const Infint &b ) {
	Infint resp = a - b;
    return ( resp.sign == SIGNLESS ) ? true : false;
}

/**
 *
 *  Returns  true whether the two objects aren't equal.
 *
 *  @param  a (Infint)   First comparison object.
 *  @param  b (Infint)   Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator != ( const Infint &a, const Infint &b ) {
	return ( a == b ) ? false : true;
}

/**
 *
 *  Returns true whether param a is less than param b.
 *
 *  @param  a (Infint)   First comparison object.
 *  @param  b (Infint)   Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator < ( const Infint &a, const Infint &b ) {
	return ( b > a );
}

/**
 *
 *  Returns true whether param a is less than or equal param b.
 *
 *  @param  a (Infint)   First comparison object.
 *  @param  b (Infint)   Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator <= (const Infint &a, const Infint &b) {
	return ( a < b || a == b ) ? true : false;
}

/**
 *
 *  Return true whether param a is greater than or equal param b.
 *
 *  @param  a (Infint)   First comparison object.
 *  @param  b (Infint)   Second comparison object.
 *  @return boolean
 *
 */
inline const bool operator >= ( const Infint &a, const Infint &b ) {
	return ( a > b || a == b ) ? true : false;
}

/**
 *
 *  Returns multiplying the first term by the second.
 *
 *  @param  a (Infint)  The number that is to be multiplied by multiplier (Multiplicand).
 *  @param  b (Infint)  The number by which multiplies (multiplier).
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "756" );       // Creates an object called a with 3 digits.
 *      Infint b( "319" );       // Creates an object called b with 3 digits.
 *      Infint response = a * b; // Creates an object that stores the value multiplying a by b.
 *      cout << response;        // output: "+241164".
 *  @endcode
 *
 */
inline const Infint operator * ( const Infint &a, const Infint &b ){
	Infint zeros("0");
	Infint infint("0");
	Infint greatest;
	Infint lowest;
	if( infint.GreaterAbsoluteValue(a, b) ) {
        lowest = b;
        greatest = a;
	} else {
        lowest = a;
        greatest = b;
	}
	struct DigitNode *pointerToLowest, *pointerToGreatest;
    // It routes the list as far as the last struct is reached.
    for ( pointerToLowest = lowest.start;
        pointerToLowest->next != NULL;
        pointerToLowest = pointerToLowest->next );
    while ( pointerToLowest != NULL ) {
        int digit, newVal, carry = 0;
        Infint inf;
        // It routes the list as far as the last struct is reached.
        for (   pointerToGreatest = greatest.start;
        pointerToGreatest->next != NULL;
        pointerToGreatest = pointerToGreatest->next );
        if( pointerToLowest->next != NULL ){
            inf = zeros;
            zeros.AddDigit(ZERO);
        }
        do {
            newVal = pointerToLowest->digit * pointerToGreatest->digit + carry;
            digit = newVal % 10;
            inf.AddDigit( ( enum Digit ) digit );
            if ( newVal >= 10 ) {
                carry = newVal / 10;
            } else {
                carry = 0;
            }
            pointerToGreatest = pointerToGreatest->previous;
        } while( pointerToGreatest != NULL );
        if( carry > 0 ){
            inf.AddDigit( ( enum Digit ) carry );
        }
        infint = infint + inf;
        pointerToLowest = pointerToLowest->previous;
    }
    // Validating the signs
    if( a.sign == SIGNLESS || b.sign == SIGNLESS ) {
		infint.sign = SIGNLESS;
	} else if( a.sign == b.sign ) {
        infint.sign = POSITIVE;
	} else {
		infint.sign = NEGATIVE;
	}
	return infint;
}

/**
 *
 *  Returns the division of the first to the second.
 *
 *  @param  a (Infint)  The number to be divided by another number (Dividend).
 *  @param  b (Infint)  The number that divides (Divider).
 *  @return Infint
 *  @throw  InfintException   If param b (divider) is the zero.
 *
 *  Example Usage:
 *  @code
 *      Infint a( "945" );       // Creates an object called a with 3 digits.
 *      Infint b( "135" );       // Creates an object called b with 3 digits.
 *      Infint response = a / b; // Creates an object that stores the value of division of a and b.
 *      cout << response;        // output: "+7".
 *  @endcode
 *
 */
inline const Infint operator / ( const Infint &a, const Infint &b ){
	Infint infint("0");
	Infint dividend = a;
	Infint divider = b;

	if( divider.isZero() ){
        throw InfintException( "Division by ZERO not allowed." );
	}
	if( divider.sign == NEGATIVE ){
        divider = -divider;
	}

	if( dividend.sign == NEGATIVE ){
        dividend = -dividend;
	}
	while( dividend >= divider ) {
		++infint;
		dividend = dividend - divider;
	}
	if( infint.isZero() ){
		infint.sign = SIGNLESS;
	} else if( a.sign == b.sign ){
		infint.sign = POSITIVE;
	} else{
		infint.sign = NEGATIVE;
	}
	return infint;
}

/**
 *
 *  Returns the modulus (remainder of division) of two numbers.
 *
 *  @param  a (Infint)  Dividend.
 *  @param  b (Infint)  Divider.
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "1234" );      // Creates an object called a with 4 digits.
 *      Infint b( "456" );       // Creates an object called b with 3 digits.
 *      Infint response = a % b; // Creates an object that stores the remainder of the division of a by b.
 *      cout << response;        // output: "+322".
 *  @endcode
 *
 */
inline const Infint operator % (const Infint &a, const Infint &b){
	return ( a - ( ( a / b ) * b ) );
}

/**
 *
 *  Returns the first term with the result of the subtraction.
 *
 *  @param  a (Infint)  Number from which another is to be subtracted. (Minuend).
 *  @param  b (Infint)  Number to be subtracted from another. (Subtrahend).
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "123" );  // Creates an object called a with 3 digits.
 *      Infint b( "456" );  // Creates an object called b with 3 digits.
 *      Infint a -= b;      // Assigns the result of the subtraction into a.
 *      cout << a;   // output: "-333".
 *  @endcode
 *
 */
inline const Infint operator -= ( Infint &a, const Infint &b ) {
	a = a - b;
	return a;
}

/**
 *
 *  Returns the first term with the result of the multiplication.
 *
 *  @param  a (Infint)  The number that is to be multiplied by multiplier (Multiplicand).
 *  @param  b (Infint)  The number by which multiplies (multiplier).
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "756" );  // Creates an object called a with 3 digits.
 *      Infint b( "319" );  // Creates an object called b with 3 digits.
 *      a *= b;             // Assigns the result of the multiplication into a.
 *      cout << a;          // output: "+241164".
 *  @endcode
 *
 */
inline const Infint operator *= ( Infint &a, const Infint &b ){
	a = a * b;
	return a;
}
/**
 *
 *  Returns the first term with the result of the addition.
 *
 *  @param  a (Infint)  First term will be added.
 *  @param  b (Infint)  Second term will be added.
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "123" );  // Creates an object called a with 3 digits.
 *      Infint b( "456" );  // Creates an object called b with 3 digits.
 *      a += b;             // Assigns the result of the addition into a.
 *      cout << a;          // output: "+579".
 *  @endcode
 *
 */
inline const Infint operator += ( Infint &a, const Infint &b ){
	a = a + b;
	return a;
}

/**
 *
 *  Returns the first term with the result of the remainder of division.
 *
 *  @param  a (Infint)  Dividend.
 *  @param  b (Infint)  Divider.
 *  @return Infint
 *
 *  Example Usage:
 *  @code
 *      Infint a( "1234" ); // Creates an object called a with 4 digits.
 *      Infint b( "456" );  // Creates an object called b with 3 digits.
 *       a %= b;            // Assigns the remainder of the division into a.
 *      cout << a;          // output: "+322".
 *  @endcode
 *
 */
inline const Infint operator %= ( Infint &a, const Infint &b ){
	a = a % b;
	return a;
}

/**
 *
 *  Returns the first term with the result of division.
 *
 *  @param  a (Infint)  The number to be divided by another number (Dividend).
 *  @param  b (Infint)  The number that divides (Divider).
 *  @return Infint
 *  @throw  InfintException   If param b (divider) is the zero.
 *
 *  Example Usage:
 *  @code
 *      Infint a( "945" );  // Creates an object called a with 3 digits.
 *      Infint b( "135" );  // Creates an object called b with 3 digits.
 *      a /= b;             // Assigns the result of the division into a.
 *      cout << a;          // output: "+7".
 *  @endcode
 *
 */
inline const Infint operator /= ( Infint &a, const Infint &b ){
	a = a / b;
	return a;
}

/**
 *  PosIncrement
 *  Returns an object with Incremented number (number +1).
 *
 *  @return  Infint
 *
 */
inline const Infint& Infint::operator++ ( int ) {
    ++(*this);
    return (*this);
}

/**
 *  PosDecrement
 *  Returns an object with Decremented number (number -1).
 *
 *  @return  Infint
 *
 */
inline const Infint & Infint::operator-- ( int ) {
    --(*this);
    return (*this);
}
#endif
