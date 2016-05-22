/**
 *
 *  @file    Digit.h
 *  @enum    Digit
 *  @version 1.0
 *  @since   02/22/2016
 *  @author  João Carlos Fréze Sthorc <joao.freze@hotmail.com>
 *  @brief   Enumerated that allows to manipulate all mathematic digits.
 *
 */
#ifndef DIGIT
#define DIGIT

enum Digit {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};

/**
 *
 *  Returns the conversion from char to enum Digit.
 *
 *  @param   c (char)    
 *  @return  Digit
 *
 */
enum Digit CharToDigit ( char c ) {
  return ( enum Digit )( c - '0' );
}

#endif
