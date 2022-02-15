#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#include "ItemType.h"

struct Node
{
	ItemType info;
	Node* next;
};

class UnsortedType
{
public:
	UnsortedType();
	~UnsortedType();

	void InsertItem(ItemType info_);

private:
	Node* head;
	Node* loc;
};

#endif // !UNSORTEDTYPE_H
