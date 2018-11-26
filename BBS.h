#ifndef BBS_H
#define BBS_H
#include <vector>
#include "User.h"
#include "Board.h"

class BBS
{
private:
	string BBSTitle = "MY BBS";		//��̳��
	vector<User*> users;			//��ǰBBS��ע����û�
	vector<Board*> boards;			//��̳ӵ�еİ��
public:
	BBS();
	~BBS();
	void ShowBBS();					//��ʾBBS��Ϣ
	void SetBBSTitle(string s) { BBSTitle = s; }
	//��������
	User* GetUser(int id);
	User* GetUser(const string &name);
	bool SignUp(User *u);												//ע���û�
	bool Logout(const int id);											//ע���û�
	bool AddBoard(Board* b);											//��Ӱ��
	bool DeleteBoard(Board* b);											//ɾ�����
};

#endif // !BBS_H