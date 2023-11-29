#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, r;
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    if ((pow(x, 2) + pow(y, 2) <= pow(r, 2)) && (x >= 0) && (y >= 0))
    {
        cout << "The point (" << x << ", " << y << ") is inside the shaded area." << endl;
    }
    else if ((pow(x, 2) + pow(y, 2) <= pow(r, 2)) && (x <= 0) && (y <= 0))
    {
        cout << "The point (" << x << ", " << y << ") is inside the shaded area." << endl;
    }
    else
    {
        cout << "The point (" << x << ", " << y << ") is outside the shaded area." << endl;
    }

    return 0;
}