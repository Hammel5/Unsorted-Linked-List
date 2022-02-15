#ifndef LUNSORTED_H
#define LUNSORTED_H

#include "ItemType.h"

struct Node
{
	ItemType info;
	Node* next;
};

class Lunsorted
{
public:
	Lunsorted();
	~Lunsorted();

	void InsertItem(ItemType info_);

private:
	Node* head;
	Node* loc;
};

#endif // !LUNSORTED_H
