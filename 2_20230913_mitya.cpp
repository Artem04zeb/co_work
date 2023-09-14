#include <iostream>
#include <algorithm>
using namespace std;
int split(int a[], int start, int end) {
    int opora = a[end];
    int index = start;
    for (int i = index; i < end; i++) {
        if (a[i] <= opora) {
            swap(a[i], a[index]);
            index++;
        }
    }
    swap(a[index],a[end]);
    return index;
}

void sort(int a[], int start, int end) {
    if (start >= end) {
        return;
    }
    int opora = split(a, start, end);
    sort(a, start, opora - 1);
    sort(a, opora + 1, end);
}
main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand()%20 + 1;
        cout << arr[i] << " ";
    }
    cout << "\n";
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, n-1);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
}}