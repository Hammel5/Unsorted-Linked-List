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

void UnsortedType::DeleteItem(int item)
{
	Node** pStartOrNext, * cur;
	for (pStartOrNext = &head;
		(cur = *pStartOrNext);
		pStartOrNext = &cur->next) {

		if (cur->info == item) 
		{
			*pStartOrNext = cur->next;
			delete cur;
			break;
		}
	}
}

void UnsortedType::MakeEmpty()
{
	Node* empty;
	while (head != NULL)
	{
		empty = head;
		head = head->next;
		delete empty;
	}
}

bool UnsortedType::IsFull()
{
	Node* location;
	try
	{
		location = new Node;
		delete location;
		return false;
	}
	catch (bad_alloc expection)
	{
		return true;
	}
}