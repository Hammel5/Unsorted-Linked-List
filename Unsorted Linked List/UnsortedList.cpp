#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
	head = nullptr;
	location = nullptr;
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

void UnsortedType::DeleteItem(ItemType info_)
{
	Node** location, * cur;
	for (location = &head;
		(cur = *location);
		location = &cur->next) {

		if (cur->info.ComparedTo(info_) == EQUAL)
		{
			*location = cur->next;
			delete cur;
			break;
		}
	}
}

void UnsortedType::GetNextItem()
{
	if (location == NULL)
	{
		location = data;
	}
	else
	{
		location = location->next;
	}
	return location->info;
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
