#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string code; char c, sign;
    cin >> code;
    
    stringstream ss(code);
    while(ss >> c) {
        if(c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}