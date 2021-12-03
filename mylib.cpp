#include<iostream>
#include<ctime>
using namespace std;

namespace Task_1
{
	void initArr(float* array, const size_t size)
	{
		srand(time(NULL));
		for (int i = 0; i < size; i++)
		{
			array[i] = rand() % 10 - 2.450;
		}
	}
	void printArr(float* array, const size_t size)
	{

		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}

	void countPosAndNegNumOfArr(float* array, const size_t size)
	{
		setlocale(LC_ALL, "rus");
		int positive = 0;
		int negative = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i] > 0)
			{
				positive += 1;
			}

			else
			{
				negative += 1;
			}
		}
		cout << "Количество положительных элементов: " << positive << endl << "Количество отрицательных элементов: " << negative << endl;
	}
}


namespace Task_3
{
	bool initArr_3(int *arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Введите " << i << " элемент массива." << endl;
			cin >> arr[i];
		}
		return true;
	}

	bool bublesort(int* arr, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			for (int r = 0; r < size - i; r++)
			{
				if (arr[r] < arr[r + 1])
				{
					int temp = arr[r];
					arr[r] = arr[r + 1];
					arr[r + 1] = temp;
				}
			}
		}
		cout << "Buble sort\n";
		return true;
	}

	void printArr(int* array, const size_t size)
	{

		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}
}







