#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintConstrutorPorDouble {};


TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_negativo_sem_ponto )
{
double a = -14545678;
Infint b(a);
Infint valorEsperado("-14545678");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_zero_sem_ponto )
{
double a = 0;
Infint b(a);
Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_positivo_sem_ponto )
{
double a = 132432345;
Infint b(a);
Infint valorEsperado("132432345");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_positivo_com_ponto )
{
double a = 132432345.8645;
Infint b(a);
Infint valorEsperado("132432345");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_negativo_com_ponto )
{
double a = -14545678.213;
Infint b(a);
Infint valorEsperado("-14545678");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_zero_com_ponto )
{
double a = 0.043;
Infint b(a);
Infint valorEsperado("0");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_com_exponente_sem_ponto )
{

double a = 324587e+06;
Infint b(a);
Infint valorEsperado("324587000000");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_com_exponente_com_ponto )
{
double a = 324587.583e+06;
Infint b(a);
Infint valorEsperado("324587583000");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_com_exponente_sem_ponto_e_negativo )
{
double a = 324587897e-06;
Infint b(a);
Infint valorEsperado("324");

YAFFUT_EQUAL( valorEsperado, b );

}

TEST( TesteInfintConstrutorPorDouble, construi_infint_a_partir_de_um_double_com_exponente_com_ponto_e_negativo )
{
double a = 324587764565865.583e-010;
Infint b(a);
Infint valorEsperado("32458");

YAFFUT_EQUAL( valorEsperado, b );

}

