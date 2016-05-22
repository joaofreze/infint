#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuicaoComDivisao {};

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("13");
Infint b("42");
Infint valorEsperado("0");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_dois_numeros_positivos_sendo_um_maior_e_outro_menor )
{
Infint a("134");
Infint b("42");
Infint valorEsperado("3");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_dois_numeros_positivos_iguais )
{
Infint a("12");
Infint b("12");
Infint valorEsperado("1");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("139");
Infint b("-42");
Infint valorEsperado("-3");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");

YAFFUT_ASSERT_THROW( a /= b, InfintException);

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-238");
Infint b("34");
Infint valorEsperado("-7");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_dois_numeros_negativos )
{
Infint a("-184");
Infint b("-46");
Infint valorEsperado("4");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperado("1");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");

YAFFUT_ASSERT_THROW( a /= b , InfintException );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperado("0");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperado("0");
a /= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComDivisao, atribuicao_com_divisao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");

YAFFUT_ASSERT_THROW( a /= b , InfintException );
}




