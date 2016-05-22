#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuicaoComSoma {};

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_dois_numeros_positivos )
{
Infint a("132890");
Infint b("465712");
Infint valorEsperado("598602");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("132890");
Infint b("-465712");
Infint valorEsperado("-332822");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_um_numero_positivo_com_zero )
{
Infint a("132890");
Infint b("0");
Infint valorEsperado("132890");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-132890");
Infint b("465712");
Infint valorEsperado("332822");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_um_numero_negativo_com_um_numero_negativo )
{
Infint a("-132890");
Infint b("-465712");
Infint valorEsperado("-598602");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_um_numero_negativo_com_zero )
{
Infint a("-132890");
Infint b("0");
Infint valorEsperado("-132890");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465712");
Infint valorEsperado("-465712");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("465712");
Infint valorEsperado("+465712");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperado("0");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuicaoComSoma, atribuicao_com_soma_de_numeros_iguais_sendo_um_negativo_e_outro_positivo )
{
Infint a("8124643");
Infint b("-8124643");
Infint valorEsperado("0");
a += b;

YAFFUT_EQUAL( valorEsperado, a );

}

