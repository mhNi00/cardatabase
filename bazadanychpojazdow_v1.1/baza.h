//
// Created by michu on 5/1/20.
//

#ifndef BAZADANYCHPOJAZDOW_BAZA_H
#define BAZADANYCHPOJAZDOW_BAZA_H
#include "Pojazd.h";
#include "Osobowy.h";
#include "Motor.h";

class baza {
    Pojazd & pojazd;
public:
    baza(Pojazd & poj);
    void dodaj() const;
};


#endif //BAZADANYCHPOJAZDOW_BAZA_H
