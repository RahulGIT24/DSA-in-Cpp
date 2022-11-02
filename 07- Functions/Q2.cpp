// Given the radius of a circle. Find it's area and circumference

#include <iostream>
#include <cmath>
using namespace std;
void areaAndCir(int radius)
{
    double area = 2 * 3.14 * pow(radius, 2);
    double circum = 2 * 3.14 * radius;
    cout << "The area of circle is " << area << endl;
    cout << "The circumference of circle is " << circum;
}
int main()
{
    int radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    areaAndCir(radius);
    return 0;
}