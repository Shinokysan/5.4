#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n;
	int* arr;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	//заполняем массив
		cin >> arr[i];
	for (int i = 0; i < n - 1; i += 2)
	//меняем местами элементы массива
		swap(arr[i], arr[i + 1]);
	for (int i = 0; i < n; i++)
	//вывод массива
		cout << arr[i] << " ";
	cout << endl;
	delete[] arr;
	return 0;
}