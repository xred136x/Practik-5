#pragma once
#include <iostream>
#include <string>

struct book {
	std::string name_book;
	std::string autor;
	int year;
	int number_of_pages;
	int price;
};

void show_book(book& P);
