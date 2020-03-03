#include <iostream>
#include "stdlib.h"
#include "Loto.h"
#include "CreatorTalon.h"

using namespace std;

void Meniu()
{
    system("CLS");
    cout<<"Alegeti optiunea dorita:"<<endl;
    cout<<endl;
    cout<<"1.Inregistreaza talon de joc"<<endl;
    cout<<"2.Genereaza taloane de joc"<<endl;
    cout<<"3.Afiseaza taloanele de joc participante"<<endl;
    cout<<"4.Extragere numere castigatoare"<<endl;
    cout<<"5.Stergere taloane"<<endl;
    cout<<"0.Iesire"<<endl;
}

int main()
{
    CreatorTalon creaza_talon;
    Meniu();
    unsigned int opt=1;
    while (opt!=0)
    {
        cin>>opt;
            if (opt<=0 ||opt>=7)
                cout<<"Optiunea introdusa nu este valida! Va rugam introduceti o optiune valida!"<<endl;
            else
        system("CLS");
        switch (opt)
        {
            case 1:creaza_talon.inregistreaza_talon();break;
            case 2:{//int n;
                   // cout<<"Cate taloane doriti sa generati?"<<endl;
                  //  cin>>n;
                  //  for (int k=0; k<n; k++)
                        {creaza_talon.generare_numere();};
                    }
        }

    }

Loto a;
a.numere_norocoase();
cout<<endl;
//CreatorTalon creaza_talon;
//creaza_talon.inregistreaza_talon();
cout<<endl;
creaza_talon.generare_numere();

return 0;
}
