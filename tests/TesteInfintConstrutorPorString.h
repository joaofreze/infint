#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorString {};

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_numero_positivo )
{
Infint a("132");
string valorEsperadoNaString = "+132";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_numero_negativo )
{
Infint a("-198");
string valorEsperadoNaString = "-198";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_o_numero_zero )
{
Infint a("0");
string valorEsperadoNaString = "0";

YAFFUT_EQUAL( valorEsperadoNaString, a );

}

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_um_numero_invalido )
{

YAFFUT_ASSERT_THROW( Infint a("+24g75"), InfintException);

}

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_string_em_branco )
{

YAFFUT_ASSERT_THROW( Infint a(""), InfintException);

}

TEST( TesteInfintConstrutorPorString, constroi_objeto_com_o_sinal_invalido )
{

YAFFUT_ASSERT_THROW( Infint a("#2475"), InfintException);

}


