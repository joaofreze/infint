#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorLongInt {};

TEST( TesteInfintConstrutorPorLongInt, construir_infint_a_partir_de_um_long_int_positivo )
{
long int a = 132432345;
Infint b(a);
Infint valorEsperado("132432345");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorLongInt, construir_infint_a_partir_de_um_long_int_negativo )
{
long int a = -14545678;
Infint b(a);
Infint valorEsperado("-14545678");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorLongInt, construir_infint_a_partir_de_um_long_int_zero )
{
long int a = 0;
Infint b(a);
Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, b );

}




