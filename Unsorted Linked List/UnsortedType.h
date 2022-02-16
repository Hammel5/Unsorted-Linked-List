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

	void InsertItem(ItemType info_); // Adds item to the list
	void DeleteItem(ItemType info_); // Deletes the element whose key matches item’s key
	void GetNextItem(); // Updates position pointer to next item in the list
	int Search(Node* head, ItemType info_); // Search list for a given item
	void MakeEmpty(); // Initializes list to empty state
	bool IsFull(); // Determines whether list is full.
	void ResetList(); // Initializes current position to front of the list
	int GetLength(Node* head); // Determines the number of elements in list.

private:
	Node* head; // A pointer to the first item in the list 
	Node* location; // A pointer to the current position in the list
};

#endif // !UNSORTEDTYPE_H

/*
Precondition –
Postcondition –
*/