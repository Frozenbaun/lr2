#pragma once
#ifndef STUDENT
#define STUDENT
#include <string>
#include <iostream>
using namespace std;

class Student {
private:
	string name, subject;
	int group, number;
	int numberofStudent;
	float estimation;

public:
	Student();

	void setName(string c);
	string getName();

	void setSubject(string c);
	string getSubject();

	void setGroup(int p);
	int getGroup();

	void setEstimation(float p);
	float getEstimation();

	void setNumber(int p);
	int getNumber();

	void setNumberofStudent(int p);
	int getNumberofStudent();

	friend istream& operator >> (istream& is, Student& q);
};
#endif
