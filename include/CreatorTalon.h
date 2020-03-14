#ifndef CREATORTALON_H
#define CREATORTALON_H
#include <vector>

class CreatorTalon
{
    public:
        CreatorTalon();
        virtual ~CreatorTalon();

        //inregistreaza_talon(std::vector<int> talon_user);
        std::vector<int> alege_numere ();
        std::vector<int> generare_numere();

    private:
        std::vector<int>numere_user;
        bool verificare_numere_duplicate();



};

#endif // CREATORTALON_H
