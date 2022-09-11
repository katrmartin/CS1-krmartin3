/*

stdIO Homework 1
    Echo echo echo - Kattis challenge

    Updated By: Katie Martin #FIXME1
    Date: 9/11/22 #FIXME2

    Input a single word, output the same word three times

*/

using namespace std; //resolve cout, cin, endl names

#include<iostream>
#include<string>

int main()
{

string word;

cin >> word;

cout << word << " " << word << " " << word << endl;

    return 0;
}