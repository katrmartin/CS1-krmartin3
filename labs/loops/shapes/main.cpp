/*
    Loops Lab
    Updated by: Katie Martin
    CSCI 111
    Date: 10/4/22

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printTriangle(int height)
{
    //function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) 
    {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
        
    }
    cout << endl;
}

void printFlippedTriangle(int height)
{
    /*
    implement the function that takes height as an argument
    and prints a triangle with * of given height.
    triangle of height 5, ex. should look like this:
    * * * * *
    * * * *
    * * *
    * *
    *
*/
    
   //FIXME3
    int row = height;
   while (row >= 1)
   {
        for(int col = row; col>=1; col--)
            cout << "* ";
        row --;
        cout << endl; 
      
   }
    cout << endl;
}

/*
FIXME4
design and implement a function that takes an integer as height and 
prints square of the given height with *
Square of height 5, ex. should look like this:
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *

*/
void printSquare(int height)
{
    int row = 1;
    while(row <= height)
    {
        for(int col = 1; col<=height; col++){
            cout << "* ";
        }
        row += 1;
        cout << endl;
    }
      
}


//function clears the screen system call
// note: system call is not the best security practice
void clearScreen()
{
    //use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[])
{
    bool running = true;
    while(running == true){
        //FIXME5 add a loop to make the program continue to run until the user wants to quit
        //FIXME6 call clearScreen function to clear the screen for each round of the loop
        int height;
        cout << "Program prints the geometric shapes of given height with *\n";
        cout << "Please enter the height of the shape: ";
        cin >> height;
        //call printTriangle function passing user entered height
        printTriangle(height);

        //FIXME7
        //call printFlippedTriangle passing proper argument
        //manually test the function
        printFlippedTriangle(height);
    

        //FIXME8
        //call the function defined in FIXME4 passing proper argument
        //manually test the function
        printSquare(height);
        

        //FIXME9
        //prompt user to enter y/Y to continue anything else to quit
        cout << "Do you want to continue (y/Y)" << endl;
        char response;
        cin >> response;
            

        //FIXME10
        //use conditional statements to break the loop or continue the loop


        if(response != 'y' && response != 'Y'){
            running = false;
        }
        clearScreen();
    }
    return 0;
}