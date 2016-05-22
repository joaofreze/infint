#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintPreDecremento {};

TEST( TesteInfintPreDecremento, pre_decrementar_positivo_sem_retirada_de_digito )
{
Infint a("132");
--a;
Infint valorEsperadoAposDecrementacao("131");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

TEST( TesteInfintPreDecremento, pre_decrementar_positivo_com_retirada_de_digito )
{
Infint a("100");
--a;
Infint valorEsperadoAposDecrementacao("99");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

TEST( TesteInfintPreDecremento, pre_decrementar_o_numero_um_positivo )
{
Infint a("+1");
--a;
Infint valorEsperadoAposDecrementacao("0");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

TEST( TesteInfintPreDecremento, pre_decrementar_negativo_sem_adicao_de_digito )
{
Infint a("-132");
--a;
Infint valorEsperadoAposDecrementacao("-133");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

TEST( TesteInfintPreDecremento, pre_decrementar_negativo_com_adicao_de_digito )
{
Infint a("-99");
--a;
Infint valorEsperadoAposDecrementacao("-100");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

TEST( TesteInfintPreDecremento, pre_decrementar_o_numero_zero )
{
Infint a("0");
--a;
Infint valorEsperadoAposDecrementacao("-1");

YAFFUT_EQUAL( valorEsperadoAposDecrementacao, a );

}

