#include<iostream>
using namespace std;
#include<string>
#include "Class.h"
#include"function.h"
int main(){
	cout << "ͨѶ¼�ɴ�ŵ���ϵ�����Ϊ��100" << endl;
	MyClass MY;
	while (true)
	{
		cout << "--------------------------------------" << endl;
		cout << "-----------  1  �����ϵ��  -----------" << endl;
		cout << "-----------  2  ɾ����ϵ��  -----------" << endl;
		cout << "-----------  3  �޸���ϵ��  -----------" << endl;
		cout << "-----------  4  �鿴��ϵ��  -----------" << endl;
		cout << "-----------  5  ͨ����ϵ��  -----------" << endl;
		cout << "--------------------------------------" << endl;
		int a;
		cin >> a;
		switch (a)
		{
		case 1: {
			int ip;
			string name;
			string id;
			cout << "����" << endl;
			cin >> ip;
			cout << "����" << endl;
			cin >> name;
			cout << "��ַ" << endl;
			cin >> id;
			add(ip, name, id, MY);
			break;
		}
		case 2: {
			del();
			break;
		}
		case 3: {
			
			break;
		}
		case 4: {
			see(MY);
			break;
		}
		case 5: {
			
			break;
		}
		case 0: {
			return 0;
			break;
		}
		default:
			break;
		}
	}
	return 0;
}