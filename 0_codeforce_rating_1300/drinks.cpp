#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, temp;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        sum += temp;
    }

    cout << (float) sum / n << endl;

    return 0;
}