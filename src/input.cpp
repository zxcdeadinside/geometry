#include <cmath>
#include <iostream>
#define PI 3.1415926

using namespace std;

int tr_in(
        double& x1, double& y1, double& x2, double& y2, double& x3, double& y3)
{
    cout << "Enter triangle coordinates: \n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << endl;
    return 0;
}
int circ_in(double& x0, double& y0, double& rad)
{
    cout << "Enter circle coordinates and radius: \n";
    cin >> x0 >> y0 >> rad;
    cout << endl;
    return 0;
}

int triangle_par(
        double& x1, double& y1, double& x2, double& y2, double& x3, double& y3)
{
    double perimeter, area;
    double a, b, c, pol;
    bool flag = false;
    cout << "triangle(" << x1 << " " << y1 << " " << x2 << " " << y2 << " "
         << x3 << " " << y3 << ")\n";
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
        cout << "Error: invalid triangle input\n" << endl;
    } else {
        perimeter = a + b + c;
        pol = (a + b + c) / 2;
        area = sqrt(pol * (pol - a) * (pol - b) * (pol - c));
        cout << "perimeter = " << perimeter << endl << "area = " << area;
        flag = true;
    }

    return flag;
}

int circle_par(double& x0, double& y0, double& rad)
{
    double perimeter, area;
    bool flag = false;
    cout << "circle(" << x0 << " " << y0 << " " << rad << ")\n";
    if (rad <= 0)
        cout << "Error: invalid radius input\n" << endl;
    else {
        perimeter = 2 * PI * rad;
        area = PI * pow(rad, 2);

        cout << "perimeter = " << perimeter << endl << "area = " << area;
        flag = true;
    }
    return flag;
}
