#include<iostream>
using namespace std;
class Sum{
    int a = 3;
    int b = 5;
    int sum;

public:
    void calSum()
    {
        sum = a + b;
        cout << sum;
    }
};
int main()
{

    Sum s1;
    s1.calSum();
}