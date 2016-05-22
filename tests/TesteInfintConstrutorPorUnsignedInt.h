#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorUnsignedInt {};

TEST( TesteInfintConstrutorPorUnsignedInt, construir_infint_a_partir_de_um_unsigned_int_positivo )
{
unsigned int a = 132432345;
Infint b(a);
Infint valorEsperado("132432345");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorUnsignedInt, construir_infint_a_partir_de_um_unsigned_int_negativo )
{
unsigned int a = -14545678;
Infint b(a);
unsigned int valorEsperadoInt =  a + ( 4294967295 + 1 );
Infint valorEsperado(valorEsperadoInt);

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorUnsignedInt, construir_infint_a_partir_de_um_unsigned_int_zero )
{
unsigned  int a = 0;
Infint b(a);
Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, b );

}






