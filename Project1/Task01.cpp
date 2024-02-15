#include <iostream>

using namespace std;

int main() {
	int n = 20;

	double d = 2.5;

	float f = 2.5;

	bool b = true;

	char c = 'q';

	string s = "string";

	cout << sizeof(n) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(s) << endl;

	// pointer - указатель
	int* pn;
	double* pd;
	float* pf;
	bool* pb;
	char* pc;
	string* ps;


	cout << sizeof(pn) << endl;
	cout << sizeof(pd) << endl;
	cout << sizeof(pf) << endl;
	cout << sizeof(pb) << endl;
	cout << sizeof(pc) << endl;
	cout << sizeof(ps) << endl;

	return 0;
}