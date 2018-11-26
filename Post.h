#ifndef POST_H
#define POST_H
//����
#include <string>
#include <vector>
using namespace std;

class Post
{
private:
	int id;				//����id
	string title;		//���ӱ���
	string content;		//��������

public:
	Post();
	Post(int id, string title, string content) :id(id), title(title), content(content) {};
	~Post();
	int GetId() { return id; }
	void SetId(const int id) { this->id = id; }
	string GetTitle() { return title; }
	void SetTitle(const string t) { title = t; }
	string GetContent() { return content; }
	void SetContent(const string c) { content = c; }

};

#endif // !POST_H

