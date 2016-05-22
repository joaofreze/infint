#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuicaoComSubtracao{};

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_positivos_sendo_um_menor_e_outro_maior )
{
Infint a("132890");
Infint b("465712");
Infint valorEsperado("-332822");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_positivos_sendo_um_maior_e_outro_menor )
{
Infint a("812708");
Infint b("46539");
Infint valorEsperado("766169");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_positivos_iguais )
{
Infint a("812");
Infint b("812");
Infint valorEsperado("0");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("132890");
Infint b("-465712");
Infint valorEsperado("598602");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_um_numero_positivo_com_zero )
{
Infint a("132890");
Infint b("0");
Infint valorEsperado("132890");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-132890");
Infint b("465712");
Infint valorEsperado("-598602");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_negativos_sendo_um_maior_e_outro_menor )
{
Infint a("-812649");
Infint b("-465712");
Infint valorEsperado("-346937");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_negativos_sendo_um_menor_e_outro_maior )
{
Infint a("-132890");
Infint b("-465712");
Infint valorEsperado("332822");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_dois_numeros_negativos_iguais )
{
Infint a("-812");
Infint b("-812");
Infint valorEsperado("0");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_um_numero_negativo_com_zero )
{
Infint a("-132890");
Infint b("0");
Infint valorEsperado("-132890");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465712");
Infint valorEsperado("+465712");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465712");
Infint valorEsperado("-465712");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSubtracao, atribuicao_com_subtracao_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperado("0");
a -= b;

YAFFUT_EQUAL( valorEsperado, a );

}



