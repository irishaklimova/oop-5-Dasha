#include "complex.h"
#include "norm.h"
#include <cmath>

double Complex::module() {
    return sqrt(val * val + im * im);
}

double Complex::norma() {
    return (module() * module());
}