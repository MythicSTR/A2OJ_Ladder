#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0, z = 0, n;
    int temp_x, temp_y, temp_z;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> temp_x >> temp_y >> temp_z;
        x += temp_x;
        y += temp_y;
        z += temp_z;
    }
    
    if(x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}