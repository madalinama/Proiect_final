#include "CreatorTalon.h"
#include <vector>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

CreatorTalon::CreatorTalon(){}

std::vector<int> CreatorTalon::inregistreaza_talon ()
 {
  cout<<"Introduceti 6 numere distincte intre 1 si 49!"<<endl;
  for(int i = 0; i < 6;)
    {
        int n;
        cin >> n;
        while (n<1||n >49)
                 {cout<<"Numarul introdus nu este valid! Introduceti un numar valid!"<<endl;
                  cin>>n;
                 }
        bool unic = false;
        for(int j = 0; j < i; j++)
            if(n == talon_user[j])
            {
                unic = true;
                cout<<"Acest numar a fost deja introdus! Introduceti un numar nou!"<<endl;
                break;
            }
        if(!unic)
        {
            talon_user.push_back (n);
            i++;
        }
    }
    cout<<endl;

    cout<<"Primul numar introdus este:      "<<talon_user[0]<<endl;
    cout<<"Al doilea numar introdus este:   "<<talon_user[1]<<endl;
    cout<<"Al treilea numar introdus este:  "<<talon_user[2]<<endl;
    cout<<"Al patrulea numar introdus este: "<<talon_user[3]<<endl;
    cout<<"Al cincelea numar introdus este: "<<talon_user[4]<<endl;
    cout<<"Al saselea numar introdus este:  "<<talon_user[5]<<endl;
return talon_user;
 }

std::vector<int> CreatorTalon::generare_numere()  // de tip talon
{
    cout<<"Se genereaza 6 numere aleatori:"<<endl;
    bool unic;
    int numar_random = 0;
    srand(time(NULL));
      for (int i = 0; i<6; ++i)
      {
          do {
                unic = false;
                numar_random =rand()%49+1;
                for (int j = 0; j<6; ++j) {
                    if (talon_user[j]==numar_random) {
                        unic=true;
                        break;
                    }
                }
          } while(unic);
          talon_user.push_back(numar_random);

      }
    cout<<endl;

    cout<<"Primul numar generat este:      "<<talon_user[0]<<endl;
    cout<<"Al doilea numar generat este:   "<<talon_user[1]<<endl;
    cout<<"Al treilea numar generat este:  "<<talon_user[2]<<endl;
    cout<<"Al patrulea numar generat este: "<<talon_user[3]<<endl;
    cout<<"Al cincelea numar generat este: "<<talon_user[4]<<endl;
    cout<<"Al saselea numar generat este:  "<<talon_user[5]<<endl;

return talon_user;
}

bool CreatorTalon:: verificare_numere_duplicate()

{
   bool unic = false;
   int numar_random = rand()%49+1;
   for (int elem:talon_user)
      {
          if (elem==numar_random) {
          unic=true;
        break;
        }
    }
    return unic;
}


CreatorTalon::~CreatorTalon()
{
    //dtor
}
