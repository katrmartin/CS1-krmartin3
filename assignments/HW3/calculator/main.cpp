/* 
Program by: Katie Martin
9/19/22
CS111
This program calculates arithmetic operations from two values given by the user
*/

#include <iostream>
#include <cassert>
using namespace std;

void test();

template<class T1, class T2>
T1 numberSum(T1 num1, T2 num2) {
    T1 total = num1 + num2;
    return total;

}

template<class T1, class T2>
T1 numberProduct(T1 num1, T2 num2) {
    T1 total = num1*num2;
    return total;

}

float numberQuotient(float num1, float num2) {
    float total = num1/num2;
    return total;

}
float numberSubtract(float num1, float num2) {
    float total = num1-num2;
    return total;
}

template<class T1>
T1 numberRemainder(T1 num1, T1 num2) {
    T1 total = num1%num2;
    return total;

}

float numberPower(float num1, float num2) {
    numberPower
    float total = pow(num1, num2);
    return total;
}

float numberSqrt(float num1, float num2) {

}

template<class T1, class T2>
T1 outputLarger(T1 num1, T2 num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
        return num2;
}


int main() {
    float num1, num2;
    test();
    cout << "Hello! Please enter two numerical values separated by a space (can't do integer first if doing integer & float): " << endl;
    cin >> num1 >> num2;
    numberSum(num1, num2);
    cout << num1 << " * " << num2 << " = " << numberProduct(num1, num2) << endl;
    numberQuotient(num1, num2);
    numberSubtract(num1, num2);
    cout << outputLarger(num1, num2) << " is the larger number" << endl;

return 0;
}
  

void test() {
 assert(numberSum(2.5,4.5) == 7);
 assert(numberSum(2,4) == 6);

 assert(numberProduct(2,4) == 8);
 assert(numberProduct(5.0,2.5) == 12.5);

 assert(numberQuotient(4,2) == 2);
 assert(numberQuotient(5,2.0) == 2.5);

 assert(numberSubtract(2,4) == -2);
 assert(numberSubtract(2.0,4.5) == -2.5);

    cerr << "All test cases passed!\n";
}