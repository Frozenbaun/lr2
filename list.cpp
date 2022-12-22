#include <string>
#include <iostream>
#include "list.h"
using namespace std;

List::List()
{
	n = 8;
	tsize = 0;
	mas = new Student[n];
}

List::~List() {
	delete[]mas;
}

List::List(const List& obj)
{
	mas = new Student[obj.tsize];
	for (int i = 0; i < tsize; i++)
		mas[i] = obj.mas[i];

	tsize = obj.tsize;

}

List& List::operator -=(int wnumber)
{
	int k = 0;

	if ((wnumber <= 0) || (wnumber > tsize)) {
		throw 123;
	}


	Student* tmp = new Student[tsize - 1];
	for (int i = 0; i < tsize; i++) {
		if (wnumber != mas[i].getNumber()) {
			tmp[k] = mas[i];
			k++;
		}
	}
	delete[] mas;
	mas = tmp;
	tsize--;

}

ostream& operator << (ostream& os, const List& com)
{
	if (com.tsize == 0) {
		cout << "List is empty" << endl;
	}
	else {
		cout << endl << "Number\t\t\tName\t\t\tSubject\t\t\tGroup\t\t\tEstimation" << endl;
		for (int i = 0; i < com.tsize; i++)
			cout << com.mas[i].getNumber() << "\t\t\t" << com.mas[i].getName() << "\t\t\t" << com.mas[i].getSubject() << "\t\t\t" << com.mas[i].getGroup() << "\t\t\t" << com.mas[i].getEstimation() << endl;
	}
	return os;
}


void List::sort() {
	int counter = 1;
	for (int i = 0; i < tsize; i++)
		for (int j = tsize - 1; j > i; j--) {
			if (mas[j - 1].getEstimation() > mas[j].getEstimation()) {
				Student tmp = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = tmp;
			}
		}
	for (int i = 0; i < tsize; i++)
	{
		mas[i].setNumber(counter);
		counter++;
	}
}

void List::list_of_losers() {
	bool exists = false;
	for (int i = 0; i < tsize; i++) {
		if (mas[i].getEstimation() == 2) {
			cout << "Name: " << mas[i].getName() << "\t\t\tGroup: " << mas[i].getGroup() << endl;
			exists = true;
		}
	}

	if (exists == false) cout << "Losers are not detected" << endl;
}
