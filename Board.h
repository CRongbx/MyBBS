#ifndef BOARD_H
#define BOARD_H
//��̳���
#include <string>
#include <vector>
using namespace std;

class Board
{
private:
	string name;		//�����
	int id;				//���id
public:
	Board();
	Board(string name) : name(name) {};
	~Board();
	void SetName(const string name) { this->name = name; }
	string GetName() { return name; }
	void SetId(const int id) { this->id = id; }
	int GetId() { return id; }
};

#endif // !BOARD_H

