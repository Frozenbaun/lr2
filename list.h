#pragma once
#ifndef LIST
#define LIST
#include "student.h"
#include <string>
#include <iostream>
using namespace std;

class List {
public:
	int tsize, n, counter = 1;
	Student* mas;
	List();

	~List();

	List(const List& obj);


	friend List operator += (List& obj, const Student& p)
	{
		Student* tmp = new Student[obj.tsize + 1];

		for (int i = 0; i < obj.tsize; i++)
			tmp[i] = obj.mas[i];

		tmp[obj.tsize] = p;
		tmp[obj.tsize].setNumber(obj.counter);
		delete[] obj.mas;
		obj.mas = tmp;
		obj.tsize++;
		obj.counter++;
		return obj;
	}

	List& operator -=(int wnumber);


	friend ostream& operator << (ostream& os, const List& com);


	void sort();
	void list_of_losers();
};
#endif
