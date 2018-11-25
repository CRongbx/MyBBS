#ifndef USER
#define USER

#include <string>
#include <vector>
using namespace std;

class User
{
private:
	int id;
	string password;									//�û�����
	string userName;									//�û���
	bool online = false;								//��ǰ���û��Ƿ�����
public:
	User();
	//��ʼ���б�
	User(const string& name, const string& password) :userName(name), password(password) {};
	//������������User��Ϊ����Ӧ�ö���һ����������������̬����̳���ϵ�еĶ���
	virtual ~User();
	int GetId() { return id; }
	void SetId(int id) { this->id = id; }
	string GetPassword() { return password; }
	void SetPassword(string pw) { password = pw; }
	string GetUserName() { return userName; }
	void SetUserName(string un) { userName = un; }
	//�û���¼�������Ƿ��¼�ɹ�  /*���볣������Ҫ�õ���������*/
	bool SignIn();
	//�û��˳��������Ƿ��˳��ɹ������˳�Ҳ��true��
	bool SignOut();
};

#endif