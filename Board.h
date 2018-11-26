#ifndef BOARD_H
#define BOARD_H
//论坛版块
#include <string>
#include <vector>
#include "Post.h"
#include "OrdinaryUser.h"
using namespace std;

class Board
{
private:
	string name;		//版块名
	int id;				//版块id
	vector<Post*> posts;//版块下的帖子
	OrdinaryUser* ordinaryUser;  //创建该帖子的用户
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
	bool AddPost(Post *p);				//向该板块添加帖子
	bool DeletePost(Post *p);			//删除该版块的帖子
};

#endif // !BOARD_H

