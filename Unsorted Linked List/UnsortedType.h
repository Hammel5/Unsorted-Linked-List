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
	void DeleteItem(ItemType info_);
	void GetNextItem();
	void Search();
	void MakeEmpty();
	bool IsFull();
	void ResetList();
	void ComparedTo();
	void GetLenght();
	void Union();

private:
	Node* head;
	Node* location;
};

#endif // !UNSORTEDTYPE_H
