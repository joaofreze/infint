#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintMenosUnario {};

TEST( TesteInfintMenosUnario, inverter_sinal_de_numero_positivo )
{
Infint a("132");
a = -a;
Infint valorEsperadoAposConvercao("-132");

YAFFUT_EQUAL( valorEsperadoAposConvercao, a );

}

TEST( TesteInfintMenosUnario, inverter_sinal_de_numero_negativo )
{
Infint a("-14");
a = -a;
Infint valorEsperadoAposConvercao("+14");

YAFFUT_EQUAL( valorEsperadoAposConvercao, a );

}

TEST( TesteInfintMenosUnario, inverter_sinal_de_o_numero_zero )
{
Infint a("0");
a = -a;
Infint valorEsperadoAposConvercao("0");

YAFFUT_EQUAL( valorEsperadoAposConvercao, a );

}


