#ifndef BBS_H
#define BBS_H
#include <vector>
#include "User.h"

class BBS
{
private:
	string BBSTitle = "MY BBS";		//论坛名
	vector<User*> users;			//当前BBS下注册的用户

public:
	BBS();
	~BBS();
	void ShowBBS();					//显示BBS信息
	void SetBBSTitle(string s) { BBSTitle = s; }
	//函数重载
	User* GetUser(int id);
	User* GetUser(const string &name);
	bool SignUp();														//注册用户
	bool Logout(const int id);											//注销用户

};

#endif // !BBS_H