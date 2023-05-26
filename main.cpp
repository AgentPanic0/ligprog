#include "liga.h"

/*
    Programa do Trabalho1:
    Gerador aleatorio de dados para o trabalho
    Autor: David Vinicius Ferreira Moreira
*/

vector <string> anosConst {"2023", "2022", "2021", "2020", "2019", "2018", "2017", "2016", "2015"};
vector <string> campeonatosConst {"Campeonato Brasileiro de Futebol", 
                                    "Campeonato Carioca de Futebo",
                                    "Copa do Brasil de Futebol",
                                    "Copa Libertadores da America"};
enum Participante {AMERICA, ATHLETICO, ATLETICO, BAHIA, BOTAFOGO, CORINTHIANS, CORITIBA, CRUZEIRO,
                 CUIABA, FLAMENGO, FLUMINENSE, FORTALEZA, GOIAS, GREMIO, INTERNACIONAL, PALMEIRAS, 
                 BRAGANTINO, SANTOS, SAOPAULO, VASCO};

enum Tabela{REALIZADOS, SOFRIDOS};
vector <string> nomeTimes {"America-MG", 
                                    "Athletico-PR", 
                                    "Atletico-MG", 
                                    "Bahia", 
                                    "Botafogo", 
                                    "Corinthians", 
                                    "Coritiba", 
                                    "Cruzeiro", 
                                    "Cuiaba", 
                                    "Flamengo", 
                                    "Fluminense", 
                                    "Fortaleza", 
                                    "Goias", 
                                    "Gremio", 
                                    "Internacional", 
                                    "Palmeiras", 
                                    "Red Bull Bragantino", 
                                    "Santos", 
                                    "Sao Paulo",
                                    "Vasco da Gama"};

