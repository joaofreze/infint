#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeString {};

TEST( TesteInfintAtribuirDeString, atribuir_string_com_numero_positivo )
{
string s = "132";
Infint a = s;

Infint valorEsperado("132");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeString, atribuir_string_com_numero_negativo )
{
string s = "-198";
Infint a = s;

Infint valorEsperado("-198");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeString, atribuir_string_com_o_numero_zero )
{
string s = "0";
Infint a = s;

Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeString, atribuir_string_com_um_numero_invalido )
{
string s = "+24g75";

YAFFUT_ASSERT_THROW( Infint a = s, InfintException);

}

TEST( TesteInfintAtribuirDeString, atribuir_string_em_branco )
{
string s = "";

YAFFUT_ASSERT_THROW( Infint a = s, InfintException);

}

TEST( TesteInfintAtribuirDeString, atribuir_string_com_o_sinal_invalido )
{
string s = "#2475";

YAFFUT_ASSERT_THROW( Infint a = s, InfintException);

}


