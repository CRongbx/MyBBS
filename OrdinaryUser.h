#ifndef  ORDINARYUSER_H
#define ORDINARYUSER_H

#include "User.h"
#include <iostream>

class OrdinaryUser :
	public User
{
private:

public:
	OrdinaryUser();
	virtual ~OrdinaryUser();
	virtual void Show() { cout << "Ordinary user!" << endl; }
};

#endif // ! ORDINARYUSER_H
