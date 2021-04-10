//
// Created by michu on 5/1/20.
//

#ifndef BAZADANYCHPOJAZDOW_POJAZD_H
#define BAZADANYCHPOJAZDOW_POJAZD_H
#include <iostream>

class Pojazd {
protected:
    std::string model;
    std::string marka;
public:
    Pojazd(std::string mar,std::string mod);
    virtual void Wyswietl() const;
    virtual void Wpisz() const;
};


#endif //BAZADANYCHPOJAZDOW_POJAZD_H
