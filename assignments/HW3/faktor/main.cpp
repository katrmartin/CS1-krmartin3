#include <iostream>
#include <cassert>
using namespace std;

int num1, num2, ans, ans2;

int scientist(int num1, int num2);
void test();

int scientist (int num1, int num2)
{
    ans = num1*(num2-1);
    ans2 = ans + 1;
    return ans2;
} 

int main(int argc, char* argv[])
{
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        cout << endl;
    }
    else {
        cin >> num1 >> num2;
        scientist(num1, num2);
        cout << ans2 << endl; 
    }
        return 0;
}


void test() {
    assert(scientist(5,5) == 21);
    assert(scientist(6,3) == 13);
    assert(scientist(10,6) == 51);
    assert(scientist(7,4) == 22);
    cerr << "All test cases passed!" << endl;

}