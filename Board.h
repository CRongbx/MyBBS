#ifndef BOARD_H
#define BOARD_H
//��̳���
#include <string>
#include <vector>
#include "Post.h"
#include "OrdinaryUser.h"
using namespace std;

class Board
{
private:
	string name;		//�����
	int id;				//���id
	vector<Post*> posts;//����µ�����
	OrdinaryUser* ordinaryUser;  //���������ӵ��û�
public:
	Board();
	Board(string name) : name(name) {};
	~Board();
	void SetName(const string name) { this->name = name; }
	string GetName() { return name; }
	void SetId(const int id) { this->id = id; }
	int GetId() { return id; }
	OrdinaryUser* GetOrdinaryUser() { return ordinaryUser; }
	void SetOrdinaryUser(OrdinaryUser* const ou) { ordinaryUser = ou; }
	bool AddPost(Post *p);				//��ð���������
	bool DeletePost(Post *p);			//ɾ���ð�������
};

#endif // !BOARD_H

