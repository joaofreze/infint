#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintMultiplicar {};

TEST( TesteInfintMultiplicar, multiplicacao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("13");
Infint b("42");
Infint valorEsperadoAposMultiplicacao("546");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_dois_numeros_positivos_iguais )
{
Infint a("12");
Infint b("12");
Infint valorEsperadoAposMultiplicacao("144");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("13");
Infint b("-42");
Infint valorEsperadoAposMultiplicacao("-546");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");
Infint valorEsperadoAposMultiplicacao("0");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-13");
Infint b("42");
Infint valorEsperadoAposMultiplicacao("-546");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_dois_numeros_negativos )
{
Infint a("-12");
Infint b("-46");
Infint valorEsperadoAposMultiplicacao("552");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperadoAposMultiplicacao("659344");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");
Infint valorEsperadoAposMultiplicacao("0");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperadoAposMultiplicacao("0");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperadoAposMultiplicacao("0");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}

TEST( TesteInfintMultiplicar, multiplicacao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperadoAposMultiplicacao("0");
Infint produto = a * b;

YAFFUT_EQUAL( valorEsperadoAposMultiplicacao, produto );

}


