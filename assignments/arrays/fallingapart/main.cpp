/*
Made by Katie Martin
10/31/22
Kattis - Falling Apart
    ALGORITHM:
    FIXME
*/

#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;
void test();

void sortArr(int* parts, int size){
    int i, j = 0;
    for (i = 0; i < size; i++) {
        for(j = i; j < size; j++)
        {
        if (parts[j] > parts[i]) {
            int temp = parts[i];
            parts[i] = parts[j];
            parts[j] = temp;
        }
    }
}
}


int selectionAlice(int parts[], int size) {
    int aliceVal = 0;
    for (int i = 0; i < size; i++) {
        if (i%2==0)
            aliceVal += parts[i];
            }
    return aliceVal;
}

int selectionBob(int parts[], int size) {
    int bobVal = 0;
    for (int i = 0; i < size; i++) {
        if (i%2!=0)
            bobVal += parts[i];
    }
    return bobVal;
}


int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == string("test")) 
    test();
else {
    int size;
    cin >> size;
    int *parts = new int[size];
    
    for(int i = 0; i < size; i++) {
        cin >> parts[i];
    }
    sortArr(parts, size);
    cout << selectionAlice(parts, size) << " " << selectionBob(parts, size) << endl;
    }
    return 0;
    
}

void test() {
    int *parts;
    parts = new int[4] {1, 2, 3, 4};
    sortArr(parts, 4);
    assert(selectionAlice(parts, 4) == 6);
    parts = new int[3] {5, 2, 7};
    sortArr(parts, 3);
    assert(selectionAlice(parts, 3) == 9);
    parts = new int[5] {6, 3, 2, 1, 4};
    sortArr(parts, 5);
    assert(selectionAlice(parts, 5) == 10);
    parts = new int[1] {10};
    sortArr(parts, 1);
    assert(selectionAlice(parts, 1) == 10);
    cerr << "All test cases passed I guess" << endl;
    
}