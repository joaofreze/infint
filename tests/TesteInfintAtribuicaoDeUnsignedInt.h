#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeUnsignedInt {};

TEST( TesteInfintAtribuirDeUnsignedInt, atribuir_unsigned_int_positivo )
{
unsigned int a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedInt, atribuir_unsigned_int_negativo )
{
unsigned int a = -14545678;
Infint b = a;
unsigned int valorEsperado =  a + ( 4294967295 + 1 );
Infint valorEsperadoAposAtribuicao(valorEsperado);

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeUnsignedInt, atribuir_unsigned_int_zero )
{
unsigned  int a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}





