//原創 
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double a = 1.0;
    double b = -3.0;
    double c = 1.0;

    for (double x = -1000.0; x <= 1000.0; x += 0.001) 
	{
        double solve = a * x * x + b * x + c;
        if (abs(solve) < 0.001) 
		{
            cout << "x的近似解: x = " << x << endl;
        }
    }

    return 0;
}
