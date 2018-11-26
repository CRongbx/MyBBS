#ifndef  MODERATOR
#define MODERATOR

#include "OrdinaryUser.h"
class Moderator :
	public OrdinaryUser
{
public:
	Moderator();
	~Moderator();
	virtual void Show() { cout << "Moderator!" << endl; }
};

#endif // ! MODERATOR
