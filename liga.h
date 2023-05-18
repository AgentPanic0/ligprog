#include <string>
#include <vector>
#include "time.h"

class Liga
{
    public:
        Liga (string,  vector <Time>);

        void getMediaMovel(unsigned, unsigned, vector <unsigned>);
        void getParticipantes();
        void getDesempenhoCamp(unsigned, unsigned);
        void getDesempenhoTotal(unsigned);
        void getMaxSaldoCamp(unsigned);
        void getMaiorEvolucao(unsigned);

        string getNome();

    private:
        string nome;
        vector <Time> listaTimes;
        double criterioDesempenho = 0.05;
};