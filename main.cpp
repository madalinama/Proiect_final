#include <iostream>
#include "stdlib.h"
#include "Loto.h"
#include "CreatorTalon.h"
#include <time.h>
#include "Talon.h"

using namespace std;

void Meniu()
{
    system("CLS");
    cout<<"******** Loto 6/49 *******"<<endl;
    cout<<endl;
    cout<<"Alegeti optiunea dorita:"<<endl;
    cout<<endl;
    cout<<"1.Inregistreaza talon de joc"<<endl;
    cout<<"2.Genereaza taloane de joc"<<endl;
    cout<<"3.Afiseaza taloanele de joc participante"<<endl;
    cout<<"4.Extragere numere castigatoare"<<endl;
    cout<<"5.Stergere taloane"<<endl;
    cout<<"0.Iesire"<<endl;
    cout<<endl;
}

void SubMeniu()
{
    system("CLS");
    cout<<"1.Revenire la ecranul anterior!"<<endl;
}

int main()
{
    Loto loto;
    unsigned int opt=1;
    while (opt!=0)
    {
        Meniu();
        cin>>opt;
        if (opt<=0 ||opt>=7)
        {
            cout<<"Optiunea introdusa nu este valida! Va rugam introduceti o optiune valida!"<<endl;
        }
        else
        {
            switch (opt)
            {
                case 1:{try
                        {loto.inregistrare_talon_user();}
                            catch (const char *ex){
                            cout<<ex<<endl;system("Pause");break;
                            cin.clear();
                            cin.ignore(1,'\n');}};break;
                case 2:system("CLS");loto.inregistrare_talon_generat();system("Pause");break;
                case 3:system("CLS");loto.AfiseazaTaloane();system("Pause");break;
                case 4:system("CLS");loto.extragere_numere_castigatoare();system("Pause");break;
                case 5:system("CLS");loto.StergeTaloane();system("Pause");break;
                case 0:exit(0);
            }
        }
        system("CLS");
    }


return 0;
}
