/**
 *
 *  @file    InfintException.h
 *  @class   InfintException
 *  @version 1.0
 *  @since   03/20/2016
 *  @author  João Carlos Fréze Sthorc <joao.freze@hotmail.com>
 *  @brief   Class that handles exceptions thrown by Infint class.
 *
 */
#include <stdexcept>
using namespace std;

class InfintException: public runtime_error {
    public:
        InfintException( const string &msg ) : runtime_error( msg ){}
};
