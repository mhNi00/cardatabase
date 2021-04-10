//
// Created by michu on 5/1/20.
//
#include <ostream>
#include <iostream>
#include <fstream>
#include "Osobowy.h"
///
///...file...
///
Osobowy::Osobowy(const std::string &mar,const std::string &mod, int drz): Pojazd(mar,mod),ilosc_drzwi(drz) {}

void Osobowy::Wyswietl() const {
    std::cout<<marka<<" ";
    std::cout<<model<<" ";
    std::cout<<ilosc_drzwi;
}

void Osobowy::inic(std::string a,std::string b,int c) {
    marka=a;
    model=b;
    ilosc_drzwi=c;
}

void Osobowy::Wpisz() const {
    std::ofstream bazadanych;
    bazadanych.open("bazadanych.txt",std::ios_base::out | std::ios_base::app);
    bazadanych<<marka<<" "<<model<<" "<<ilosc_drzwi<<std::endl;
    bazadanych.close();


}
