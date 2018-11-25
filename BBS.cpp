#include "BBS.h"
#include <iostream>
using namespace std;

BBS::BBS()
{
}


BBS::~BBS()
{
	for (vector<User*>::iterator it = users.begin();it != users.end();++it)
		delete (*it);
}

void BBS::ShowBBS()
{
	cout << "WELCOME TO BBS!" << endl;
	cout << "BBS名：" << BBSTitle << endl;
	cout << "当前BBS已注册用户数目：" << users.size() << endl;
}

User * BBS::GetUser(int id)
{
	for (auto u : users) {
		if (u->GetId() == id)
			return u;
	}
	return nullptr;
}

User * BBS::GetUser(const string & name)
{
	for (auto u : users) {
		if (u->GetUserName() == name)
			return u;
	}
	return nullptr;
}

bool BBS::SignUp()
{
	cout << "用户注册：" << endl;

	string name, password;
	cout << "请输入用户名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> password;

	for (auto u : users) {
		if (u->GetUserName() == name) {
			cout << "该用户名已存在，无法注册！" << endl;
			return false;
		}
	}
	//无重复用户，可以注册
	User* user = new User(name, password);
	users.push_back(user);		//加入BBS以注册用户列表队列
	user->SetId(users.size());	//把用户序号作为Id

	cout << "注册成功！" << endl;
	return true;
}

bool BBS::Logout(const int id)
{
	cout << "用户注销：" << endl;

	for (vector<User*>::iterator it = users.begin();it != users.end();++it) {
		if ((*it)->GetId() == id) {
			//从BBS注册用户列表删除该用户，并释放空间
			if ((*it) != nullptr) 
				delete (*it);
			users.erase(it);
			cout << "注销成功！" << endl;
			return true;
		}
	}
	//该用户不存在
	cout << "该用户不存在，无法注销！" << endl;
	return false;
}
