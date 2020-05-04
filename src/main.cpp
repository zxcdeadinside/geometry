#include "input.h"
#include "intersection.h"
#include <cmath>
#include <iostream>
#define PI 3.1415926

using namespace std;

int main()
{
    double aa, yy, rad;
    double qq, ww, rr, tt, jj, uu;
    circle(aa, yy, rad);
    circle_par(aa, yy, rad);
    triangle(qq, ww, rr, tt, jj, uu);
    triangle_par(qq, ww, rr, tt, jj, uu);
    intersec_cir_tr(aa, yy, rad, qq, ww, rr, tt, jj, uu);
    intersec_tr_cir(aa, yy, rad, qq, ww, rr, tt, jj, uu);
    return 0;
}
