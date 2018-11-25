#include "User.h"
#include <iostream>

User::User()
{
}


User::~User()
{
}

bool User::SignIn()
{
	cout << "用户登录：" << endl;

	string name, password;
	cout << "请输入用户名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> password;
	if (name != userName) {
		//用户名错误
		cout << "用户名输入错误！" << endl;
		return false;
	}
	else {
		if (password != this->password) {
			//密码错误（用户名正确）
			cout << "密码错误！" << endl;
			return false;
		}
		else {
			//密码和用户名输入正确
			cout << "登录成功！" << endl;
			this->online = true;		//登录成功，用户在线
			return true;
		}
	}

}

bool User::SignOut()
{
	cout << "用户退出：" << endl;
	cout << "是否确认要退出？（Y/N）" << endl;

	char c;
	cin >> c;

	//##这里可以改进为异常处理
	if ('Y' == c) {
		//确认退出
		cout << endl << "退出成功！" << endl;
		this->online = false;
		return true;
	}
	else if ('N' == c) {
		//不退出
		return true;
	}
	else {
		//输入了其他字符
		cout << endl << "输入错误!" << endl;
		return false;
	}
}
