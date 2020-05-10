#include "Talon.h"
#include <vector>
#include <iostream>
using namespace std;


Talon::Talon(string nume,string prenume,vector<int> talon_user):Nume(nume),Prenume(prenume),numere(talon_user) {}

int Talon::ComparTalon(Talon t){
    int gasit = 0;
    for (int i=0; i<6; i++){
        int nr = numere[i];
        for (int j=0; j<6; j++){
            int nrT = t.GetNumere()[j];
            if (nr == nrT) gasit++;
        }
    }
    return gasit;
}

void Talon::AfiseazaTalon(string tip)
{
    for (int i=0;i<6;i++)
    cout<<endl;
    cout<<"Primul numar " << tip << " este:      "<<numere[0]<<endl;
    cout<<"Al doilea numar " << tip << " este:   "<<numere[1]<<endl;
    cout<<"Al treilea numar " << tip << " este:  "<<numere[2]<<endl;
    cout<<"Al patrulea numar " << tip << " este: "<<numere[3]<<endl;
    cout<<"Al cincelea numar " << tip << " este: "<<numere[4]<<endl;
    cout<<"Al saselea numar " << tip << " este:  "<<numere[5]<<endl;

}

Talon::~Talon()
{
    //dtor
}
