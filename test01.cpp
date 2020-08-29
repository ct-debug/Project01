#include<iostream>
using namespace std;
#include<string>
#include "Class.h"
#include"function.h"
int main(){
	cout << "通讯录可存放的联系人最大为：100" << endl;
	MyClass MY;
	while (true)
	{
		cout << "--------------------------------------" << endl;
		cout << "-----------  1  添加联系人  -----------" << endl;
		cout << "-----------  2  删除联系人  -----------" << endl;
		cout << "-----------  3  修改联系人  -----------" << endl;
		cout << "-----------  4  查看联系人  -----------" << endl;
		cout << "-----------  5  通信联系人  -----------" << endl;
		cout << "--------------------------------------" << endl;
		int a;
		cin >> a;
		switch (a)
		{
		case 1: {
			int ip;
			string name;
			string id;
			cout << "号码" << endl;
			cin >> ip;
			cout << "姓名" << endl;
			cin >> name;
			cout << "地址" << endl;
			cin >> id;
			add(ip, name, id, MY);
			break;
		}
		case 2: {
			int a;
			cout << "请输入删除的联系人号码：" << endl;
			cin >> a;
			del(a, MY);
			break;
		}
		case 3: {
			int b;
			cout << "请输入要修改的联系人:" ;
			cin >> b;
			ch(b,MY);
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