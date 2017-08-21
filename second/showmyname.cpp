//##############################################
//
// Author: wangjun - 765594322@qq.com
//
// QQ : 765594322
//
// Last modified: 2017-08-21 11:29
//
// Filename: showmyname.cpp
//
//#############################################
#include <iostream>

using namespace std;

string getaddr();	//get your addr
string getname();	//get your name
int main()
{
	string name,addr;
	string boo;
	do{
	name = getname();
	addr = getaddr();
	cout <<"your name is " << name << endl;
	cout << "your addr in " << addr << endl;
	cout << "Please make sure your information: ";
	cin >> boo;
	} while(boo != "y");
}

string getname()
{
	string name;
	cout << "Please input your name: ";
	cin >> name;
	return name;
}

string getaddr()
{
	string addr;
	cout << "Please input your addr: ";
	cin >> addr;
	return addr;
}
