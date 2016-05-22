#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorUnsignedLongInt {};

TEST( TesteInfintConstrutorPorUnsignedLongInt, construir_infint_a_partir_de_um_unsigned_long_int_positivo )
{
unsigned long int a = 132432345;
Infint b(a);
Infint valorEsperado("132432345");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorUnsignedLongInt, construir_infint_a_partir_de_um_unsigned_long_int_negativo )
{
unsigned long int a = -14545678;
Infint b(a);
unsigned long int valorEsperadoInt =  a + ( 4294967295 + 1 );
Infint valorEsperado( valorEsperadoInt );

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorUnsignedLongInt, construir_infint_a_partir_de_um_unsigned_long_int_zero )
{
unsigned long int a = 0;
Infint b(a);
Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, b );

}





