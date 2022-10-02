#include <iostream>
#include <cassert>
using namespace std;

int order(int, int);
int n1, n2;
void test();

int order(int n1, int n2) {
    if (n1 > n2) 
    {
    cout << n2 << " " << n1 << endl;
    }
    else
    {
    cout << n1 << " " << n2 << endl;
    }
    
    return 0;
}

int main(int argc, char* argv[]) {
    //test();
    if(argc == 2 && string(argv[1]) == "test") {
        test();
    cin >> n1 >> n2;
    order(n1, n2);
    return 0;
    }
}
void test() {
    assert(order(5,3) == 3);
    assert(order(1,7) == 1);
    assert(order(21,22) == 21);
    assert(order(4,55) == 4);
}