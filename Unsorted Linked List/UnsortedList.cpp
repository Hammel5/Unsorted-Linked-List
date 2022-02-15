#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
	head = nullptr;
	loc = nullptr;
}

UnsortedType::~UnsortedType()
{
}

void UnsortedType::InsertItem(ItemType info_)
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