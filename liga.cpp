#include "liga.h"
#include <iomanip>

extern vector <string> anosConst;
extern vector <string> campeonatosConst;

Liga::Liga(string nomeLiga, vector <Time> participantes)
{
    nome = nomeLiga;
    listaTimes = participantes;
}

void Liga::getMediaMovel(unsigned anoInicial, unsigned intevalo, vector<unsigned> opcoes)
{
    vector <double> listaMediaMovelCamp;
    unsigned indiceMedia;

    cout << "\n--------------------------------------"<< endl;

    for(int i : opcoes)
    {
        cout << "Time: " << listaTimes[i].getNome() << "      Anos: "<< anosConst[anoInicial]<< "-" << anosConst[anoInicial+intevalo-1] << endl;
        
        cout << "Gols realizados:" << endl;
        listaMediaMovelCamp = listaTimes[i].getMediaMovelCamp(anoInicial, intevalo, listaTimes[i].getGolsFeitos());
        for(indiceMedia = 0; indiceMedia < listaMediaMovelCamp.size(); indiceMedia++)
        {
            cout << campeonatosConst[indiceMedia] << ": " << listaMediaMovelCamp[indiceMedia] <<  endl;
        }
        cout << "Total: " << listaTimes[i].getMediaMovelTotal(anoInicial, intevalo, listaTimes[i].getGolsFeitos()) << endl;

        cout << "Gols sofridos:" << endl;
        listaMediaMovelCamp = listaTimes[i].getMediaMovelCamp(anoInicial, intevalo, listaTimes[i].getGolsLevados());
        for(indiceMedia = 0; indiceMedia < listaMediaMovelCamp.size(); indiceMedia++)
        {
            cout << campeonatosConst[indiceMedia] << ": " << listaMediaMovelCamp[indiceMedia] <<  endl;
        }
        cout << "Total: " << listaTimes[i].getMediaMovelTotal(anoInicial, intevalo, listaTimes[i].getGolsLevados()) << endl;

        cout << "--------------------------------------\n"<< endl;
    }
}

void Liga::getParticipantes()
{
    unsigned i;
    for(i=0; i<listaTimes.size()/2; i++)
    {
        cout << left << i << left << setw(25) << "." + listaTimes[i].getNome() << left << i+(listaTimes.size()/2) << left << setw(25) << "." + listaTimes[i+(listaTimes.size()/2)].getNome() << endl;
    }
    if(listaTimes.size()%2 != 0)
    {
        cout << setw(20) << listaTimes[-1].getNome() << endl;
    }
}

void Liga::getDesempenhoCamp(unsigned indiceCamp, unsigned anoAtual)
{
    Time time();
    double desempenhoSofridos, desempenhoRealisados;
    vector <Time> ruim;
    vector <Time> estavel;
    vector <Time> bom;

    for(Time time : listaTimes)
    {   
        desempenhoSofridos = time.getDesempenhoCamp(indiceCamp, anoAtual, time.getGolsLevados());
        desempenhoRealisados = time.getDesempenhoCamp(indiceCamp, anoAtual, time.getGolsFeitos());
        
        if(desempenhoRealisados > 1+criterioDesempenho || desempenhoSofridos < 1-criterioDesempenho)
        {
            bom.push_back(time);
            cout << "entrei" << endl;
        }

        if(desempenhoRealisados < 1-criterioDesempenho || desempenhoSofridos > 1+criterioDesempenho)
        {
            ruim.push_back(time);
            cout << "entrei" << endl;
        }

        if(desempenhoRealisados > 1-criterioDesempenho && desempenhoRealisados < 1+criterioDesempenho && desempenhoSofridos < 1+criterioDesempenho && desempenhoSofridos > 1-criterioDesempenho)
        {
            estavel.push_back(time);
            cout << "entrei" << endl;
        }
    }

    cout << "Times com um bom desempenho:" << endl;
    for(Time time:bom)
    {
        cout << time.getNome() << endl;
    }

    cout << "Times com um desempenho estavel:" << endl;
    for(Time time:estavel)
    {
        cout << time.getNome() << endl;
    }

    cout << "Times com um desempenho ruim:" << endl;
    for(Time time:ruim)
    {
        cout << time.getNome() << endl;
    }

}

