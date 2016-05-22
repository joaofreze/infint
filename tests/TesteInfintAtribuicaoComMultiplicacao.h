#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuicaoComMultiplicacao {};

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("67834");
Infint b("4452");
Infint valorEsperado("301996968");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_dois_numeros_positivos_iguais )
{
Infint a("1288");
Infint b("1288");
Infint valorEsperado("1658944");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("1386");
Infint b("-4257");
Infint valorEsperado("-5900202");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_um_numero_positivo_com_zero )
{
Infint a("1386");
Infint b("0");
Infint valorEsperado("0");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("1386");
Infint b("-4257");
Infint valorEsperado("-5900202");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_dois_numeros_negativos )
{
Infint a("-1288");
Infint b("-4654");
Infint valorEsperado("5994352");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperado("659344");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_um_numero_negativo_com_zero )
{
Infint a("-1386");
Infint b("0");
Infint valorEsperado("0");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperado("0");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperado("0");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComMultiplicacao, atribuicao_com_multiplicacao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperado("0");
a *= b;

YAFFUT_EQUAL( valorEsperado, a );

}

