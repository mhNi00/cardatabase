//
// Created by michu on 5/2/20.
//

#ifndef BAZADANYCHPOJAZDOW_MOTOR_H
#define BAZADANYCHPOJAZDOW_MOTOR_H
#include <iostream>
#include "Pojazd.h"

class Motor:public Pojazd {
    float czas_do_setki;
public:
    explicit Motor(const std::string &mar,const std::string &mod,float czas);
    void Wyswietl() const;
    void inic(std::string string, std::string basicString, float i);
    void Wpisz() const override;

};


#endif //BAZADANYCHPOJAZDOW_MOTOR_H
