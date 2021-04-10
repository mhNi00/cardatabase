//
// Created by michu on 5/2/20.
//

#include <fstream>
#include <utility>
#include "Motor.h"
///
///...file...
///
Motor::Motor(const std::string &mar, const std::string &mod, float czas):Pojazd(mar,mod),czas_do_setki(czas) {
}

void Motor::Wyswietl() const {
    std::cout<<marka<<" ";
    std::cout<<model<<" ";
    std::cout<<czas_do_setki;
}

void Motor::inic(std::string a, std::string b, float c) {
    marka=a;
    model=b;
    czas_do_setki=c;

}
void Motor::Wpisz() const {
    std::ofstream bazadanych;
    bazadanych.open("bazadanych.txt",std::ios_base::out | std::ios_base::app);
    bazadanych<<marka<<" "<<model<<" "<<czas_do_setki<<std::endl;
    bazadanych.close();


}
