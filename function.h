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
	if (a == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
	}else{
		for (int i = 0; i < a; i++) {
		cout << "����" << endl;
		cout << MY.my[i]->ip << endl;
		cout << "����" << endl;
		cout << MY.my[i]->name << endl;
		cout << "��ַ" << endl;
		cout << MY.my[i]->id << endl;
		}
	}
	
}
int del(int a, MyClass& MY) {
	cout << "���ڲ�ѯ......" << endl;
	if (MY.flg==0) {
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		int i;
		for (i = 0; i < MY.flg; i++) {
			if (a == MY.my[i]->ip) {
				cout << "�Ѳ�ѯ������ϵ�ˣ�����ɾ��......." << endl;
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
				cout << "ɾ���ɹ�" << endl;
				return 0;
			}
		}
		if (i == MY.flg) {
			cout << "û�и���ϵ�ˣ�ɾ��ʧ��" << endl;
			return -1;
		}
	}
}
