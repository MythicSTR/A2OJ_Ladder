#include <iostream>

using namespace std;

int main() {
    int year, next_year;
    int a, b, c, d;
    cin >> year;

    while(++year) {
        a = year%10;
        b = (year/10) % 10;
        c = (year/100) % 10;
        d = (year/1000) % 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }
    }
    
    cout << year << endl;

    return 0;
}