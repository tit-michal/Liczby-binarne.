#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int b,c,w;
int binarne;
fstream odczyt;
string a;


int Zadanie1()
{
    odczyt.open("dane.txt",ios::in);
    while(odczyt.good())
    {
        odczyt>> a;
        if(count(a.begin(), a.end(), '0')>count(a.begin(), a.end(), '1'))
        {
         b++;
        }
    }
    cout<<"Wynikiem jest liczba: "<<b<<". "<<b<<" liczby maja w swoim zapisie wiecej zer niz       jedynek)."<<endl;
    odczyt.close();

}

int Zadanie2()
{
odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
        {
        odczyt>>a;
        int dlugosc=a.size();
        if(a[dlugosc-1]=='0')
            b++;
        if(a[dlugosc-1]=='0' && a[dlugosc-2]=='0' && a[dlugosc-3]=='0')
            c++;
    }
    cout<<"Ilosc liczb, ktore sa podzielne przez 2: "<<b<<endl;
    cout<<"Ilosc liczb, ktore sa podzielne przez 8: "<<c<<endl;
    odczyt.close();
}

int main()
{
    cout<<"Zadanie 1, wybierz 1: "<<endl;
    cout<<"Zadanie 2, wybierz 2: "<<endl;
    cout<<"Wybrales opcje numer: ";
    cin>>w;
    switch(w)
    {
    case 1:
        Zadanie1();
        break;
    case 2:
        Zadanie2();
        break;
    default:
        cout<<"Nie ma takiej opcji do wyboru."<<endl;
    }
    return 0;
}
