#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeLongDouble {};


TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_negativo_sem_ponto )
{
long double a = -14545678;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_zero_sem_ponto )
{
long double a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_positivo_sem_ponto )
{
long double a = 132432345;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_positivo_com_ponto )
{
long double a = 132432345.8645;
Infint b = a;
Infint valorEsperadoAposAtribuicao("132432345");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_negativo_com_ponto )
{
long double a = -14545678.213;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_zero_com_ponto )
{
long double a = 0.043;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_com_exponente_sem_ponto_e_positivo )
{
long double a = 324587e+06;
Infint b = a;
Infint valorEsperadoAposAtribuicao("324587000000");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_com_exponente_com_ponto_e_positivo )
{
long double a = 324587.583e+06;
Infint b = a;
Infint valorEsperadoAposAtribuicao("324587583000");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_com_exponente_sem_ponto_e_negativo )
{
long double a = 324587897e-06;
Infint b = a;
Infint valorEsperadoAposAtribuicao("324");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeLongDouble, atribuir_long_double_com_exponente_com_ponto_e_negativo )
{
long double a = 324587764565865.583e-010;
Infint b = a;
Infint valorEsperadoAposAtribuicao("32458");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

