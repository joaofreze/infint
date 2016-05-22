#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuir {};

TEST( TesteInfintAtribuir, atribuir_numero_positivo )
{
Infint a("132");
Infint b = a;
Infint valorEsperadoAposAtribuicao("132");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuir, atribuir_numero_negativo )
{
Infint a("-14");
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuir, atribuir_o_numero_zero )
{
Infint a("0");
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

