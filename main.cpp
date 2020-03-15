#include <cmath>
#define PI 3.1415926
#include <iostream>

using namespace std;

void circle(double x0, double y0, double rad)
{
    double perimeter0, area0;
    if (rad < 0)
        cout << "Error: invalid radius input" << endl;
    else {
        perimeter0 = 2 * PI * rad;
        area0 = PI * pow(rad, 2);

        cout << "perimeter = " << perimeter0 << endl << "area = " << area0 << endl;
             
        return;
    }
}
void triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double perimeter, area;
    double a, b, c, sin_ab, temp1, temp2, pol;

    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));

    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
	cout << "Error: invalid triangle input" << endl;
        }
    else {
        sin_ab = (1 - pow(pow(b,2) + pow(c,2) - pow(a,2),2))/(pow(2*b*c,2));
	perimeter = a + b + c;
	pol = (a+b+c)/2;
	area = sqrt(pol*(pol-a)*(pol-b)*(pol-c));
	cout << "perimeter = " << perimeter << endl << "area = " << area << endl;
	}
    return;
}
    
int main()
{
	double x, y, radius;
	double q, w, r, t, j, u;

	cout << "Input your coord for circle: ";
	cin >> x >> y >> radius;
	cout << endl;
	cout << "Input your coord for triangle: ";
	cin >> q >> w >> r >> t >> j >> u;
	cout << endl;
	circle(x, y, radius);
	triangle(q, w, r, t, j, u);
	
return 0;
}

