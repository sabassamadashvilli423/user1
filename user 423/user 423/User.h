#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class User
{
public:
	string name, lname, email, uname, password;
	User();
	User(ifstream& ifs);
	void printUser();
};

