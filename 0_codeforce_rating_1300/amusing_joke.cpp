#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string host, guest, scramble;
    cin >> host >> guest >> scramble;

    string sorted = host + guest;
    sort(sorted.begin(), sorted.end());
    sort(scramble.begin(), scramble.end());

    int flag = 1;
    for(int i = 0; i < (sorted.length() > scramble.length() ? sorted.length() : scramble.length()); ++i) {
        if(sorted[i] != scramble[i]) {
            flag = 0;
            break;
        }
    }

    printf("%s", (flag) ? "YES" : "NO");

    return 0;
}