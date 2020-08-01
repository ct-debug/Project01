#pragma once
#include<string>
class student
{
public:
	student();
	student(int ip, string name, string id);
	~student();
	int ip;
	string name;
	string id;
private:

};

student::student(int ip, string name, string id):ip(ip),name(name),id(id)
{
}

student::student()
{
}

student::~student()
{
}
class MyClass
{
public:
	MyClass();
	~MyClass();
	int flg = 0;
	student* my[100];
private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}





