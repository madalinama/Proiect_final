#include "CreatorTalon.h"
#include <vector>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

CreatorTalon::CreatorTalon(){srand(time(NULL));}

std::vector<int> CreatorTalon::alege_numere()
{
    system("CLS");
    std::vector<int>numere_user_temp;
    cout<<"Introduceti 6 numere distincte intre 1 si 49 sau 0 pentru a reveni la ecranul anterior!"<<endl;
    for(int i = 0; i < 6;)
    {
        int n;
        cin >> n;
        if (cin.fail()){
            throw "Nu ati introdus un numar! Talon Invalid!";
        }
        if (n==0)
            void Menu();
        while (n<1||n >49)
            {cout<<"Numarul introdus nu este valid! Introduceti un numar valid!"<<endl;
            cin>>n;
            }
        bool unic = false;
        for(int j = 0; j < i; j++)
            if(n == numere_user_temp[j])
            {
                unic = true;
                cout<<"Acest numar a fost deja introdus! Introduceti un numar nou!"<<endl;
                break;
            }
        if(!unic)
        {
            numere_user_temp.push_back (n);
            i++;
        }
    }
    cout<<endl;
    cout<<"Primul numar introdus este:      "<<numere_user_temp[0]<<endl;
    cout<<"Al doilea numar introdus este:   "<<numere_user_temp[1]<<endl;
    cout<<"Al treilea numar introdus este:  "<<numere_user_temp[2]<<endl;
    cout<<"Al patrulea numar introdus este: "<<numere_user_temp[3]<<endl;
    cout<<"Al cincelea numar introdus este: "<<numere_user_temp[4]<<endl;
    cout<<"Al saselea numar introdus este:  "<<numere_user_temp[5]<<endl;
return numere_user_temp;
 }


std::vector<int> CreatorTalon::generare_numere()
{
    std::vector<int>numere_user_temp;
    bool unic;
    int numar_random = 0;
    for (int i = 0; i<6; ++i)
    {
        do{
            unic = false;
            numar_random =rand()%49+1;
            for (int j = 0; j<i; ++j) {
                if (numere_user_temp[j]==numar_random){
                    unic=true;
                    break;
                }
            }
        }while(unic);
            numere_user_temp.push_back(numar_random);
     }
return numere_user_temp;
}

/*
bool CreatorTalon:: verificare_numere_duplicate()

{
   bool unic = false;
   int numar_random = rand()%49+1;
   for (int elem:numere_user)
      {
          if (elem==numar_random) {
          unic=true;
        break;
        }
    }
return unic;
}
*/

CreatorTalon::~CreatorTalon()
{
    //dtor
}
