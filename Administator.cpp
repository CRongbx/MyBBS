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
	/*运行时类型识别，dynamic_cast用来在运行时转换类型（基类对象指针无法自动转换为派生类）
	if (Moderator* ordinaryUser = dynamic_cast<Moderator*> (o)) {
		//转换成功
		cout << "类型转换成功！" << endl;
		return true;
	}
	else {
		//转换失败
		cout << "类型转换失败！" << endl;
		return false;
	}*/

	//基类OrdinaryUser转化为派生类Moderator
	OrdinaryUser * temp = o;
	o = new Moderator;
	//将基类的属性拷贝到派生类中
	o->SetId(temp->GetId());
	o->SetPassword(temp->GetPassword());
	o->SetUserName(temp->GetUserName());
	o->SetOnline(temp->GetOnline());
	
	return true;
}

bool Administator::RepealModerator(OrdinaryUser * m)
{
	//派生类Moderator变成基类OrdinaryUser
	/*运行时类型识别，dynamic_cast用来在运行时转换类型
	*必须在基类指针指向派生类时，dynamic_case才能分配成功；*/
	if (OrdinaryUser* o = dynamic_cast<OrdinaryUser*>(m)) {
		m = o;
		cout << "派生类Moderator变成基类OrdinaryUser:SUCCESS!" << endl;
		return true;
	}
	else {
		cout << "派生类Moderator变成基类OrdinaryUser:FAIL!" << endl;
		return false;
	}
	
}

