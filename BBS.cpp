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

bool BBS::SignUp(User * user)
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
	user = new User(name, password);
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

bool BBS::AddBoard(Board * b)
{
	cout << "��Ӱ��:" << endl;

	string title;
	cout << "�����ð������" << endl;
	cin >> title;

	for (auto bo : boards) {
		if (bo->GetName() == title) {
			cout << "�ð���Դ��ڣ����ʧ�ܣ�" << endl;
			return false;
		}
	}

	b = new Board(title);
	boards.push_back(b);
	b->SetId(boards.size());
	cout << "�ð����ӳɹ���" << endl;
	return true;
}

bool BBS::DeleteBoard(Board * b)
{
	cout << "ɾ����飺" << endl;

	for (vector<Board*>::iterator it = boards.begin();it != boards.end();it++) {
		if (b == (*it)) {
			boards.erase(it);
			if (!b)
				delete b;
			cout << "ɾ���ɹ���" << endl;
			return true;
		}
	}
	cout << "�ð�鲻���ڣ�ɾ��ʧ�ܣ�" << endl;
	return false;
}

