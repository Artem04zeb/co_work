#include <iostream>
using namespace std;
// Ошибок нет. Проблема в стиле написания. Код не соответсвует стандарту PEP8
int main() {
	int arr[10]; // отступ 1 строки
	for (int i = 0; i<10; i++) { // i < 10;
	arr[i] = rand()%20 +1; // Здесь следует сделать отсуп табуляцией для читаемости куда
	} // отступ 1 строки
    for (int i = 0; i<10; i++) {// i < 10;
        for (int j= 0; j<9;j++ ) {// int j = 0; j < 9; j++
            if (arr[j]>arr[j+1]) { // arr[j] > arr[j+1]
                int b = arr [j];
                arr [j] = arr [j+1];
                arr[j+1] = b;
            }
        }
    } // отступ 1 строки
    for (int i=0;i<10;i++) {
        cout << arr[i] << " ";
    } // отступ 1 строки
	return 0;
}
