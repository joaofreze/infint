#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintPreIncremento {};

TEST( TesteInfintPreIncremento, pre_incrementar_positivo_sem_adicao_de_digito )
{
Infint a("132");
++a;
Infint valorEsperadoAposIncrementacao("133");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}

TEST( TesteInfintPreIncremento, pre_incrementar_positivo_com_adicao_de_digito )
{
Infint a("99");
++a;
Infint valorEsperadoAposIncrementacao("100");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}

TEST( TesteInfintPreIncremento, pre_incrementar_o_numero_um_negativo )
{
Infint a("-1");
++a;
Infint valorEsperadoAposIncrementacao("0");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}

TEST( TesteInfintPreIncremento, pre_incrementar_negativo_sem_retirada_de_digito )
{
Infint a("-132");
++a;
Infint valorEsperadoAposIncrementacao("-131");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}

TEST( TesteInfintPreIncremento, pre_incrementar_negativo_com_retirada_de_digito )
{
Infint a("-100");
++a;
Infint valorEsperadoAposIncrementacao("-99");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}

TEST( TesteInfintPreIncremento, pre_incrementar_o_numero_zero )
{
Infint a("0");
++a;
Infint valorEsperadoAposIncrementacao("1");

YAFFUT_EQUAL( valorEsperadoAposIncrementacao, a );

}
