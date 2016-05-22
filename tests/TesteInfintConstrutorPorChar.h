#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorChar{};

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_com_numero_positivo )
{
char* valorEsperado = "+132";
Infint a( valorEsperado );

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_com_numero_negativo )
{
char* valorEsperado = "-198";
Infint a( valorEsperado );

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_com_o_numero_zero )
{
char* valorEsperado = "0";
Infint a( valorEsperado );

YAFFUT_EQUAL( valorEsperado, a );

}

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_com_um_numero_invalido )
{
char* valor = "+24g75";

YAFFUT_ASSERT_THROW( Infint a( valor ), InfintException);

}

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_em_branco )
{
char* valor = "";

YAFFUT_ASSERT_THROW( Infint a( valor ), InfintException);

}

TEST( TesteInfintConstrutorPorChar, constroi_objeto_a_partir_de_um_char_com_o_sinal_invalido )
{
char* valor = "#2475";

YAFFUT_ASSERT_THROW( Infint a( valor ), InfintException);

}



