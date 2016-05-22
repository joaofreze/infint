#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuicaoComaDaDivisao {};

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("13");
Infint b("42");
Infint valorEsperado("13");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_dois_numeros_positivos_sendo_um_maior_e_outro_menor )
{
Infint a("134");
Infint b("42");
Infint valorEsperado("8");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_dois_numeros_positivos_iguais )
{
Infint a("12");
Infint b("12");
Infint valorEsperado("0");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("139");
Infint b("-42");
Infint valorEsperado("13");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");

YAFFUT_ASSERT_THROW( a % b, InfintException);

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-240");
Infint b("34");
Infint valorEsperado("-2");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_dois_numeros_negativos )
{
Infint a("-184");
Infint b("-45");
Infint valorEsperado("-4");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperado("0");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto__divisao_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");

YAFFUT_ASSERT_THROW( a % b , InfintException );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, a_da_divisao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperado("0");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperado("0");
a %= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComaDaDivisao, atribuicao_com_resto_divisao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");

YAFFUT_ASSERT_THROW( a %= b , InfintException );
}




