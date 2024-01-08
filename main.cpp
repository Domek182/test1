#include "trojkat.h"

int main()
{
    Trojkat ABC;
    cout<<"Podaj wspolrzedne punktu A\n";
    cin>>ABC.A.x;
    cin>>ABC.A.y;
    cout<<"Podaj wspolrzedne punktu B\n";
    cin>>ABC.B.x;
    cin>>ABC.B.y;
    cout<<"Podaj wspolrzedne punktu C\n";
    cin>>ABC.C.x;
    cin>>ABC.C.y;

   if (PoleTrojkata(ABC) == -1){
        printf("Z takich punktow nie mozna zbudowac trojkata");
        return 0;
    }
   printf("Pole trojkata wynosi: %f", PoleTrojkata(ABC));

}

