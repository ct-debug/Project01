#pragma once
#include<string>
void add(int ip,string name,string id,MyClass &MY) {
	if (MY.flg<100) {
		MY.my[MY.flg] = new student(ip, name, id);
		MY.flg++;
		cout << "��ӳɹ�" << endl;
	}
	else {
		cout << "ͨѶ¼�Ѿ���" << endl;
	}
}
void see(MyClass& MY) {
	int a = MY.flg;
	for (int i = 0; i < a; i++) {
		cout << "����" << endl;
		cout << MY.my[i]->ip << endl;
		cout << "����" << endl;
		cout << MY.my[i]->name << endl;
		cout << "��ַ" << endl;
		cout << MY.my[i]->id << endl;
	}
}
void del(int a) {

}
