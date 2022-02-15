#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <fstream>
using namespace std;

const int MAX_ITEMS = 100;

enum RelationType
{
	LESS, GREATER, EQUAL
};

class ItemType
{
public:
	ItemType();

	void Initialize(int number);
	void Print(ofstream& out);
	RelationType ComparedTo(ItemType item);

	int value;

private:

};

#endif // !ITEMTYPE_H