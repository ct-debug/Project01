#include<iostream>
using namespace std;
#include<string>
#include "Class.h"
#include"function.h"
int main(){
	Class p1(10, 20);
	Class p2(10, 20);
	Class p3 = p1 + p2;
	cout << p1.m_a << "     " << p1.m_b << endl;
	cout << p2.m_a << "     " << p2.m_b << endl;
	cout << p3.m_a << "     " << p3.m_b << endl;
	min(10);
	return 0;
}