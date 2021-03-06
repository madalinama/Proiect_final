#include "Loto.h"
#include<iostream>
#include <time.h>
#include <cmath>
#include "CreatorTalon.h"
#include "Talon.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

Loto::Loto()
{
    //ctor
}


void Loto::inregistrare_talon_user()
{
    system("CLS");
    string nume, prenume;
    cout<<"Introduceti numele dvs.: ";
    cin>>nume;
    cout<<"Introduceti prenume dvs.: ";
    cin>>prenume;
    Talon talon(nume,prenume,creaza_talon.alege_numere());
    vectorTaloane.push_back(talon);
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
             //   cout<<endl;
                cout << "Talon cu 6 numere castigatoare: " << endl;
                cout<<endl;
                vectorTaloane[i].AfiseazaTalon("castigator");
            }
            if (gasit == 5){
                cout<<endl;
                cout << "Talon cu 5 numere castigatoare: " << endl;
                vectorTaloane[i].AfiseazaTalon("castigator");
            }
            if (gasit== 4){
                cout<<endl;
                cout << "Talon cu 4 numere castigatoare: " << endl;
                vectorTaloane[i].AfiseazaTalon("castigator");
            }
        }
            if (gasit<4){
                cout<<endl;
                cout<<"Nu exista taloane castigatoare!"<<endl;
            }
            cout<<endl;
    cout<<"Doriti sa vedeti rezultatele pentru toate taloanele? (d/n) "<<endl;
    char r;
    cin>>r;
    if (r=='d'){
        AfiseazaTaloane();
    }
}

void Loto:: AfiseazaTaloane()
{
    for (int i = 0; i < vectorTaloane.size(); i++){
        cout<< "Talon " << i+1 << ": "<< vectorTaloane[i].GetNume()<<" "<<vectorTaloane[i].GetPrenume()<<": ";
        for (int j=0; j<6; j++)
        cout<<vectorTaloane[i].GetNumere()[j]<<" ";
        cout<<endl;
        cout<<"*****************************************"<<endl;
    }
}

void Loto:: SalveazaTaloaneFisier()
{
    ofstream TaloaneUserFile;
    TaloaneUserFile.open("TaloaneLoto.txt");
    if (TaloaneUserFile.is_open()){
    for (int i = 0; i < vectorTaloane.size(); i++){
        TaloaneUserFile<<endl<<"Talon " << i+1 << ": "<< vectorTaloane[i].GetNume()<<" "<<vectorTaloane[i].GetPrenume()<<": ";
        for (int j=0; j<6; j++)
        TaloaneUserFile<<vectorTaloane[i].GetNumere()[j]<<" ";
    }}
    TaloaneUserFile.close();
}

void Loto::CitireFisier()
{
    ifstream TaloaneUserFile("TaloaneLoto.txt");
    while (!TaloaneUserFile.eof()){
        char buff[100];
        int i,a,b,c,d,e,f;
        string nume,prenume;
        TaloaneUserFile.getline(buff,100);
        stringstream ss;
        ss<<buff;
        ss>>i>>a>>b>>c>>d>>e>>f;
        cout<<"Talon"<<i<<":"<<nume<<" "<<" "<<prenume<<" "<<":"<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
    }

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
