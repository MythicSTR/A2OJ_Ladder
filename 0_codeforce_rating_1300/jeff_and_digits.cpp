#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, fives = 0, zeroes = 0;
    cin >> n;

    int temp;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp == 5) ++fives;
        else ++zeroes;
    }

    fives = floor(fives / 9) * 9;
    if(zeroes == 0) cout << -1;
    else if(fives == 0) cout << 0 << endl;
    else{
        for(int i = 0; i < fives; ++i) cout << 5;
        for(int i = 0; i < zeroes; ++i) cout << 0;
    }

    return 0;
}