#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintStringDeSaida {};

TEST( TesteInfintStringDeSaida, string_de_saida_com_numero_positivo )
{
Infint a("132");
string valorEsperadoNaString = "+132";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

TEST( TesteInfintStringDeSaida, string_de_saida_com_numero_negativo )
{
Infint a("-198");
string valorEsperadoNaString = "-198";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

TEST( TesteInfintStringDeSaida, string_de_saida_com_o_numero_zero )
{
Infint a("0");
string valorEsperadoNaString = "0";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

