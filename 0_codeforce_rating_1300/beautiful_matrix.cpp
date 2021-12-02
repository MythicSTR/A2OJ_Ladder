#include <iostream>

using namespace std;

int main() {
    int temp, move_x, move_y;

    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            cin >> temp;
            if(temp == 1) {
                move_x = j >= 3 ? j - 3 : 3 - j;
                move_y = i >= 3 ? i - 3 : 3 - i;
            }
        }
    }

    cout << move_x + move_y << endl;

    return 0;
}