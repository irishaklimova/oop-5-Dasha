#pragma once
#include "norm.h"

class Complex : public norm {
private:
    int val, im;
public:
    Complex(int a, int b) : val(a), im(b) {}
    double module() override;
    double norma() override;
};