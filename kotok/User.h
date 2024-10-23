#pragma once

#include <iostream>
using namespace std;

string names[5] = { "Vladimir", "Ivan", "Nikolay", "Roman", "Maxim"};
int ages[5] = { 20, 21, 22, 23, 25 };

struct User {
	string name;
	int age;
	User() {
		name = names[rand() % 5];
		age = ages[rand() % 5];
	}

	friend ostream& operator<<(ostream& os, const User& user) {
		os << "name : " << user.name << " age: " << user.age << endl;
		return os;
	}

};
