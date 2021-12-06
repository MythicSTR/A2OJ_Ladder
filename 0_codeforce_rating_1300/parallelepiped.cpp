#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int A, B, C, a, b , c;
    cin >> A >> B >> C;

    a = sqrt((A * C) / B);
    b = A / a;
    c = C / a;

    cout << 4 * a + 4 * b + 4 * c << endl;

    return 0;
}