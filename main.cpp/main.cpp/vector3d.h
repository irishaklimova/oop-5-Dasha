#pragma once
#include "norm.h"

class vector3d : public norm {
private:
    int a, b, c;
public:
    vector3d(int a, int b, int c) : a(a), b(b), c(c) {}
    double module() override;
    double norma() override;
};