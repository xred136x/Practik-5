// шаблон
#include<iostream>
#include <string>
#include "structs.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int p = 3, n;
	book* arr = new book[p];

	arr[0] = {"avatat", "Tim Robins", 1949, 555, 1000 };
	arr[1] = { "Conan", "Tom Rogers", 1975, 777, 1000 };
	arr[2] = { "Rambo", "John Colins",1985, 200, 200 };
	//for (int i = 0; i < p; i++)
	cout << "¬ведите номер книги:";
	cin >> n;
	show_book(arr[n]);
	return 0;
}