#include "time.h"

Time::Time(string nomeTime, vector <vector <int>> feitos, vector <vector <int>> levados)
{
    nome = nomeTime;

    golsFeitos = feitos;
    golsLevados = levados;
}

vector <double> Time::getMediaMovelCamp(unsigned anoInicial, unsigned intervalo, vector<vector<int>> dados)
{
    vector <double> mediaMovel;
    double soma = 0;
    unsigned camp, anoAtual;

    for(camp = 0; camp < dados[0].size(); camp++)
    {   
        soma = 0;
        for(anoAtual = anoInicial; anoAtual < anoInicial+intervalo; anoAtual++)
        {
            soma += dados[anoAtual][camp];
        }
        mediaMovel.push_back(soma/(double)intervalo);
    }
    return mediaMovel;
}

double Time::getMediaMovelTotal(unsigned anoInicial, unsigned intervalo, vector<vector<int>> dados)
{
    double soma = 0;
    unsigned camp, anoAtual;
    
    for(camp = 0; camp < dados[0].size(); camp++)
    {
        for(anoAtual = anoInicial; anoAtual < anoInicial+intervalo; anoAtual++)
        {   
            soma += dados[anoAtual][camp];
        }
    }
    return soma/(double)intervalo;
}

double Time::getDesempenhoCamp(unsigned indiceCamp, unsigned anoAtual, vector <vector <int>> tabela)
{
    vector<double> mediaAtual;
    vector<double> mediaAnterior;

    mediaAtual = getMediaMovelCamp(anoAtual, 3, tabela);
    mediaAnterior = getMediaMovelCamp(anoAtual+1, 3, tabela);

    return mediaAtual[indiceCamp]/mediaAnterior[indiceCamp];
}

double Time::getDesempenhoTotal(unsigned anoAtual, vector <vector <int>> tabela)
{
    double mediaAtual;
    double mediaAnterior;

    mediaAtual = getMediaMovelTotal(anoAtual, 3, tabela);
    mediaAnterior = getMediaMovelTotal(anoAtual+1, 3, tabela);

    return mediaAtual/mediaAnterior;
}

double Time::getMaxSaldoCamp(unsigned indiceCamp)
{
    double maiorSaldo = 0;
    unsigned ano;

    for(ano=0; ano < golsFeitos.size(); ano++)
    {
        if(golsFeitos[ano][indiceCamp]-golsLevados[ano][indiceCamp] > maiorSaldo)
        {
            maiorSaldo = golsFeitos[ano][indiceCamp]-golsLevados[ano][indiceCamp];
        }
    }

    return maiorSaldo;

}

vector <vector <int>> Time::getGolsFeitos()
{
    return golsFeitos;
}

vector <vector <int>> Time::getGolsLevados()
{
    return golsLevados;
}

string Time::getNome()
{
    return nome;
}