#ifndef ADMINISTATOR_H
#define ADMINISTATOR_H
#include "User.h"
#include "OrdinaryUser.h"

/*公有继承，派生类对象可以访问基类的公有成员及保护成员
*私有继承，派生类对象不可以访问基类的任何成员
*两种继承，派生类的成员函数，都可以访问基类的公有成员和保护成员*/
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
