// Fileio.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream in;
	in.open("input.txt");

	string str;
	int count = 0;
	int linenum = 0;

	while (getline(in, str)) { linenum++; }
	cout << linenum;

	ofstream out;
	out.open("output.txt");

	while (getline(in, str)) {
		int x = 0;
		count++;
		while (x < str.length()) {
			if (str[x] <= '0' && str[x] >= '9'&& count!=(linenum || linenum-1)) break;
			else x++;
		}
		if(x == str.length()-1) out << str;
		cout << str;
	}

	in.close();
	out.close();
    return 0;
}

