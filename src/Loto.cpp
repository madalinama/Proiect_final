#include "Loto.h"
#include<iostream>
#include <time.h>
#include <cmath>
using namespace std;

Loto::Loto()
{
    //ctor
}

vector <int> Loto::numere_norocoase()  // de tip talon
{
    cout<<"Incepe extragerea numerelor castigatoare:"<<endl;

    srand(time(NULL));
      for (int i = 0; i<6; ++i)
      {
           do {
                verificare_numere_duplicate();
           }while (false);

          talon_castigator.push_back(rand()%49+1);
      }
    cout<<endl;

    cout<<"Primul numar castigator este:      "<<talon_castigator[0]<<endl;
    cout<<"Al doilea numar castigator este:   "<<talon_castigator[1]<<endl;
    cout<<"Al treilea numar castigator este:  "<<talon_castigator[2]<<endl;
    cout<<"Al patrulea numar castigator este: "<<talon_castigator[3]<<endl;
    cout<<"Al cincelea numar castigator este: "<<talon_castigator[4]<<endl;
    cout<<"Al saselea numar castigator este:  "<<talon_castigator[5]<<endl;


return talon_castigator;
}

bool Loto:: verificare_numere_duplicate()
{
bool unic = false;
int numar_random = rand()%49+1;
   for (int elem:talon_castigator)
      {
          if (elem==numar_random) {
          unic=true;
        break;
        }
    }
return unic;
}


Loto::~Loto()
{
    //dtor
}
