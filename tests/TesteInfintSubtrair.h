#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintSubtrair {};

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("132");
Infint b("465");
Infint valorEsperadoAposSubtracao("-333");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_positivos_sendo_um_maior_e_outro_menor )
{
Infint a("812");
Infint b("465");
Infint valorEsperadoAposSubtracao("347");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_positivos_iguais )
{
Infint a("812");
Infint b("812");
Infint valorEsperadoAposSubtracao("0");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("132");
Infint b("-465");
Infint valorEsperadoAposSubtracao("597");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");
Infint valorEsperadoAposSubtracao("132");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-132");
Infint b("465");
Infint valorEsperadoAposSubtracao("-597");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_negativos_sendo_um_maior_e_outro_menor )
{
Infint a("-812");
Infint b("-465");
Infint valorEsperadoAposSubtracao("-347");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_negativos_sendo_um_menor_e_outro_maior )
{
Infint a("-132");
Infint b("-465");
Infint valorEsperadoAposSubtracao("333");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperadoAposSubtracao("0");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");
Infint valorEsperadoAposSubtracao("-132");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperadoAposSubtracao("+465");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperadoAposSubtracao("-465");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}

TEST( TesteInfintSubtrair, subtracao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperadoAposSubtracao("0");
Infint diferenca = a - b;

YAFFUT_EQUAL( valorEsperadoAposSubtracao, diferenca );

}


