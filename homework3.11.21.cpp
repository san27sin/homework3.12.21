/*
homework 3.12.2021
created by Sinitsyn A.
*/
#include<iostream>
#include"mylib.h"
#include<string>
#include<fstream>
#define TASK_2(a,b) (a>=0 && a<b)?(cout<<"true"):(cout<<"false")
#define SIZE 5

using namespace std;

struct Employee1
{
	short id;
	int age;
	double salary;
	string name;
};

#pragma pack(push, 1)
struct Employee2
{
	short id;
	int age;
	double salary;
	string name;
};
#pragma pack(pop)

void main()
{
	setlocale(LC_ALL, "rus");
	//task_1
	const int size = 5;
	float arr[size] = { 1.3,-7.6,6.1,-8.2,2.6 };
	Task_1::initArr(arr, size);
	Task_1::printArr(arr, size);
	Task_1::countPosAndNegNumOfArr(arr, size);

	//task_2
	cout << "Введите максимальное число диапазона: " << endl;
	int maxNumber;
	cin >> maxNumber;

	cout << "Введите число: " << endl;
	int yourNumber;
	cin >> yourNumber;

	TASK_2(yourNumber, maxNumber);
	cout << endl;

	//task_3
	int arr_3[SIZE];
	Task_3::initArr_3(arr_3, SIZE);
	Task_3::printArr(arr_3, SIZE);
	Task_3::bublesort(arr_3, SIZE);
	Task_3::printArr(arr_3, SIZE);

	//task_4
	cout << "The size of Employee1: " << sizeof(Employee1) << " " << endl;
	cout << "The size of Employee2: " << sizeof(Employee2)<< " " << endl;
	Employee1 Sasha;
	int* ptr = new int;
	*ptr = Sasha.age;
	Sasha.age = 24;
	cout << "Сашен возраст: " << Sasha.age << endl;
	cout << "Размер динамической переменной age: " << sizeof(Sasha.age) << endl;
	delete ptr;
	
	string nameOfFirstFile, file_1;
	cout << "Введите название первого файла." << endl;
	cin >> nameOfFirstFile;
	file_1 = nameOfFirstFile + ".txt";

	Employee2 Alex{ 12213,34,65776,"Sasha" };
	ofstream fout1(file_1);
	fout1.write((char*)& Alex, sizeof(Alex));
	fout1.close();
}
