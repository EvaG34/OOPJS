#include <iostream>
#include "Header.h"
using namespace std;

Student operator++(Student& obj, int)
{
    Student temp = obj;
    obj.SetYearOfStudy(obj.GetYearOfStudy() + 1);
    return temp;
}

Student& operator--(Student& obj)
{

    obj.SetYearOfStudy(obj.GetYearOfStudy() - 1);
    return obj;
}

Student& operator+=(Student& obj, int value)
{
    obj.SetAge(obj.GetAge() + value);
    return obj;
}

Student& operator-=(Student& obj, int value)
{

    obj.SetAge(obj.GetAge() - value);
    return obj;
}

ostream& operator<<(ostream& out, const Student& obj)
{
	out << "Name: " << obj.GetName() << "\t Age:" << obj.GetAge() << "\t Year of Study:" << obj.GetYearOfStudy() << endl;
	return out;
}

istream& operator>>(istream& in, Student& obj)
{
	string name;
	int age, yearOfStudy;
	cout << "Enter name: ";
	in >> name;
	obj.SetName(name);
	cout << "Enter age: ";
	in >> age;
	obj.SetAge(age);
	cout << "Enter year of study: ";
	in >> yearOfStudy;
	obj.SetYearOfStudy(yearOfStudy);
	return in;
}

int main()
{
    Student obj1("Eva", 17, 2);
	cout << obj1 << endl;

    --obj1;
	cout << obj1 << endl;

    obj1 -= 5;
	cout << obj1 << endl;

	Student obj2;
	cin >> obj2;
	cout << obj2 << endl;

    return 0;
}
