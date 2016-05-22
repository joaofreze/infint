#include "yaffut.h"
#include "../lib/Infint.h"
using namespace yaffut;

class TesteInfintAtribuirDeFloat {};


TEST( TesteInfintAtribuirDeFloat, atribuir_float_negativo_sem_ponto )
{
float a = -14545678;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_zero_sem_ponto )
{
float a = 0;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_positivo_sem_ponto )
{
float a = 13243235;
Infint b = a;
Infint valorEsperadoAposAtribuicao("13243235");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_positivo_com_ponto )
{
float a = 13243235.8645f;
Infint b = a;
Infint inteiro("13243235");
Infint arredondamento = 1;
Infint valorEsperadoAposAtribuicao = inteiro + arredondamento ;

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_negativo_com_ponto )
{
float a = -14545678.213;
Infint b = a;
Infint valorEsperadoAposAtribuicao("-14545678");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_zero_com_ponto )
{
float a = 0.043;
Infint b = a;
Infint valorEsperadoAposAtribuicao("0");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_com_exponente_sem_ponto_e_positivo )
{
float a = 643.7214e+05f;
Infint b = a;
Infint valorEsperadoAposAtribuicao("64372140");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_com_exponente_com_ponto_e_positivo )
{
float a = 643e+06f;
Infint b = a;
Infint valorEsperadoAposAtribuicao("643000000");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_com_exponente_sem_ponto_e_negativo )
{
float a = 324587764565865e-010f;
Infint b = a;
Infint valorEsperadoAposAtribuicao("32458");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}

TEST( TesteInfintAtribuirDeFloat, atribuir_float_com_exponente_com_ponto_e_negativo )
{
float a = 324587764565865.583e-010f;
Infint b = a;
Infint valorEsperadoAposAtribuicao("32458");

YAFFUT_EQUAL( valorEsperadoAposAtribuicao, b );

}
