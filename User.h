#ifndef USER
#define USER

#include <string>
#include <vector>
using namespace std;

class User
{
private:
	int id;
	string password;									//用户密码
	string userName;									//用户名
	bool online = false;								//当前该用户是否在线
public:
	User();
	//初始化列表
	User(const string& name, const string& password) :userName(name), password(password) {};
	//虚析构函数，User作为基类应该定义一个虚析构函数来动态分配继承体系中的对象
	virtual ~User();
	int GetId() { return id; }
	void SetId(int id) { this->id = id; }
	string GetPassword() { return password; }
	void SetPassword(string pw) { password = pw; }
	string GetUserName() { return userName; }
	void SetUserName(string un) { userName = un; }
	//用户登录，返回是否登录成功  /*传入常量，需要用到常量引用*/
	bool SignIn();
	//用户退出，返回是否退出成功（不退出也算true）
	bool SignOut();
};

#endif