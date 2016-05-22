#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeChar {};

TEST( TesteInfintAtribuirDeChar, atribuir_char_com_numero_positivo )
{
char *c = "132";
Infint a = c;

Infint valorEsperado("132");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeChar, atribuir_char_com_numero_negativo )
{
char *c = "-198";
Infint a = c;

Infint valorEsperado("-198");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeChar, atribuir_char_com_o_numero_zero )
{
char *c = "0";
Infint a = c;

Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintAtribuirDeChar, atribuir_char_com_um_numero_invalido )
{
char *c = "+24g75";

YAFFUT_ASSERT_THROW( Infint a = c, InfintException);

}

TEST( TesteInfintAtribuirDeChar, atribuir_char_em_branco )
{
char *c = "";

YAFFUT_ASSERT_THROW( Infint a = c, InfintException);

}

TEST( TesteInfintAtribuirDeChar, atribuir_char_com_o_sinal_invalido )
{
char* c = "#2475";

YAFFUT_ASSERT_THROW( Infint a = c, InfintException);

}



