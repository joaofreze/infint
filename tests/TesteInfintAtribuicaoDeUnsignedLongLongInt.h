#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeUnsignedLongLongInt {};

TEST( TesteInfintAtribuirDeUnsignedLongLongInt, atribuir_unsigned_long_long_int_positivo )
{
unsigned long long int a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedLongLongInt, atribuir_unsigned_long_long_int_negativo )
{
unsigned long long int a = -14545678;
Infint b = a;
unsigned long long int valorEsperado =  a + ( 18446744073709551615 + 1 );
Infint valorEsperadoAposAtribuicao(valorEsperado);

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedLongLongInt, atribuir_unsigned_long_long_int_zero )
{
unsigned long long int a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}
