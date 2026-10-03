#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= (-8 - R))
            y = -R;
        else
            // 2 умова
            if (-8 - R < x && x <= -8 + R)
                y = sqrt(pow(R, 2) - pow(x + 8, 2)) - R;
            else
                // 3 умова
                if (x > -8 + R && x <= 2)
                    y = -R + ((2 + R) * (x + 8 - R)) / (10 - R);
                else
                    // 4 умова
                    if (x > 2 && x <= 6)
                        y = 0;
                    else
                        // 5 умова
                        if (x > 6)
                            y = pow((x - 6), 2);

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
