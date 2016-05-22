#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

/*
 *  neutro   - positivo
 *           - negativo
 *           - neutro
 *  positivo - positivo - maior
 *                      - menor
 *                      - igual
 *           - negativo - maior
 *                      - menor
 *                      - igual
 *           - neutro
 *  negativo - positivo - maior
 *		                - menor
 *		                - igual
 *	         - negativo - maior
 *		                - menor
 *		                - igual
 *           - neutro
 *
 */

class TesteInfintDiferenteDe {};

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_outro_numero_positivo_maior )
{
Infint a("132");
Infint b("465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_numero_negativo_maior )
{
Infint a("132");
Infint b("-465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_numero_negativo_menor )
{
Infint a("132");
Infint b("-65");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_numero_negativo_igual )
{
Infint a("132");
Infint b("-132");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_dois_numeros_positivos_iguais )
{
Infint a("132");
Infint b("132");
bool valorEsperadoAposComparacao = false;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_outro_numero_positivo_menor )
{
Infint a("532");
Infint b("465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_zero_com_numero_positivo )
{
Infint a("0");
Infint b("465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_zero_com_numero_negativo )
{
Infint a("0");
Infint b("-465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
bool valorEsperadoAposComparacao = false;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_numero_positivo_maior )
{
Infint a("-132");
Infint b("465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );
}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_numero_positivo_menor )
{
Infint a("-132");
Infint b("45");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_numero_positivo_igual )
{
Infint a("-132");
Infint b("132");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_outro_numero_negativo_maior )
{
Infint a("-532");
Infint b("-465");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_outro_numero_negativo_igual )
{
Infint a("-532");
Infint b("-532");
bool valorEsperadoAposComparacao = false;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_outro_numero_negativo_menor )
{
Infint a("-532");
Infint b("-665");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

TEST( TesteInfintDiferenteDe, comparacao_diferente_de_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");
bool valorEsperadoAposComparacao = true;
bool respDiferenteDe = a != b;

YAFFUT_EQUAL( valorEsperadoAposComparacao, respDiferenteDe );

}

