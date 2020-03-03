#ifndef CREATORTALON_H
#define CREATORTALON_H
#include <vector>

class CreatorTalon
{
    public:
        CreatorTalon();
        virtual ~CreatorTalon();

        //inregistreaza_talon(std::vector<int> talon_user);
        std::vector<int> inregistreaza_talon ();//std::vector<int> talon_user);
        std::vector<int> generare_numere();

    protected:

    private:
        std::vector<int>talon_user;
        bool verificare_numere_duplicate();

};

#endif // CREATORTALON_H