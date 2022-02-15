#include "ItemType.h"

ItemType::ItemType()
{
	value = 0;
}

void ItemType::Initialize(int number)
{
	value = number;
}

void ItemType::Print(ofstream& out)
{
	out << value;
}

RelationType ItemType::ComparedTo(ItemType item)
{
	if (value < item.value)
		return LESS;
	else if (value > item.value)
		return GREATER;
	else
		return EQUAL;
}