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


    cout << "Hello! :) Please enter 3 side lengths of a triangle separated by spaces: (Please note that one side cannot be greater than the sum of the other two sides or equal to them, or else it's not a real triangle!) " ;

//changed from int to float

float num1, num2, num3, num4, perimeter, area;

    cin >> num1 >> num2 >> num3 ;

    num4 = (num1 + num2 + num3) / 2;



area = sqrt(num4*(num4-num1)*(num4-num2)*(num4-num3));

perimeter = num1 + num2 + num3;

    cout << "Your area is " << area << endl;
    cout << "Your perimeter is " << perimeter << endl;

    cout << "If you were given a 0 or not given a numerical value for your area, then the triangle does not exist!\n";

    return 0;

}
