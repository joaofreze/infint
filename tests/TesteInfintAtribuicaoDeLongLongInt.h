#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeLongLongInt {};

TEST( TesteInfintAtribuirDeLongLongInt, atribuir_long_long_int_positivo )
{
long long int a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongLongInt, atribuir_long_long_int_negativo )
{
long long int a = -14545678;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongLongInt, atribuir_long_long_int_zero )
{
long long int a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}
