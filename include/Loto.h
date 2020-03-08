#ifndef LOTO_H
#define LOTO_H
#include <vector>
#include "CreatorTalon.h"
#include "Talon.h"


class Loto
{
    public:
        Loto();
        virtual ~Loto();
        void extragere_numere_castigatoare();
        void inregistrare_talon_user ();
        void inregistrare_talon_generat ();
        void AfiseazaTaloane();
        void StergeTaloane();


    protected:

    private:
       std::vector <Talon> talon_castigator;
       CreatorTalon creaza_talon;
       std::vector<Talon>vectorTaloane;
};

#endif // LOTO_H
