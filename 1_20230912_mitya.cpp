#include <iostream>
using namespace std;

int main() {
	int arr[10];
	for (int i = 0; i<10; i++) {
	arr[i] = rand()%20 +1;
	}
    for (int i = 0; i<10; i++) {
        for (int j= 0; j<9;j++ ) {
            if (arr[j]>arr[j+1]) {
                int b = arr [j];
                arr [j] = arr [j+1];
                arr[j+1] = b;
            }
        }
    }
    for (int i=0;i<10;i++) {
        cout << arr[i] << " ";
    }
	return 0;
}
