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
	cout << "Board-������ӣ�" << endl;
	string title, content;
	cout << "Title:" << endl;
	cin >> title;
	cout << "Content:" << endl;
	cin >> content;

	for (auto p : posts) {
		if (title == p->GetTitle()) {
			cout << "�Ѵ��ڸ���Ŀ�����ӣ�" << endl;
			return false;
		}
	}

	posts.push_back(p);
	p = new Post(posts.size(), title, content);
	cout << "Board-������ӳɹ���" << endl;
	return true;
}

bool Board::DeletePost(Post * p)
{
	for (vector<Post*>::iterator it = posts.begin();it != posts.end();++it) {
		if ((*it) == p) {
			posts.erase(it);
			if (!p)
				delete p;
			cout << "Board-ɾ���ɹ���" << endl;
			return true;
		}
	}
	cout << "������²����ڸ����ӣ�" << endl;
	return false;
}
