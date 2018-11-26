#include "Administator.h"
#include "Moderator.h"
#include <iostream>

Administator::Administator()
{
}


Administator::~Administator()
{
}

bool Administator::SetModerator(OrdinaryUser* o)
{
	/*����ʱ����ʶ��dynamic_cast����������ʱת�����ͣ��������ָ���޷��Զ�ת��Ϊ�����ࣩ
	if (Moderator* ordinaryUser = dynamic_cast<Moderator*> (o)) {
		//ת���ɹ�
		cout << "����ת���ɹ���" << endl;
		return true;
	}
	else {
		//ת��ʧ��
		cout << "����ת��ʧ�ܣ�" << endl;
		return false;
	}*/

	//����OrdinaryUserת��Ϊ������Moderator
	OrdinaryUser * temp = o;
	o = new Moderator;
	//����������Կ�������������
	o->SetId(temp->GetId());
	o->SetPassword(temp->GetPassword());
	o->SetUserName(temp->GetUserName());
	o->SetOnline(temp->GetOnline());
	
	return true;
}

bool Administator::RepealModerator(OrdinaryUser * m)
{
	//������Moderator��ɻ���OrdinaryUser
	/*����ʱ����ʶ��dynamic_cast����������ʱת������
	*�����ڻ���ָ��ָ��������ʱ��dynamic_case���ܷ���ɹ���*/
	if (OrdinaryUser* o = dynamic_cast<OrdinaryUser*>(m)) {
		m = o;
		cout << "������Moderator��ɻ���OrdinaryUser:SUCCESS!" << endl;
		return true;
	}
	else {
		cout << "������Moderator��ɻ���OrdinaryUser:FAIL!" << endl;
		return false;
	}
	
}

