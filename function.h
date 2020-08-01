#pragma once
#include<string>
void add(int ip,string name,string id,MyClass &MY) {
	if (MY.flg<100) {
		MY.my[MY.flg] = new student(ip, name, id);
		MY.flg++;
		cout << "添加成功" << endl;
	}
	else {
		cout << "通讯录已满" << endl;
	}
}
void see(MyClass& MY) {
	int a = MY.flg;
	for (int i = 0; i < a; i++) {
		cout << "号码" << endl;
		cout << MY.my[i]->ip << endl;
		cout << "姓名" << endl;
		cout << MY.my[i]->name << endl;
		cout << "地址" << endl;
		cout << MY.my[i]->id << endl;
	}
}
