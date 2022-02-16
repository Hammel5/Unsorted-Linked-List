#include "UnsortedType.h"

UnsortedType::UnsortedType() // Constructor
{
	head = nullptr;
	location = nullptr;
}

UnsortedType::~UnsortedType() // Destructor
{
}


/*
Precondition – Takes an item as a parameter
Postcondition – Adds item to the end of the list
*/
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


/*
Precondition – Takes an item as a parameter
Postcondition – Deletes the element whose key matches item’s key
*/
void UnsortedType::DeleteItem(ItemType info_)
{
	Node* location = head;
	Node* tempPtr;

	if (tempPtr->info.ComparedTo(info_) == EQUAL)
	{
		tempPtr = location;
		head = head->next;
	}
	else 
	{
		while (!tempPtr->info.ComparedTo(info_) == EQUAL)
			location = location->next;
		tempPtr = location->next;
		location->next = (location->next)->next;
	}
	delete tempPtr;
}


/*
Precondition – None
Postcondition – Updates position pointer to next item in the list.
*/
void UnsortedType::GetNextItem()
{
	if (location == NULL)
	{
		location = head;
	}
	else
	{
		location = location->next;
	}
}


/*
Precondition – Given a value to search for and the object has been created
Postcondition – A pointer to the location is returned or NULL pointer is return if no such item exists. 
*/
int UnsortedType::Search(Node* head, ItemType info_)
{
	Node* current = head;
	int index = 0;
	while (current != NULL)
	{
		if (current->info.ComparedTo(info_) == EQUAL)
		{
			return index;
		}
		else
		{
			current = current->next;
			index++;
		}
	}
	return NULL;
}


/*
Precondition – None
Postcondition – Initializes list to empty state.
*/
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


/*
Precondition – None
Postcondition – Determines whether list is full
*/
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


/*
Precondition – None
Postcondition – Initializes current position to front of the list
*/
void UnsortedType::ResetList()
{
	location = NULL;
}


/*
Precondition – Takes a list as a parameter 
Postcondition – Determines the number of elements in list.
*/
int UnsortedType::GetLength(Node* head)
{
	int count = 0; 
	Node* current = head;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}