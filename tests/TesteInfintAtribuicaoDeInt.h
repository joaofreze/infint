#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeInt {};

TEST( TesteInfintAtribuirDeInt, atribuir_int_positivo )
{
int a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeInt, atribuir_int_negativo )
{
int a = -14545678;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeInt, atribuir_int_zero )
{
int a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}


