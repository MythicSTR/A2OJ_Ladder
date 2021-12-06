#include <iostream>

using namespace std;

int main() {
    int n, pages[7];
    cin >> n;
    for(int i = 0; i < 7; ++i) cin >> pages[i];

    int remain = n, i = 0;
    for(i; remain > 0; ++i) {
        remain -= pages[i % 7];
    }

    printf("%d", (i % 7 == 0) ? 7 : (i % 7));

    return 0;
}