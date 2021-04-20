#include <iostream>
#include<fstream>
#include"User.h"
#include<vector>
bool isEqual(User& a, User& b) {
	return (a.name == b.name && a.lname == b.lname && a.email == b.email && a.uname == b.uname && a.password == b.password);
}
int main()
{
	ifstream fin("users.txt");
	int n, k = 0;
	bool r = true;
	fin >> n;
	User* p;
	User t;
	vector<User>  a;
	cout << "sheitanet ricxvi tu ramdeni momxmareblis saxels sheitant" << endl;
	for (int i = 0; i < n; i++) {
		p = new User(fin);
		a.push_back(*p);
	}
	//hile(cin >> t.name >> t.lname >> t.email >> t.uname >> t.password;)
	cin >> t.name >> t.lname >> t.email >> t.uname >> t.password;


	r = true;
	for (int j = 0; j < a.size(); j++) {
		if (isEqual(t, a[j])) {
			r = false;
			break;
		}
	}
	if (r != false) {
		a.push_back(t);
		cout << "es momxmarebeli daemata " << endl;
		a[a.size() - 1].printUser();
		
	}
	else {
		cout << "es momxmarebeli daregistrirebulia ukve " << endl;
	}
}
	
