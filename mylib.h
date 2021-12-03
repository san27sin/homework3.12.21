#pragma once //помогает защитить данный заголовочный файл от многократного подключения
namespace Task_1
{
	void initArr(float* array, const size_t size);
	void printArr(float* array, const size_t size);
	void countPosAndNegNumOfArr(float* array, const size_t size);
}

namespace Task_3
{
	bool initArr_3(int* arr, int size);
	void printArr(int* array, const size_t size);
	bool bublesort(int* arr, int size);
}