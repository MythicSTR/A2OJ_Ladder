#include <iostream>

using namespace std;

int main() {
    int n, max = 0, min = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(arr[i] > arr[max]) max = i;
        else if(arr[i] <= arr[min]) min = i;
    }

    int time = max > min ? max + (n - min - 2) : max + (n - min - 1);
    cout << time << endl;

    return 0;
}