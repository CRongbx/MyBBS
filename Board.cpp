#include "Board.h"
#include <iostream>
using namespace std;

Board::Board()
{
}


Board::~Board()
{
}

bool Board::AddPost(Post * p)
{
	cout << "Board-添加帖子：" << endl;
	string title, content;
	cout << "Title:" << endl;
	cin >> title;
	cout << "Content:" << endl;
	cin >> content;

	for (auto p : posts) {
		if (title == p->GetTitle()) {
			cout << "已存在该题目的帖子！" << endl;
			return false;
		}
	}

	posts.push_back(p);
	p = new Post(posts.size(), title, content);
	cout << "Board-帖子添加成功！" << endl;
	return true;
}

bool Board::DeletePost(Post * p)
{
	for (vector<Post*>::iterator it = posts.begin();it != posts.end();++it) {
		if ((*it) == p) {
			posts.erase(it);
			if (!p)
				delete p;
			cout << "Board-删除成功！" << endl;
			return true;
		}
	}
	cout << "本版块下不存在该帖子！" << endl;
	return false;
}
