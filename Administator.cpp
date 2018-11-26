#include "Administator.h"
#include "Moderator.h"
#include <iostream>

Administator::Administator()
{
}


Administator::~Administator()
{
}

Moderator* Administator::SetModerator(OrdinaryUser* o, Board * const b)
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
	Moderator* m = new Moderator;
	//����������Կ�������������
	m->SetId(o->GetId());
	m->SetOnline(o->GetOnline());
	m->SetPassword(o->GetPassword());
	m->SetPassword(o->GetUserName());
	//���ð�������İ��
	m->SetBoard(b);

	return m;
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

