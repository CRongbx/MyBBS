#ifndef ADMINISTATOR_H
#define ADMINISTATOR_H
#include "User.h"
#include "OrdinaryUser.h"

/*���м̳У������������Է��ʻ���Ĺ��г�Ա��������Ա
*˽�м̳У���������󲻿��Է��ʻ�����κγ�Ա
*���ּ̳У�������ĳ�Ա�����������Է��ʻ���Ĺ��г�Ա�ͱ�����Ա*/
class Administator :
	public User
{
private:

public:
	Administator();
	~Administator();
	bool SetModerator(OrdinaryUser* o);
	bool RepealModerator(OrdinaryUser* o);

};

#endif // !ADMINISTATOR_H
