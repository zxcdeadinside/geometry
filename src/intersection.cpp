#include <cmath>
#include <iostream>
#define PI 3.1415926
using namespace std;

void intersec_tr_cir(
        double x,
        double y,
        double radius,
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3)
{
    int a, b, c;
    a = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    b = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    c = sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y));
    if ((a <= radius || b <= radius || c <= radius)) {
        cout << "\nTriangle intersects with a circle\n ";
    } else {
        cout << "\nTriangle does not intersect with anything\n ";
    }
}

void intersec_cir_tr(
        double x,
        double y,
        double radius,
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3)
{
    int a, b, c;
    a = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    b = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    c = sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y));
    if ((a <= radius || b <= radius || c <= radius)) {
        cout << "\nCircle intersects with triangle\n ";
    } else {
        cout << "\nCircle does not intersect with anything\n ";
    }
}
