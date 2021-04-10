#include <iostream>
#include <fstream>
#include "Pojazd.h"
#include "Osobowy.h"
#include "Motor.h"
#include "baza.h"
///
///...file...
///
//Baza danych pojazdów. Wprowadzanie i usuwanie pojazdu, wyświetlanie danych o pojeździe,
// odczyt i zapis bazy danych do pliku (najlepiej w formacie binarnym).
// W programie należy utworzyć klasę Pojazd i przynajmniej jej dwie klasy pochodne,
// np.: Osobowy i Motor. Użyć funkcji wyświetlającej dane wykorzystującej polimorfizm.
void usun_linie(const char *nazwa_pliku, int n) //funkcja usuwająca niechciane wiersze z bazy danych
{
    std::ifstream is(nazwa_pliku,std::ios::binary);
    std::ofstream ofs;
    ofs.open("temp.txt", std::ofstream::out);
    char c;
    int nr_linii = 1;
    while (is.get(c))
    {
        if (c == '\n')
            nr_linii++;
        if (nr_linii != n)
            ofs << c;
    }
    ofs.close();
    is.close();
    remove(nazwa_pliku);
    rename("temp.txt", nazwa_pliku);
}
int main()
{
    std::ifstream pokaz("bazadanych.txt",std::ios::binary);
    Osobowy O("def", "def", 4);
    Motor M("def","def",3);
    std::string a,b,name;
    int znak,c,n;
    float d;
    do {


        std::cout << " Wcisnij 1 by dodac samochod \n Wcisnij 2 by wyswietlic dane o dodanym pojezdzie\n Wcisnij 3 by zobaczyc baze danych\n Wcisnij 4 by usunac dodany pojazd\n Wcisnij 5 by zakonczyc dzialanie programu\n";
        std::cin >> znak;
        switch( znak )
        {
            case 1:
                int znak1;
                std::cout<<"Wcisnij 1 by dodac samochod osobowy \n Wcisnij 2 by dodac motor";
                std::cin>>znak1;
                if(znak1==1)
                {
                    std::cin>>a>>b>>c;
                    O.inic(a, b, c);
                    baza p(O);
                    p.dodaj();
                }
                if(znak1==2)
                {
                    std::cin>>a>>b>>d;
                    M.inic(a,b,d);
                    baza p1(M);
                    p1.dodaj();
                }
                break;
            case 2:
                if(znak1==1)
                {
                    O.Wyswietl();
                }
                else{
                    M.Wyswietl();
                }
                break;
            case 3:
                pokaz.open("bazadanych.txt",std::ifstream::in);
                while (!pokaz.fail() && !pokaz.eof() )
                {
                    getline(pokaz,name);
                    std::cout << name<<std::endl;
                }
                pokaz.close();
                break;
            case 4:
                std::cout<<"Ktora pozycje chcesz usunac ?";
                std::cin>>n;
                usun_linie("bazadanych.txt", n);
                break;
            case 5:
                std::cout << "Koniec programu" << std::endl;
                break;
        }
    } while( znak != 5 );
    return 0;
}
