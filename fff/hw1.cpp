#include <iostream>

using namespace std;

long long int fibon(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    long long int first = 0, second = 1, next;
    for (int i = 2; i <= n; ++i) 
	{
        next = first + second;
        first = second;
        second = next;
    }
    return first;  
}

int main() 
{
    int position;
    cout << "請輸入在費式數列中欲查詢的位置: ";
    cin >> position;
    if (position < 0) 
	{
        cout << "無效輸入，需大於或等於0的整數" << endl;
        return 1;
    }
    cout << "在費式數列中位置 " << position << " 的數字為: " << fibon(position) << endl;
    return 0;
}
