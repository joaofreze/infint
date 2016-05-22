#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintRestoDaDivisao {};

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("13");
Infint b("42");
Infint valorEsperadoAposOperacao("13");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_dois_numeros_positivos_sendo_um_maior_e_outro_menor )
{
Infint a("134");
Infint b("42");
Infint valorEsperadoAposOperacao("8");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_dois_numeros_positivos_iguais )
{
Infint a("12");
Infint b("12");
Infint valorEsperadoAposOperacao("0");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("139");
Infint b("-42");
Infint valorEsperadoAposOperacao("13");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");

YAFFUT_ASSERT_THROW( a % b, InfintException);

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-240");
Infint b("34");
Infint valorEsperadoAposOperacao("-2");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_dois_numeros_negativos )
{
Infint a("-184");
Infint b("-45");
Infint valorEsperadoAposOperacao("-4");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperadoAposOperacao("0");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");

YAFFUT_ASSERT_THROW( a % b , InfintException );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperadoAposOperacao("0");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465");
Infint valorEsperadoAposOperacao("0");
Infint resto = a % b;

YAFFUT_EQUAL( valorEsperadoAposOperacao, resto );

}

TEST( TesteInfintRestoDaDivisao, resto_da_divisao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");

YAFFUT_ASSERT_THROW( a % b , InfintException );
}