void Liga::getDesempenhoTotal(unsigned anoAtual)
{
    Time time();
    double desempenhoSofridos, desempenhoRealisados;
    vector <Time> ruim;
    vector <Time> estavel;
    vector <Time> bom;

    for(Time time : listaTimes)
    {   
        desempenhoSofridos = time.getDesempenhoTotal(anoAtual, time.getGolsLevados());
        desempenhoRealisados = time.getDesempenhoTotal(anoAtual, time.getGolsFeitos());
        
        if(desempenhoRealisados > 1+criterioDesempenho || desempenhoSofridos < 1-criterioDesempenho)
        {
            bom.push_back(time);
            cout << "entrei" << endl;
        }

        if(desempenhoRealisados < 1-criterioDesempenho || desempenhoSofridos > 1+criterioDesempenho)
        {
            ruim.push_back(time);
            cout << "entrei" << endl;
        }

        if(desempenhoRealisados > 1-criterioDesempenho && desempenhoRealisados < 1+criterioDesempenho && desempenhoSofridos < 1+criterioDesempenho && desempenhoSofridos > 1-criterioDesempenho)
        {
            estavel.push_back(time);
            cout << "entrei" << endl;
        }
    }

    cout << "Times com um bom desempenho:" << endl;
    for(Time time:bom)
    {
        cout << time.getNome() << endl;
    }

    cout << "Times com um desempenho estavel:" << endl;
    for(Time time:estavel)
    {
        cout << time.getNome() << endl;
    }

    cout << "Times com um desempenho ruim:" << endl;
    for(Time time:ruim)
    {
        cout << time.getNome() << endl;
    }
}

void Liga::getMaxSaldoCamp(unsigned iniceCamp)
{
    Time timeMaiorSaldo(listaTimes[0]);

    for(Time time:listaTimes)
    {
        if(time.getMaxSaldoCamp(iniceCamp) > timeMaiorSaldo.getMaxSaldoCamp(iniceCamp))
        {
            timeMaiorSaldo = time;
        }
    }

    cout << "Time com o maior saldo de gols do historico:" << endl;
    cout << timeMaiorSaldo.getNome() << endl;

}

void Liga::getMaiorEvolucao(unsigned anoAtual)
{
    double melhorAtaque, melhorDefesa;
    Time timeMelhorAtaque(listaTimes[0]);
    Time timeMelhorDefesa(listaTimes[0]);

    melhorAtaque = listaTimes[0].getMediaMovelTotal(anoAtual, 1, listaTimes[0].getGolsFeitos())-listaTimes[0].getMediaMovelTotal(anoAtual+1, 1, listaTimes[0].getGolsFeitos());
    melhorDefesa = listaTimes[0].getMediaMovelTotal(anoAtual, 1, listaTimes[0].getGolsLevados())-listaTimes[0].getMediaMovelTotal(anoAtual+1, 1, listaTimes[0].getGolsLevados());

    for(Time time:listaTimes)
    {
        if(time.getMediaMovelTotal(anoAtual, 1, time.getGolsFeitos())-time.getMediaMovelTotal(anoAtual+1, 1, time.getGolsFeitos()) > melhorAtaque)
        {
            melhorAtaque = time.getMediaMovelTotal(anoAtual, 1, time.getGolsFeitos())-time.getMediaMovelTotal(anoAtual+1, 1, time.getGolsFeitos());
            timeMelhorAtaque = time;
        }
        if(time.getMediaMovelTotal(anoAtual, 1, time.getGolsLevados())-time.getMediaMovelTotal(anoAtual+1, 1, time.getGolsLevados()) < melhorDefesa)
        {
            melhorDefesa = time.getMediaMovelTotal(anoAtual, 1, time.getGolsLevados())-time.getMediaMovelTotal(anoAtual+1, 1, time.getGolsLevados());
            timeMelhorDefesa = time;
        }
    }

    cout << "Time com maior evolucao do ano passado para o atual:" << endl;
    cout << "No ataque:" << endl;
    cout << timeMelhorAtaque.getNome() << endl;
    cout << "Na defesa:" << endl;
    cout << timeMelhorDefesa.getNome() << endl;
}

string Liga::getNome()
{
    return nome;
}