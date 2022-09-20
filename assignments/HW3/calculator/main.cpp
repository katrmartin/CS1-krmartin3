/* 
Program by: Katie Martin
9/19/22
CS111
This program calculates arithmetic operations from two values given by the user
*/

#include <iostream>


float numberSum(float num1, float num2) {
    using namespace std;
    float total = num1 + num2;
    cout << "Sum of " << num1 << " + " << num2 << " = " << total << endl;
    return total;

}

float numberProduct(float num1, float num2) {
    using namespace std;
    float total = num1*num2;
    cout << "Product of " << num1 << " * " << num2 << " = " << total << endl;
    return total;
// need to have it show decimals!!
}

float numberQuotient(float num1, float num2) {
    using namespace std;
    float total = num1/num2;
    cout << "Quotient of " << num1 << " / " << num2 << " = " << total << endl;
    return total;

}
float numberSubtract(float num1, float num2) {
    using namespace std;
    float total = num1-num2;
    cout << num1 << " - " << num2 << " = " << total << endl;
    return total;
}

int main() {
    using namespace std;
    float num1, num2;
    cout << "Hello! Please enter two numerical values separated by a space: " << endl;
    cin >> num1 >> num2;
    numberSum(num1, num2);
    numberProduct(num1, num2);
    numberQuotient(num1, num2);
    numberSubtract(num1, num2);

return 0;
}
  

