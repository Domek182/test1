#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    int NaSwoimMiejscu;
    int NieNaSwoimMiejscu;
    int n;
    cout<<"Podaj dlugosc szyfru: ";
    cin>>n;
    int SZYFR[n];
    int ODGADNIECIE[n];
    for (int i=0; i<n; i++){
        SZYFR[i]=rand()%10;
        cout<<SZYFR[i];
    }

    do{
        int tab[n];
        for (int i=0; i<n; i++){
            tab[i] = -1;
        }
        NaSwoimMiejscu = 0;
        NieNaSwoimMiejscu = 0;
        cout<<"Sprobuj zgadnac szyfr: \n";
        for (int i=0; i<n; i++){
            cin>>ODGADNIECIE[i];
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if((ODGADNIECIE[j]==SZYFR[i])&& (tab[i]==-1)){
                    NieNaSwoimMiejscu++;
                    tab[i] = SZYFR[i];
                    break;
                }
            }
                 if (ODGADNIECIE[i]==SZYFR[i]){
                        NaSwoimMiejscu++;
                       // tab[i] = SZYFR[i];
                        }



        }

    cout<<"Cyfry w szyfsze na swoim miejscu: "<<NaSwoimMiejscu<<"\n";
    cout<<"Cyfry w szyfsze nie na swoim miejscu: "<<NieNaSwoimMiejscu<<"\n";

    }
    while(NaSwoimMiejscu != n);
    cout<<"Udalo ci sie odgadnac szyfr!";









   /* for (int i=0; i < n; i++)
      cout << "LOS[" << i <<"]=" << LOS[i] << endl;

    cout << "Wylosowanie pierwsze: " << rand()%10 << endl;
    int liczba = rand();
    cout << "Wylosowanie drugie: " << liczba%10 << endl;
    liczba = rand();
    cout << "Wylosowanie trzecie: " << liczba%10 << endl;
    return 0;
    // */
}
