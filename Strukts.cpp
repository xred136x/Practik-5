#include<iostream>
#include <string>
#include "structs.h"

void show_book(book& P) {	
	std::cout << "\n�������� �����: " << P.name_book << "\n�����: " << P.autor;
	std::cout << "\n��� �������: " << P.year << "\n���-�� �������: " << P.number_of_pages;
	std::cout << "\n���� �� ���������: " << P.price << '\n';
}


