//
// Created by Mario Martinez on 14/07/20.
//

#ifndef SEM10_GESTOR_H
#define SEM10_GESTOR_H
#include "iostream"
#include <math.h>
#include <stdio.h>
using namespace std;

class Gestor {
public:
    int nMovHanoi(int);
    void hanoi(string &, int n,char origem,char destino,char auxiliar);
    int factorial(int num);
};


#endif //SEM10_GESTOR_H
