#pragma once
#include<string>
void min(int a) {
	cout << "a =" << a << endl;

}
Class operator+(Class& p, Class& b) {
	Class top(0,0);
	top.m_a = p.m_a + b.m_a;
	top.m_b = p.m_b + p.m_b;
	return top;
}
