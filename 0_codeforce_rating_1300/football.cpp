#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string teamA, teamB, temp;
    int A = 0, B = 0;   
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        if(i == 0) {
            teamA = temp;
            ++A;
        } else if(temp != teamA) {
            teamB = temp;
            ++B;
        } else {
            ++A;
        }
    }

    if(A > B) cout << teamA;
    else cout << teamB;

    return 0;
}