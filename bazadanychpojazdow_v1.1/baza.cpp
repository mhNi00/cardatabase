//
// Created by michu on 5/1/20.
//
///
///...file...
///
#include "baza.h"
#include <iostream>
#include <fstream>

baza::baza(Pojazd &poj):pojazd(poj) {
}

void baza::dodaj() const {
    pojazd.Wpisz();
}

