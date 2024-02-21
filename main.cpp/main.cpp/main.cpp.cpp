#include "complex.h"
#include "vector3d.h"
#include <iostream>
using namespace std;

int main() {
    Complex s(2, 3);
    vector3d d(1, 2, 3);
    cout << s.module() << " " << s.norma() << endl;
    cout << d.module() << " " << d.norma() << endl;
}