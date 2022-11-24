#include<iostream>
#include <string>
#include "structs.h"

void show_book(book& P) {	
	std::cout << "\nНазвание книги: " << P.name_book << "\nАвтор: " << P.autor;
	std::cout << "\nГод издания: " << P.year << "\nКол-во страниц: " << P.number_of_pages;
	std::cout << "\nЦена за экземпляр: " << P.price << '\n';
}


