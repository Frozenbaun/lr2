#include <string>
#include <iostream>
#include "student.h"
using namespace std;

void Student::setName(string c) {
	name = c;
}

string Student::getName() {
	return name;
}

void Student::setSubject(string c) {
	subject = c;
}

string Student::getSubject() {
	return subject;
}

void Student::setGroup(int p) {
	group = p;
}

int Student::getGroup() {
	return group;
}

void Student::setEstimation(float p) {
	estimation = p;
}

float Student::getEstimation() {
	return estimation;
}

void Student::setNumber(int p) {
	number = p;
}

int Student::getNumber() {
	return number;
}

void Student::setNumberofStudent(int p) {
	numberofStudent = p;
}

int Student::getNumberofStudent() {
	return numberofStudent;
}

Student::Student() {
	numberofStudent = 0;
}

istream& operator >>(istream& is, Student& q)
{
	string name, subject;
	int group;
	float estimation;
	cout << "name" << endl;
	getline(cin, name);
	getline(cin, name);
	cout << endl;
	cout << "subject" << endl;
	getline(cin, subject);
	cout << endl;
	cout << "group" << endl;
	cin >> group;
	do {
	cout << endl;
	cout << "estimation" << endl;
		cin >> estimation;
	} while (estimation < 2 || estimation > 5);
	cout << endl;
	q.setName(name);
	q.setSubject(subject);
	q.setGroup(group);
	q.setEstimation(estimation);
	return is;
}
