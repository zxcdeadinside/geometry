#include <cmath>
#include <iostream>
#define PI 3.1415926
using namespace std;

void intersec_tr_cir(
        double& x0,
        double& y0,
        double& rad,
        double& x1,
        double& y1,
        double& x2,
        double& y2,
        double& x3,
        double& y3)
{
    int a, b, c;
    a = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
    b = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
    c = sqrt((x3 - x0) * (x3 - x0) + (y3 - y0) * (y3 - y0));
    if ((a <= rad || b <= rad || c <= rad)) {
        cout << "\nTriangle intersects with a circle\n ";
    } else {
        cout << "\nTriangle does not intersect with anything\n ";
    }
}

void intersec_cir_tr(
        double& x0,
        double& y0,
        double& rad,
        double& x1,
        double& y1,
        double& x2,
        double& y2,
        double& x3,
        double& y3)
{
    int a, b, c;
    a = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
    b = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
    c = sqrt((x3 - x0) * (x3 - x0) + (y3 - y0) * (y3 - y0));
    if ((a <= rad || b <= rad || c <= rad)) {
        cout << "\nCircle intersects with triangle\n ";
    } else {
        cout << "\nCircle does not intersect with anything\n ";
    }
}
