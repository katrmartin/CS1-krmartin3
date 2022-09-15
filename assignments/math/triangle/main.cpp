/* 
Program by: Katie Martin
Date: 9/14/22

This program finds the perimeter and area of a given triangle.  The user inputs 3 sides of a triangle and the program computer, then outputs the perimeter and area.

1. output question asking for user to input 3 values
2. create variables for 3 sides, the semi-perimeter, area, and perimeter
3. capture user input for 3 values
4. calculate area and perimeter based on the 3 values
5. output area and perimeter based on the 3 values

*/

#include <iostream>
#include <cmath>


int main()
{

using namespace std;


    cout << "Hello! Please enter 3 side lengths of a triangle separated by spaces: " ;

float num1, num2, num3, num4, perimeter, area;

    cin >> num1 >> num2 >> num3 ;

    num4 = (num1 + num2 + num3) / 2;



area = sqrt(num4*(num4-num1)*(num4-num2)*(num4-num3));

perimeter = num1 + num2 + num3;

    cout << "Your area is " << area << endl;
    cout << "Your perimeter is " << perimeter << endl;

    return 0;

}
