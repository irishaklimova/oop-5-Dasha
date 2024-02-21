#include "vector3d.h"
#include <cmath>

double vector3d::module() {
    return (a * a + b * b + c * c);
}

double vector3d::norma() {
    return sqrt(module());
}