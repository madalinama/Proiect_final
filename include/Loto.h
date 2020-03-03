#ifndef LOTO_H
#define LOTO_H
#include <vector>



class Loto
{
    public:
        Loto();
        virtual ~Loto();
        std::vector<int> numere_norocoase();


    protected:

    private:
       std::vector <int> talon_castigator{6};
       bool verificare_numere_duplicate();
};

#endif // LOTO_H
