#include "input.h"
#include "intersection.h"
#include <cmath>
#include <iostream>
#define PI 3.1415926

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double x0, y0, rad;
    if (triangle_par(x1, y1, x2, y2, x3, y3) == true) {
        intersec_tr_cir(x0, y0, rad, x1, y1, x2, y2, x3, y3);
    }
    if (circle_par(x0, y0, rad) == true) {
        intersec_cir_tr(x0, y0, rad, x1, y1, x2, y2, x3, y3);
    }
    return 0;
}
