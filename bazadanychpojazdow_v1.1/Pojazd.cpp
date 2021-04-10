//
// Created by michu on 5/1/20.
//
///
///...file...
///
#include "Pojazd.h"

Pojazd::Pojazd(std::string mar, std::string mod) :marka(mar),model(mod) {

}

void Pojazd::Wyswietl() const {
    std::cout<<marka<<" ";
    std::cout<<model;
}

void Pojazd::Wpisz() const {

}
