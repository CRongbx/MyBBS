#ifndef BBS_H
#define BBS_H
#include <vector>
#include "User.h"

class BBS
{
private:
	string BBSTitle = "MY BBS";		//��̳��
	vector<User*> users;			//��ǰBBS��ע����û�

public:
	BBS();
	~BBS();
	void ShowBBS();					//��ʾBBS��Ϣ
	void SetBBSTitle(string s) { BBSTitle = s; }
	//��������
	User* GetUser(int id);
	User* GetUser(const string &name);
	bool SignUp();														//ע���û�
	bool Logout(const int id);											//ע���û�

};

#endif // !BBS_H