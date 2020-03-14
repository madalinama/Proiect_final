#ifndef TALON_H
#define TALON_H
#include <vector>
#include <iostream>
#include <string>


class Talon
{
    public:

        //Talon(std::vector<int> talon_user);
        Talon(std::string, std::string, std::vector<int> talon_user);
        std::string GetNume () {return Nume;};
        std::string GetPrenume () {return Prenume;};
        std::vector<int>GetNumere() {return numere;};
        void AfiseazaTalon(std::string);
        int ComparTalon(Talon t);
        virtual ~Talon();

    private:
         std::vector<int>numere;
         std::string Nume, Prenume;
         int Id;

};

#endif // TALON_H
