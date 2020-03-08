#include "Loto.h"
#include<iostream>
#include <time.h>
#include <cmath>
#include "CreatorTalon.h"
#include "Talon.h"
#include <vector>
#include <string>
using namespace std;

Loto::Loto()
{
    //ctor
}

void Loto::inregistrare_talon_user()
{
    system("CLS");
    static int i=0;
    string nume, prenume;
    cout<<"Introduceti numele dvs.: ";
    cin>>nume;
    cout<<"Introduceti prenume dvs.: ";
    cin>>prenume;
    Talon talon(nume,prenume,creaza_talon.alege_numere());
    vectorTaloane.push_back(talon);
    i++;
}

void Loto::inregistrare_talon_generat()
{
    string nume, prenume;
    cout<<"Introduceti numele dvs.: ";
    cin>>nume;
    cout<<"Introduceti prenume dvs.: ";
    cin>>prenume;
    int n;
    cout<<"Cate taloane doriti sa generati?"<<endl;
    cin>>n;
    while (n<=0)
    {
        cout<<"Alegeti un numar intreg, pozitiv!"<<endl;
        cin>>n;
    }
    for (int j=1;j<=n;j++)
    {
        Talon talon (nume,prenume,creaza_talon.generare_numere());
        vectorTaloane.push_back(talon);
        cout << endl;
        cout<<"Se genereaza 6 numere aleatori:"<<endl;
        talon.AfiseazaTalon("generat");
    }
}
void Loto::extragere_numere_castigatoare()
{
    cout<<"Incepe extragerea numerelor castigatoare:"<<endl;
    Talon talonCastigator("Extragere","Loto",creaza_talon.generare_numere());
    talon_castigator.push_back(talonCastigator);
    talonCastigator.AfiseazaTalon("castigator");
    int gasit;
    for (int i=0; i < vectorTaloane.size();i++)
    {
        gasit = vectorTaloane[i].ComparTalon(talonCastigator);
        if (gasit == 6){
            cout<<endl;
            cout << "Talon cu 6 numere castigatoare: " << endl;
            vectorTaloane[i].AfiseazaTalon("castigator");
        }
        if (gasit == 5){
            cout << "Talon cu 5 numere castigatoare: " << endl;
            vectorTaloane[i].AfiseazaTalon("castigator");
        }
        if (gasit== 4){
            cout << "Talon cu 4 numere castigatoare: " << endl;
            vectorTaloane[i].AfiseazaTalon("castigator");
        }
    }
        cout<<endl;
        if (gasit<4){
            cout<<"Nu exista taloane castigatoare!"<<endl;
        }
        cout<<endl;
}

void Loto:: AfiseazaTaloane()
 {
     for (int i = 0; i < vectorTaloane.size(); i++)
     cout<< "Talon " << i+1 << " "<< vectorTaloane[i].GetNume()<<" "<<vectorTaloane[i].GetPrenume()<<endl;//" "<<vectorTaloane[i].GetNumere()<<" "<<endl;
}

void Loto::StergeTaloane()
{
    vectorTaloane.erase(vectorTaloane.begin(),vectorTaloane.end());
    cout<<"Toate taloanele au fost sterse!"<<endl;
    cout<<endl;
}
Loto::~Loto()
{
    //dtor
}
