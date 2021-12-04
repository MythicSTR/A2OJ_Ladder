#include <iostream>

using namespace std;

int main() {
    int n, tempA, tempB, left = 0, right = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> tempA >> tempB;
        left += tempA;
        right += tempB;
    }

    int sum = 0;
    sum += (left > n/2) ? n - left : left;
    sum += (right > n/2) ? n - right : right;
    cout << sum << endl;
    
    return 0;
}