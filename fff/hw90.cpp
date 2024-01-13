//原創

#include <iostream>
#include <cmath>

double equation1(double x) {
    return std::pow(x, 5) + 1;
}

double equation2(double x) {
    return std::pow(x, 8) + 3 * std::pow(x, 2) + 1;
}

// 二分法
double binarySearch(double (*equation)(double), double left, double right, double epsilon) {
    double mid;

    while (right - left > epsilon) {
        mid = (left + right) / 2.0;

        if (equation(mid) == 0) {
            return mid;
        } else if (equation(mid) * equation(left) < 0) {
            right = mid;
        } else {
            left = mid;
        }
    }

    return (left + right) / 2.0;
}

int main() {
    
    double root1 = binarySearch(equation1, -10.0, 10.0, 0.0001);

    double root2 = binarySearch(equation2, -10.0, 10.0, 0.0001);

    std::cout << "方程式: x^5 + 1 = 0 " << std::endl;
    std::cout << "x的解=" << root1 << std::endl;
    std::cout << "方程式: x^8 + 3x^2 + 1 = 0 "<< std::endl;
    std::cout << "x的解=" << root2 << std::endl;

    return 0;
}

//  輸出結果:
//  方程式: x^5 + 1 = 0
//  x的解=-1.00002
//  方程式: x^8 + 3x^2 + 1 = 0
//  x的解=9.99996

