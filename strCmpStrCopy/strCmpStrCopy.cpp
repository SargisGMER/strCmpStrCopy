#include "stdafx.h"
#include <iostream>

using namespace std;

int cmp1(const char *p1, const char *p2);
void copy1(const char *p1, char *p2);

int main( )
{
	char str1[20];
	char str2[20];

	cout << "input str1 -> ";
	cin >> str1;
	cout << " -------" << endl;
	cout << "| copy1 |" << endl;
	cout << " -------" << endl;
	copy1(str1, str2);
	cout << "str2 = " << str2 << "\n\n\n";

	cout << "input str1 -> ";
	cin >> str1;
	cout << "input str2 -> ";
	cin >> str2;
	cout << " -------" << endl;
	cout << "| cmp1 |" << endl;
	cout << " -------" << endl;
	int k = cmp1(str1, str2);
	cout << "cmp1 -> " << k << endl;

	system("pause");
	return 0;
}

int cmp1(const char *p1, const char *p2) {
	int i;
	for (i = 0; (*(p1 + i) != '\0' || *(p2 + i) != '\0') && (*(p1 + i) - *(p2 + i) == 0); i++);
	return *(p1 + i) - *(p2 + i);
}

void copy1(const char *p1, char *p2) {
	while (*(p2++) = *(p1++));
}

