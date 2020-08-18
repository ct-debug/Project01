#pragma once
#include<string>
void add(int ip,string name,string id,MyClass &MY) {
	if (MY.flg<100) {
		MY.my[MY.flg] = new student(ip, name, id);
		MY.flg++;
		cout << "添加成功" << endl;
	}
	else {
		cout << "通讯录已经满" << endl;
	}
}
void see(MyClass& MY) {
	int a = MY.flg;
	if (a == 0) {
		cout << "通讯录为空" << endl;
	}else{
		for (int i = 0; i < a; i++) {
		cout << "号码" << endl;
		cout << MY.my[i]->ip << endl;
		cout << "姓名" << endl;
		cout << MY.my[i]->name << endl;
		cout << "地址" << endl;
		cout << MY.my[i]->id << endl;
		}
	}
	
}
int del(int a, MyClass& MY) {
	cout << "正在查询......" << endl;
	if (MY.flg==0) {
		cout << "通讯录为空" << endl;
	}
	else
	{
		int i;
		for (i = 0; i < MY.flg; i++) {
			if (a == MY.my[i]->ip) {
				cout << "已查询到该联系人，正在删除......." << endl;
				int j;
				for (j = i; j < MY.flg-1; j++)
				{
					MY.my[j]->id = MY.my[j + 1]->id;
					MY.my[j]->ip = MY.my[j + 1]->ip;
					MY.my[j]->name = MY.my[j + 1]->name;
				}
				delete MY.my[j];
				MY.my[j] = NULL;
				MY.flg--;
				cout << "删除成功" << endl;
				return 0;
			}
		}
		if (i == MY.flg) {
			cout << "没有该联系人，删除失败" << endl;
			return -1;
		}
	}
}
