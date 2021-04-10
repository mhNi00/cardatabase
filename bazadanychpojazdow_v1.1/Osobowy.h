//
// Created by michu on 5/1/20.
//
#include "Pojazd.h"
#ifndef BAZADANYCHPOJAZDOW_OSOBOWY_H
#define BAZADANYCHPOJAZDOW_OSOBOWY_H


class Osobowy :public Pojazd{
    int ilosc_drzwi;
public:
    explicit Osobowy(const std::string &mar,const std::string &mod,int drz);
    void Wyswietl() const;
    void inic(std::string string, std::string basicString, int i);
    void Wpisz() const override;
};


#endif //BAZADANYCHPOJAZDOW_OSOBOWY_H