vector <vector <vector <vector <int>>>> dados 
{
    {/*America-MG*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,20,8,15},
            {1,14,2,3},
            {1,1,30,0},
            {3,1,1,5},
            {1,1,1,10},
            {1,1,23,1},
            {1,1,1,1},
            {1,1,21,1},
            {1,1,4,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {5,1,1,4},
            {1,12,1,1},
            {1,1,11,1},
            {1,4,1,4},
            {1,1,1,1},
            {1,4,2,1},
            {1,1,4,1},
            {1,1,1,1},
            {1,1,4,1}
        }
    },

    {/*Athletico-PR*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {4,1,1,1},
            {1,2,1,20},
            {1,1,1,1},
            {0,4,14,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {10,1,1,1},
            {10,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,4},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,4,1,4},
            {4,1,1,1},
            {1,1,5,1},
            {1,1,1,1},
            {1,1,4,1}
        }
    },

    {/*Atletico-MG*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Bahia*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,5,9,10},
            {1,1,5,8},
            {1,1,1,1},
            {1,1,1,1},
            {1,5,9,10},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Botafogo*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {2,2,2,2},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Corinthians*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {20,20,20,20},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {10,10,10,10},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Coritiba*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,2,3,4},
            {1,2,3,4},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {2,2,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Cruzeiro*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Cuiaba*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Flamengo*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {30,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {20,1,1,1}
        }
    },

    {/*Fluminense*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Fortaleza*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Goias*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Gremio*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Internacional*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Palmeiras*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Red Bull Bragantino*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Santos*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Sao Paulo*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    },

    {/*Vasco da Gama*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
        }
    }
};

int main () 
{
    int opcao = 0;
    unsigned a = 0;
    unsigned b = 0;
    unsigned c = 0;
    unsigned d = 0;
    unsigned e = 0;
    vector<unsigned> buffer;
    
    Time time0(nomeTimes[AMERICA], dados[AMERICA][REALIZADOS], dados[AMERICA][SOFRIDOS]);
    Time time1(nomeTimes[ATHLETICO], dados[ATHLETICO][REALIZADOS], dados[ATHLETICO][SOFRIDOS]);
    Time time2(nomeTimes[ATLETICO], dados[ATLETICO][REALIZADOS], dados[ATLETICO][SOFRIDOS]);
    Time time3(nomeTimes[BAHIA], dados[BAHIA][REALIZADOS], dados[BAHIA][SOFRIDOS]);
    Time time4(nomeTimes[BOTAFOGO], dados[BOTAFOGO][REALIZADOS], dados[BOTAFOGO][SOFRIDOS]);
    Time time5(nomeTimes[CORINTHIANS], dados[CORINTHIANS][REALIZADOS], dados[CORINTHIANS][SOFRIDOS]);
    Time time6(nomeTimes[CORITIBA], dados[CORITIBA][REALIZADOS], dados[CORITIBA][SOFRIDOS]);
    Time time7(nomeTimes[CRUZEIRO], dados[CRUZEIRO][REALIZADOS], dados[CRUZEIRO][SOFRIDOS]);
    Time time8(nomeTimes[CUIABA], dados[CUIABA][REALIZADOS], dados[CUIABA][SOFRIDOS]);
    Time time9(nomeTimes[FLAMENGO], dados[FLAMENGO][REALIZADOS], dados[FLAMENGO][SOFRIDOS]);
    Time time10(nomeTimes[FLUMINENSE], dados[FLUMINENSE][REALIZADOS], dados[FLUMINENSE][SOFRIDOS]);
    Time time11(nomeTimes[FORTALEZA], dados[FORTALEZA][REALIZADOS], dados[FORTALEZA][SOFRIDOS]);
    Time time12(nomeTimes[GOIAS], dados[GOIAS][REALIZADOS], dados[GOIAS][SOFRIDOS]);
    Time time13(nomeTimes[GREMIO], dados[GREMIO][REALIZADOS], dados[GREMIO][SOFRIDOS]);
    Time time14(nomeTimes[INTERNACIONAL], dados[INTERNACIONAL][REALIZADOS], dados[INTERNACIONAL][SOFRIDOS]);
    Time time15(nomeTimes[PALMEIRAS], dados[PALMEIRAS][REALIZADOS], dados[PALMEIRAS][SOFRIDOS]);
    Time time16(nomeTimes[BRAGANTINO], dados[BRAGANTINO][REALIZADOS], dados[BRAGANTINO][SOFRIDOS]);
    Time time17(nomeTimes[SANTOS], dados[SANTOS][REALIZADOS], dados[SANTOS][SOFRIDOS]);
    Time time18(nomeTimes[SAOPAULO], dados[SAOPAULO][REALIZADOS], dados[SAOPAULO][SOFRIDOS]);
    Time time19(nomeTimes[VASCO], dados[VASCO][REALIZADOS], dados[VASCO][SOFRIDOS]);

    vector <Time> participantes {time0, time1, time2, time3, time4, time5, time6, time7, time8, time9, 
                                time10, time11, time12, time13, time14, time15, time16, time17, time18, time19};

    Liga liga("Super Liga", participantes, anosConst, campeonatosConst);

    cout << endl;
    cout <<  setw(25) <<"Bem vindo! :)" << endl;

    while(opcao != 6)
    {
        opcao = 0;

        cout << endl;

        //Menu Principal
        cout << setw(18) << "MENU" << endl;
        cout << "Digite o numero da opcao de deseja:" << endl;
        cout << left << setw(25) << "1.Media movel" << left << setw(25) << "2.Desempenho campeonato" << endl;
        cout << left << setw(25) << "3.Desempenho anual" << left << setw(25) << "4.Maior saldo campeonato" << endl;
        cout << left << setw(25) << "5.Maior evolucao" << left << setw(25) << "6.Sair" << endl;
        cout << endl;

        cout << "Digite aqui:";
        cin >> opcao;
        cout << endl;

        switch(opcao)
        {
            case 1:

                a = liga.getQuantidadeParticipantes(); //inicializacao com valores invalidos
                b = liga.getQuantidadeParticipantes();
                c = liga.getQuantidadeParticipantes();
                d = liga.getQuantidadeParticipantes();
                e = liga.getQuantidadeParticipantes();

                cout << "Escolha 5 times da lista abaixo" << endl;
                liga.getParticipantes(); 
                cout << "Digite os numeros das opcaos separado por espaco:" << endl;
                cin >>a>>b>>c>>d>>e;

                //validacao
                if(a>liga.getQuantidadeParticipantes()-1 || b>liga.getQuantidadeParticipantes()-1  || c>liga.getQuantidadeParticipantes()-1  || d>liga.getQuantidadeParticipantes()-1  || e>liga.getQuantidadeParticipantes()-1 )
                {
                    cout << "\nConjunto de opcoes invalido!!\n" << endl;
                    break;
                }

                buffer.push_back(a);
                buffer.push_back(b);
                buffer.push_back(c);
                buffer.push_back(d);
                buffer.push_back(e);

                a = liga.getQuantidadeAnos(); //inicializacao com valor invalido

                cout << "Digite o numero da opcao correspondente ao ano inicial:" << endl;
                liga.getAnos();
                cout << "Digite aqui:";
                cin >>a;
                cout << endl;

                //validacao
                if(a>liga.getQuantidadeAnos()-1 )
                {
                    cout << "\nOpcao invalida!!\n" << endl;
                    break;
                }
                if(a>liga.getQuantidadeAnos()-1-2 )
                {
                    cout << "\nOpcao invalida!!\n>>E preciso que exista mais 2 anos apos o ano escolhido.\n" << endl;
                    break;
                }  

                liga.getMediaMovel(a, 3, buffer);

                break;

            case 2:
                cout << "Digite o numero referente a opcao de campeonato que deseja:" << endl;
                liga.getCampeonatos();
                cout << endl;
                cout << "Digite aqui:";
                cin >>a;
                cout << endl;

                //validacao
                if(a>liga.getQuantidadeCampeonatos()-1 )
                {
                    cout << "\nOpcao invalida!!\n" << endl;
                    break;
                }

                liga.getDesempenhoCamp(a, 0);

                break;

            case 3:
                cout << "Desempenho dos times no ano atual em relacao ao ano anterior:\n" << endl;
                liga.getDesempenhoTotal(0);

                break;

             case 4:
                cout << "Digite o numero referente a opcao de campeonato que deseja:" << endl;
                liga.getCampeonatos();
                cout << endl;
                cout << "Digite aqui:";
                cin >>a;
                cout << endl;

                //validacao
                if(a>liga.getQuantidadeCampeonatos()-1 )
                {
                    cout << "\nOpcao invalida!!\n" << endl;
                    break;
                }

                liga.getMaxSaldoCamp(a);

                break;

             case 5:
                liga.getMaiorEvolucao(0);
                break;

            case 6:
                cout << "Volte sempre! :)" << endl;
                cout << endl;
                break;

            default:
                cout << "Opcao invalida!!!" << endl;
        }
    }

    return 0;
}