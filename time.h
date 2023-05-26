#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Time
{
    public:
        Time (string, vector <vector <int>>, vector <vector <int>>);

        vector <double> getMediaMovelCamp(unsigned, unsigned, vector <vector <int>>);
        double getMediaMovelTotal(unsigned, unsigned, vector <vector <int>>);
        vector <vector <int>> getGolsFeitos();
        vector <vector <int>> getGolsLevados();
        double getDesempenhoCamp(unsigned, unsigned, vector <vector <int>>);
        double getDesempenhoTotal(unsigned, vector <vector <int>>);
        double getMaxSaldoCamp(unsigned);

        string getNome();

    private:
        string nome;
        vector <vector <int>> golsFeitos;
        vector <vector <int>> golsLevados;
};