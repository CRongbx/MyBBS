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
	cout << "�û���¼��" << endl;

	string name, password;
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> password;
	if (name != userName) {
		//�û�������
		cout << "�û����������" << endl;
		return false;
	}
	else {
		if (password != this->password) {
			//��������û�����ȷ��
			cout << "�������" << endl;
			return false;
		}
		else {
			//������û���������ȷ
			cout << "��¼�ɹ���" << endl;
			this->online = true;		//��¼�ɹ����û�����
			return true;
		}
	}

}

bool User::SignOut()
{
	cout << "�û��˳���" << endl;
	cout << "�Ƿ�ȷ��Ҫ�˳�����Y/N��" << endl;

	char c;
	cin >> c;

	//##������ԸĽ�Ϊ�쳣����
	if ('Y' == c) {
		//ȷ���˳�
		cout << endl << "�˳��ɹ���" << endl;
		this->online = false;
		return true;
	}
	else if ('N' == c) {
		//���˳�
		return true;
	}
	else {
		//�����������ַ�
		cout << endl << "�������!" << endl;
		return false;
	}
}
