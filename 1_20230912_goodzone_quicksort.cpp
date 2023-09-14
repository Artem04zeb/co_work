#include <iostream>
#include <ctime>
#include <stdio.h >
#include <time.h>
void quickSort(int a[], int left, int right){


	if(left > right) return; // 

	int p = a[(left + right) / 2]; // центр массива
	int i = left; // задаем крайнюю левую точку
	int j = right; // задаем крайнюю правую точку

	while (i <= j){ // пока левая точка слева от правой
		while(a[i] < p) i++; // передвигаем левый курсор вправо, 
							//  пока он меньше серединной точки 
		while(a[j] > p) j--; // передвигаем правый курсор влево,
							//  пока он больше серединной точки
		if (i <= j){ // если левый курсор еще не ушел дальше, чем правый
					 // тогда меняй элементы массива следующим способом
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			// двигаем курсоры
			i++; 
			j--;
		}
	}
	quickSort(a, left, j); // теперь вызываем быструю сортировку для левой части 
	quickSort(a, i, right); // и для правой части
 }

int main(){
	srand(time(0));
	for (int i = 0; i < 10; ++i)
	{
		const int N = 10000000;
		int a[N];

		for (int j = 0; j < N; ++j)
		{
			a[j] = rand() % 100;
		}
		
		tm ptr;
	    time_t lt = time(nullptr);

		quickSort(a, 0, N-1);
   		

	    localtime_s(&ptr, &lt);
	    std::cout << ptr.tm_hour << ':' << ptr.tm_min;
	    std::cout << ':' << ptr.tm_sec;
		
	}
	

	system("pause");
	return 0;
}
