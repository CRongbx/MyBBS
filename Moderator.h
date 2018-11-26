#ifndef  MODERATOR
#define MODERATOR

#include "OrdinaryUser.h"
#include "Board.h"

class Moderator :
	public OrdinaryUser
{
private:
	Board* board;		//管理的版块
public:
	Moderator();
	~Moderator();
	/*在函数内定义的为内联函数？*/
	void SetBoard(Board* const b) { board = b; }
	Board* GetBoard() { return board; }
	virtual void Show() { cout << "Moderator!" << endl; }
};

#endif // ! MODERATOR
