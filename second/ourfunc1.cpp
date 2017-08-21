//##############################################
//#
//# Author: wangjun - 765594322@qq.com
//#
//# QQ : 765594322
//#
//# Last modified: 2017-08-21 10:51
//#
//# Filename: ourfunc1.cpp
//#
//##############################################

#include <iostream>
using namespace std;

void simon( int );

int main()
{
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon( int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}
