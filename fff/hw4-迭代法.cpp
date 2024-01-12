#參考gpt並自行修改
# 原方程式： x^2 - 3x + 1 = 0

# (1) x =√( 3x- 1)  
# (2) x = (x-1)^2
# (3) x = (x ^ 2 + 1) / 3

#均用二分法
#include <iostream>
#include <cmath>

double equation(double x) 
{
    return x - std::sqrt();//此處更改
}

double binary_search(double left, double right, double epsilon) 
{
    double mid;

    int iteration = 0;

    while (right - left > epsilon) 
	{
        mid = (left + right) / 2.0;

        std::cout << "次數 " << iteration << ": Left = " << left << ", Right = " << right << ", Mid = " << mid << ", Equation(mid) = " << equation(mid) << std::endl;

        if (equation(mid) == 0) 
		{
            return mid;
        } 
		else if (equation(mid) * equation(left) < 0) 
		{
            right = mid;
        } 
		else 
		{
            left = mid;
        }

        iteration++;
    }

    std::cout << "次數 " << iteration << ": Left = " << left << ", Right = " << right << ", Mid = " << mid << ", Equation(mid) = " << equation(mid) << std::endl;

    return (left + right) / 2.0;
}

int main() 
{
    double left_bound = 0.0;
    double right_bound = 10.0;
    double epsilon = 0.0001;

    double root = binary_search(left_bound, right_bound, epsilon);

    std::cout << "found: x = " << root << std::endl;

    return 0;
} 

#測試結果
#(1)
Equation(mid) = 1.25834
Equation(mid) = 2.86319
Equation(mid) = 3.72506
Equation(mid) = 4.16683
Equation(mid) = 4.39009
Equation(mid) = 4.50228
Equation(mid) = 4.55852
Equation(mid) = 4.58666
Equation(mid) = 4.60075
Equation(mid) = 4.60779
Equation(mid) = 4.61131
Equation(mid) = 4.61307
Equation(mid) = 4.61395
Equation(mid) = 4.61439
Equation(mid) = 4.61462
Equation(mid) = 4.61473
Equation(mid) = 4.61478
Equation(mid) = 4.61478
found: x = 9.99996
#(2)
Equation(mid) = -1
Equation(mid) = -11
Equation(mid) = -34.75
Equation(mid) = -51.3125
Equation(mid) = -60.7656
Equation(mid) = -65.7852
Equation(mid) = -68.3682
Equation(mid) = -69.678
Equation(mid) = -70.3375
Equation(mid) = -70.6684
Equation(mid) = -70.8341
Equation(mid) = -70.917
Equation(mid) = -70.9585
Equation(mid) = -70.9792
Equation(mid) = -70.9896
Equation(mid) = -70.9948
Equation(mid) = -70.9974
Equation(mid) = -70.9987
Equation(mid) = -70.9987
found: x = 9.99996 
#(3)
Equation(mid) = -0.333333
Equation(mid) = -3.66667
Equation(mid) = -11.5833
Equation(mid) = -17.1042
Equation(mid) = -20.2552
Equation(mid) = -21.9284
Equation(mid) = -22.7894
Equation(mid) = -23.226
Equation(mid) = -23.4458
Equation(mid) = -23.5561
Equation(mid) = -23.6114
Equation(mid) = -23.639
Equation(mid) = -23.6528
Equation(mid) = -23.6597
Equation(mid) = -23.6632
Equation(mid) = -23.6649
Equation(mid) = -23.6658
Equation(mid) = -23.6662
Equation(mid) = -23.6662
found: x = 9.99996  
