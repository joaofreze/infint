#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintSomar {};

TEST( TesteInfintSomar, soma_de_dois_numeros_positivos )
{
Infint a("132");
Infint b("465");
Infint valorEsperadoAposSoma("+597");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_um_numero_positivo_com_um_numero_negativo )
{
Infint a("132");
Infint b("-465");
Infint valorEsperadoAposSoma("-333");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_um_numero_positivo_com_zero )
{
Infint a("132");
Infint b("0");
Infint valorEsperadoAposSoma("132");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_um_numero_negativo_com_um_numero_positivo )
{
Infint a("-132");
Infint b("465");
Infint valorEsperadoAposSoma("333");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_um_numero_negativo_com_um_numero_negativo )
{
Infint a("-132");
Infint b("-465");
Infint valorEsperadoAposSoma("-597");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_um_numero_negativo_com_zero )
{
Infint a("-132");
Infint b("0");
Infint valorEsperadoAposSoma("-132");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_zero_com_um_numero_negativo )
{
Infint a("0");
Infint b("-465");
Infint valorEsperadoAposSoma("-465");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_zero_com_um_numero_positivo )
{
Infint a("0");
Infint b("+465");
Infint valorEsperadoAposSoma("+465");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_zero_com_zero )
{
Infint a("0");
Infint b("0");
Infint valorEsperadoAposSoma("0");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

TEST( TesteInfintSomar, soma_de_numeros_iguais_sendo_um_negativo_e_outro_positivo )
{
Infint a("8124643");
Infint b("-8124643");
Infint valorEsperadoAposSoma("0");
Infint total = a + b;

YAFFUT_EQUAL( valorEsperadoAposSoma, total );

}

