#include <iostream>
#include <conio.h>
#include <string>
#include "student.h"
#include "list.h"

using namespace std;


int main() {

	List p;
	Student q;
	int minaf, houraf;
	int wnumber;

	int r;
	bool fl = true;
	while (fl) {
		cout << "0 - exit" << endl;
		cout << "1 - add objects" << endl;
		cout << "2 - delete object" << endl;
		cout << "3 - show objects" << endl;\
		cout << "4 - finding losers" << endl;

		cin >> r;
		switch (r) {
		case 0:
			fl = false;
			break;
		case 1:
			cout << "Write information about the student:" << endl;
			cout << endl;
			cin >> q;

			p += q;

			p.sort();
			system("cls");
			break;
		case 2:
			cout << endl;
			p.sort();
			cout << p;
			cout << endl;
			cout << "Who do you want to expel? :" << endl;
			cin >> wnumber;
			try
			{
				p -= wnumber;
			}
			catch (int e)
			{
				cout << e << " Error! Wrong number" << endl;
			}
			catch (...)
			{
				cout << "Error" << endl;
			}
			system("cls");
			break;
		case 3:
			p.sort();
			cout << p;
			cout << endl;
			break;
		case 4:
			cout << endl;
			p.list_of_losers();
			cout << endl;
			break;
		}

	}

	return 0;
}
