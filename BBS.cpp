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
	cout << "BBS����" << BBSTitle << endl;
	cout << "��ǰBBS��ע���û���Ŀ��" << users.size() << endl;
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
	cout << "�û�ע�᣺" << endl;

	string name, password;
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> password;

	for (auto u : users) {
		if (u->GetUserName() == name) {
			cout << "���û����Ѵ��ڣ��޷�ע�ᣡ" << endl;
			return false;
		}
	}
	//���ظ��û�������ע��
	User* user = new User(name, password);
	users.push_back(user);		//����BBS��ע���û��б����
	user->SetId(users.size());	//���û������ΪId

	cout << "ע��ɹ���" << endl;
	return true;
}

bool BBS::Logout(const int id)
{
	cout << "�û�ע����" << endl;

	for (vector<User*>::iterator it = users.begin();it != users.end();++it) {
		if ((*it)->GetId() == id) {
			//��BBSע���û��б�ɾ�����û������ͷſռ�
			if ((*it) != nullptr) 
				delete (*it);
			users.erase(it);
			cout << "ע���ɹ���" << endl;
			return true;
		}
	}
	//���û�������
	cout << "���û������ڣ��޷�ע����" << endl;
	return false;
}
