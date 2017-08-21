//##############################################
//
// Author: wangjun - 765594322@qq.com
//
// QQ : 765594322
//
// Last modified: 2017-08-21 14:21
//
// Filename: langchangema.cpp
//
//#############################################
#include <iostream>

using namespace std;

double langchangema(double);	// change function
int main()
{
	double langnumber,manumber;
	string boo;
	do
	{
		cout << "Please input lang number : ";
		cin >> langnumber;
		cout << langnumber << " lang is " << langchangema(langnumber) 
			<< " ma." << endl;
		cout << "Please countin: ";
		cin >> boo;
	}while(boo != "y");
	return 0;
}

double langchangema(double lang)
{
	return lang * 220;
}
