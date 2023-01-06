#include <iostream>
#include <string>

using namespace std;

int main() {
    string jon = "";
    string doctor = "";
    getline(cin, jon);
    getline(cin, doctor);

    if (jon.length() >= doctor.length()) {
        cout << "go" << endl;
    }
    else cout << "no" << endl;

    return 0;
}

//completed!