#ifndef  MODERATOR
#define MODERATOR

#include "OrdinaryUser.h"
#include "Board.h"

class Moderator :
	public OrdinaryUser
{
private:
	Board* board;		//����İ��
public:
	Moderator();
	~Moderator();
	/*�ں����ڶ����Ϊ����������*/
	void SetBoard(Board* const b) { board = b; }
	Board* GetBoard() { return board; }
	virtual void Show() { cout << "Moderator!" << endl; }
};

#endif // ! MODERATOR
