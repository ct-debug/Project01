#pragma once
#include<string>
class Class
{
public:	
	Class(int a, int b) :m_a(a), m_b(b) {
	}
	int m_a;
	int m_b;
private:

};
class student
{
public:
	student(int age, string name);
	~student();
	int age;
	string name;
private:

};

student::student(int a,string n):age(a),name(n)
{
}

student::~student()
{
}




