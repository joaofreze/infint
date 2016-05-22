#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeUnsignedLongInt {};

TEST( TesteInfintAtribuirDeUnsignedLongInt, atribuir_unsigned_long_int_positivo )
{
unsigned long int a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedLongInt, atribuir_unsigned_long_int_negativo )
{
unsigned long int a = -14545678;
Infint b = a;
unsigned long int valorEsperado =  a + ( 4294967295 + 1 );
Infint valorEsperadoAposAtribuicao( valorEsperado );

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedLongInt, atribuir_unsigned_long_int_zero )
{
unsigned long int a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}




