#include <iostream>
#include <fstream> 

using namespace std; 

bool pierwsza(int liczba)
{
for (int i=2; i<liczba/2; i++)
     if (liczba %i == 0) 
     {
           return false;
     }
               return true;
} 

int main() {
    
    ifstream plik;
    plik.open("liczby.txt");
    ofstream plik1;
    plik1.open("wyniki.txt");
    int liczba;
    
    while(!plik.eof()){
    plik>>liczba;
    
    if(pierwsza(liczba)) 
        cout<<liczba<<" pierwsza"<<endl;
    else
        cout<<liczba<<" zlozona"<<endl; 

    }
    return 0;
}
