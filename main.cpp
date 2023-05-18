#include "configuracao.h"
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
            {0,20,8,15},
            {0,14,2,3},
            {0,0,30,0},
            {3,0,0,5},
            {0,0,0,10},
            {0,0,23,0},
            {0,0,0,0},
            {0,0,21,0},
            {0,0,4,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {5,0,0,4},
            {0,12,0,0},
            {0,0,11,0},
            {0,4,0,4},
            {1,0,0,1},
            {0,4,2,0},
            {0,0,4,0},
            {1,0,0,0},
            {0,0,4,0}
        }
    },

    {/*Athletico-PR*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {4,0,0,0},
            {0,2,0,20},
            {0,0,0,0},
            {0,4,14,0},
            {0,0,0,0},
            {0,0,1,1},
            {0,0,1,0},
            {10,1,0,0},
            {10,1,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,4},
            {0,1,0,0},
            {0,0,0,1},
            {0,1,0,0},
            {0,4,0,4},
            {4,0,0,0},
            {0,0,5,0},
            {0,1,0,1},
            {0,0,4,0}
        }
    },

    {/*Atletico-MG*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Bahia*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,5,9,10},
            {0,1,5,8},
            {0,0,0,0},
            {0,0,0,0},
            {1,5,9,10},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Botafogo*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {2,2,2,2},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Corinthians*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {20,20,20,20},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {10,10,10,10},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Coritiba*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,2,3,4},
            {1,2,3,4},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,1,1},
            {2,2,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Cruzeiro*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Cuiaba*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Flamengo*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1},
            {1,0,0,0},
            {1,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {30,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {1,0,0,0},
            {1,0,0,0},
            {1,0,0,0},
            {1,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {25,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },

    {/*Time*/
        {/*Gols realizados - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {/*Gols sofridos - Campeonato coluna, Ano linha*/
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    }
};

int main () 
{
    int opcao = 0;
    int a = -1;
    int b = -1;
    int c = -1;
    int d = -1;
    int e = -1;
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

    Liga liga("Super Liga", participantes);

    cout << endl;
    cout <<  setw(25) <<"Bem vindo! :)" << endl;

    while(opcao != 6)
    {
        opcao = 0;

        cout << endl;
        
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

                a = -1;
                b = -1;
                c = -1;
                d = -1;
                e = -1;

                cout << "Escolha 5 times da lista abaixo" << endl;
                liga.getParticipantes(); 
                cout << "Digite os numeros das opcaos separado por espaco:" << endl;
                cin >>a>>b>>c>>d>>e;
                if(a<0 || b<0 || c<0 || d<0 || e<0) //Falta validar para char e Opcoes nao existentes
                {
                    cout << "\nOpcao nao disponivel!!\n" << endl;
                    break;
                }
                //validacao
                buffer.push_back(a);
                buffer.push_back(b);
                buffer.push_back(c);
                buffer.push_back(d);
                buffer.push_back(e);

                cout << "Digite o numero da opcao correspondente ao ano inicial:" << endl;
                cin >>a;
                //validacao
                liga.getMediaMovel(a, 3, buffer);

                break;

            case 2:
                cout << "Digite o numero referente ao campeonato que deseja:" << endl;
                cin >>a;
                //validacao
                liga.getDesempenhoCamp(a, 0);
                break;

            case 3:
                liga.getDesempenhoTotal(0);
                break;

             case 4:
                cout << "Digite o numero referente ao campeonato que deseja:" << endl;
                cin >>a;
                //validacao
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