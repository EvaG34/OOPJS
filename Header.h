#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;
    int yearOfStudy;

public:
    Student()
    {
        name = "No name";
        age = 17;
        yearOfStudy = 1;
    }

    Student(string name, int age, int yearOfStudy)
    {
        this->name = name;
        SetAge(age);
        SetYearOfStudy(yearOfStudy);
    }

    void Output() const
    {
        cout << "Name: " << name << "\tAge: " << age << "\tYear of Study: " << yearOfStudy << endl;
    }

    void Input()
    {
        cout << "Enter name: ";
        cin >> name;

        int tempAge;
        cout << "Enter age: ";
        cin >> tempAge;
        SetAge(tempAge);

        int tempYear;
        cout << "Enter year of study: ";
        cin >> tempYear;
        SetYearOfStudy(tempYear);
    }

    void SetName(string name) { this->name = name; }

    void SetAge(int age)
    {
        if (age > 0) {
            this->age = age;
        }
        else {
            cout << "Warning\n";
            if (this->age <= 0) this->age = 17;
        }
    }

    void SetYearOfStudy(int yearOfStudy)
    {
        if (yearOfStudy > 0) {
            this->yearOfStudy = yearOfStudy;
        }
        else {
            cout << "Year of study cannot be <= 0\n";
            this->yearOfStudy = 1;
        }
    }

	string GetName() const { return name;}
	int GetAge() const { return age; }
	int GetYearOfStudy() const { return yearOfStudy; }

};
