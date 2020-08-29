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
int ch(int a, MyClass& MY) {
	cout << "正在查询......" << endl;
	if (MY.flg == 0) {
		cout << "通讯录为空" << endl;
	}
	else
	{
		int i;
		for (i = 0; i < MY.flg; i++) {
			if (a == MY.my[i]->ip) {
				cout << "已查询到该联系人" << endl;
				int j, p = 0;
				for (j = i; j < MY.flg - 1; j++)
				{
					int ip;
					string name;
					string id;
					while (true)
					{
						cout << "请输入要修改的内容：" << endl;
						cout << "1 号码" << endl;
						cout << "2 姓名" << endl;
						cout << "3 地址" << endl;
						cout << "0 退出" << endl;
						cin >> p;
						switch (p)
						{
						case 1: {
							cout << "请输入要修改的值：";
							cin >> ip;
							MY.my[j]->ip = ip;
							break;
						}
						case 2: {
							cout << "请输入要修改的值：";
							cin >> name;
							MY.my[j]->name = name;
							break;
						}
						case 3: {
							cout << "请输入要修改的值：";
							cin >> id;
							MY.my[j]->id = id;
							break;
						}
						case 0: {
							return 0;
							break;
						}
						default:
							break;
						}
						cout << "修改成功" << endl;
					}
				}
			}
		}
		if (i == MY.flg) {
			cout << "没有该联系人，无法修改" << endl;
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
