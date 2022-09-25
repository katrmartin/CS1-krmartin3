/* 
Program by: Katie Martin
9/19/22
CS111
This program calculates arithmetic operations from two values given by the user
*/

#include <iostream>
#include <cassert>
#include <cmath>
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

template<class T1, class T2>
T1 numberQuotient(T1 num1, T2 num2) {
    T1 total = num1/num2;
    return total;

}

template<class T1, class T2>
T1 numberSubtract(T1 num1, T2 num2) {
    T1 total = num1-num2;
    return total;
}


int numberRemainder(int num1, int num2) {
    int total = num1%num2;
    return total;

}

template<class T1, class T2>
T1 numberPower(T1 num1, T2 num2) {
    T1 total = pow(num1, num2);
    return total;
}

template<class T1>
T1 numberSqrt(T1 num1) {
    T1 total = sqrt(num1);
    return total;

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
    numberSubtract(num1, num2);
    cout << num1 << " - " << num2 << " = " << numberSum(num1, num2) << endl;
    numberQuotient(num1, num2);
    cout << num1 << " / " << num2 << " = " << numberQuotient(num1, num2) << endl;
    numberRemainder(int (num1), int (num2));
    cout << "The remainder of " << num1 << " / "  << num2 << " = " << numberRemainder(num1, num2) << endl;
    numberPower(num1, num2);
    cout << num1 << " ^ " << num2 << " = " << numberPower(num1, num2) << endl;
    numberSqrt(num1);
    numberSqrt(num2);
    cout << "sqrt of " << num1 << " = " << numberSqrt(num1) << " and sqrt of " << num2 << " = " << numberSqrt(num2) << endl;
    cout << outputLarger(num1, num2) << " is the larger number" << endl;

return 0;
}
  

void test() {
 assert(numberSum(2.5,4.5) == 7);
 assert(numberSum(2,4) == 6);

 assert(numberProduct(2,4) == 8);
 assert(numberProduct(5.0,2.5) == 12.5);

 assert(numberQuotient(4,2) == 2);
 assert(numberQuotient(5,2.5) == 2);

 assert(numberSubtract(2,4) == -2);
 assert(numberSubtract(2.0,4.5) == -2.5);

 assert(numberPower(3,3) == 27);
 assert(numberPower(2.5,4) == 39.0625);

 assert(numberRemainder(9,2) == 1);
 assert(numberRemainder(27,6) == 3);

 assert(numberSqrt(9) == 3);
 assert(numberSqrt(144) == 12);

 assert(outputLarger(2.5,11) == 11);
 assert(outputLarger(4, 5) == 5);





    cerr << "All test cases passed!\n";
}