#include <cmath>
#define PI 3.14
#include <iostream>

using namespace std;

void circle(double x0, double y0, double rad)
{
    double perimeter0, area0;
    if (rad < 0)
        cout << "Error: invalid radius input";
    else {
        perimeter0 = 2 * PI * rad;
        area0 = PI * pow(rad, 2);

        cout << "perimeter = " << perimeter0 << endl << "area = " << area0 << endl;
             
        return;
    }
}
void triangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double perimeter, area;
    double a, b, c, sin_ab, temp1, temp2, pol;

    temp1 = x2 - x1;
    temp2 = y2 - y1;
    a = sqrt(pow(temp1, 2) + pow(temp2, 2));
    temp1 = x3 - x2;
    temp2 = y3 - y2;
    b = sqrt(pow(temp1, 2) + pow(temp2, 2));
    temp1 = x3 - x4;
    temp2 = y3 - y4;
    c = sqrt(pow(temp1, 2) + pow(temp2, 2));

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
sin_ab = (1 - pow(pow(b,2) + pow(c,2) - pow(a,2),2))/(pow(2*b*c,2));
perimeter = a + b + c;
pol = (a+b+c)/2;
area = sqrt(pol*(pol-a)*(pol-b)*(pol-c));
cout << "perimeter = " << perimeter << endl << "area = " << area << endl;
        }
    else
        cout << "Error: invalid triangle input";
    return;
}
    
int main()
{
	double x, y, radius;
	double q, w, r, t, j, u, i, o, p, f, g;

	cout << "Input your coord for circle: ";
	cin >> x >> y >> radius;
	cout << endl;
	cout << "Input your coord for triangle: ";
	cin >> q >> w >> r >> t >> j >> u >> i >> o >> p >> f >> g;
	cout << endl;
	circle(x, y, radius);
	triangle(q, w, r, t, j, u, i, o, p, f, g);
return 0;
}

