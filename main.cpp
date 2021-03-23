#include <iostream>
#include <cstdlib>
using namespace std;


int Wypisywanie_Tablicy(int tablica[])
{
    for( int i = 0; i < 10; i++ )
    cout <<"Pierwsza Liczba = "<<  tablica[i] <<endl;
}
int Wypisywanie_Drugiej_Tablicy(int tablica[])
{
    for( int j = 0; j < 10; j++ )
    cout <<"Druga Liczba = "<<  tablica[j] <<endl;
}
int sumowanie_liczb(int tablica[])
{
	int suma;
    for( int i = 0; i < 10; i++ )
         suma += tablica[i];
         for( int j = 0; j < 10; j++ )
         suma += tablica[j];
   
    return suma;
}


int main()
{
    int t[9];
    for (int i=0; i<10; i++)
   	t[i] = rand()%4 +1;
   	Wypisywanie_Tablicy(t);
    for (int j=0; j<10; j++)
   	t[j] = rand()%4 +1;
    Wypisywanie_Drugiej_Tablicy(t);
    int wynik = sumowanie_liczb(t);
    cout << "Suma liczb wynosi " <<wynik<<endl;
    return 0;
}
