#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand()%20 + 1;
    }

    for (int i = 0;i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
    for (int i = 1; i < 10; i++) {
        for (int j = i; j > 0 && arr[j-1] > arr[j]; j--) {
            swap(arr[j-1],arr[j]);
        }
    }
    
    for (int i = 0;i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


