#include "yaffut.h"

#include "TesteInfintMultipicacao.h"
#include "TesteInfintDivisao.h"
#include "TesteInfintAtribuicao.h"
#include "TesteInfintMenosUnario.h"
#include "TesteInfintMenorQue.h"
#include "TesteInfintDiferenteDe.h"
#include "TesteInfintMaiorQue.h"
#include "TesteInfintMenorQueOuIgualA.h"
#include "TesteInfintMaiorQueOuIgualA.h"
#include "TesteInfintRestoDaDivisao.h"
#include "TesteInfintStringDeSaida.h"
#include "TesteInfintSomar.h"
#include "TesteInfintIgualA.h"
#include "TesteInfintSubtrair.h"
#include "TesteInfintConstrutorPorString.h"
#include "TesteInfintAtribuicaoDeInt.h"
#include "TesteInfintAtribuicaoDeLongInt.h"
#include "TesteInfintAtribuicaoDeUnsignedInt.h"
#include "TesteInfintAtribuicaoDeUnsignedLongLongInt.h"
#include "TesteInfintAtribuicaoDeUnsignedLongInt.h"
#include "TesteInfintAtribuicaoDeLongLongInt.h"
#include "TesteInfintAtribuicaoDeString.h"
#include "TesteInfintAtribuicaoDeDouble.h"
#include "TesteInfintAtribuicaoDeLongDouble.h"
#include "TesteInfintAtribuicaoDeFloat.h"
#include "TesteInfintAtribuicaoDeChar.h"
#include "TesteInfintConstrutorPorChar.h"
#include "TesteInfintConstrutorPorDouble.h"
#include "TesteInfintConstrutorPorFloat.h"
#include "TesteInfintConstrutorPorUnsignedInt.h"
#include "TesteInfintConstrutorPorLongDouble.h"
#include "TesteInfintConstrutorPorUnsignedLongLongInt.h"
#include "TesteInfintConstrutorPorUnsignedLongInt.h"
#include "TesteInfintConstrutorPorLongLongInt.h"
#include "TesteInfintConstrutorPorLongInt.h"
#include "TesteInfintAtribuicaoComSubtracao.h"
#include "TesteInfintAtribuicaoComSoma.h"
#include "TesteInfintAtribuicaoComMultiplicacao.h"
#include "TesteInfintAtribuicaoComDivisao.h"
#include "TesteInfintAtribuicaoComRestoDaDivisao.h"
#include "TesteInfintPreIncremento.h"
#include "TesteInfintPreDecremento.h"
#include "TesteInfintPosIncremento.h"
#include "TesteInfintPosDecremento.h"

#include "../lib/Infint.h"

int main( int argc, const char* argv[] ){

int resultado = yaffut::Factory::Instance().Main(argc, argv);
system("pause");
return resultado;

}

