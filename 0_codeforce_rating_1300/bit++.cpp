#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    
    string operation; char c;
    for(int i = 0; i < n; ++i) {
        cin >> operation;
        stringstream ss(operation);
        
        while(ss >> c) {
            if(c == '+') {++x; break;}
            else if(c == '-') {--x; break;}
        }
    }

    cout << x << endl;

    return 0;
}