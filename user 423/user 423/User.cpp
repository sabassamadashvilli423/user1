#include "User.h"
#include<iostream>
#include<fstream>
using namespace std;
User::User() {
	cout << "created" << endl;
}
User::User(ifstream& ifs) {
	ifs >> name >> lname >> email >> uname >> password;
}

void User::printUser() {
	ofstream fout("users.txt",fstream::app);
	fout << name << " " << lname << " " << email << " " << uname << " " << password << endl;
}
