#include "LUnsorted.h"

Lunsorted::Lunsorted()
{
	head = nullptr;
	loc = nullptr;
}

Lunsorted::~Lunsorted()
{
}

void Lunsorted::InsertItem(ItemType info_)
{
	Node* temp = new Node;
	temp->info = info_;

	if (head == nullptr)
	{
		temp->next = nullptr;
	}
	else
	{
		temp->next = head;
	}
	head = temp;
}