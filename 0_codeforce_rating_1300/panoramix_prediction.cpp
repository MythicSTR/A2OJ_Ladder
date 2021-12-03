#include <iostream>

using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i=i+6)
        if(n % i == 0 || n % (i + 2) == 0) return false;

    return true;
}

int nextprime(int n) {
    bool found = false;
 
    while(!found) {
        n++;
        if(isPrime(n)) {
            found = true;
        }
    }
    
    return n;
}

int main() {
    int n, m;
    cin >> n >> m;

    if(nextprime(n) == m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}