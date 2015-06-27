#include <iostream.h>
#include <string.h>

//-------------------------- Class FOOD -----------------
class FOOD
{
private:
	char cName[15];
	char cType[15];
	int cWeight;
	int cCalories;

public:
	
	FOOD(char*, char*, int, int);
	FOOD();

	void GetName(char*);
	void GetType(char*);
	int GetCal();
	int GetWeight();
	
	void SetName(char*);
	void SetType(char*);
	void SetWeight(int);
	void SetCal(int);
};
//---------------------Class Imp---------------------------
FOOD::FOOD()
{
	strcpy(cName, "No name");
	strcpy(cType, "No type");
	cWeight= 0;
	cCalories= 0;
}

FOOD::FOOD(char* name, char* type, int cal, int weight)
{
	strcpy(cName, name);
	strcpy(cType, type);
	cCalories= cal;
	cWeight= weight;
}

void FOOD::GetName(char* name)
{
	strcpy(name, cName);
}

void FOOD::GetType(char* type)
{
	strcpy(type, cType);
}

int FOOD::GetCal()
{
	return cCalories;
}


void FOOD::SetName(char* name)
{
	strcpy(cName, name);
}

void FOOD::SetType(char* type)
{
	strcpy(cType, type);
}

void FOOD::SetCal(int cal)
{
	cCalories= cal;
}
//---------------------- Main -----------------------------
void main()
{
	FOOD lettuce("lettuce", "vegetable", 11, 80);
	FOOD tomato("Tomato", "vegetable", 23, 90);
	FOOD bun("Bun", "bread", 179, 00);
	FOOD meat("Meat Patty", "cow", 245, 01);
	int iNumber=0;


	cout<< "Enter number of lettuce-> ";
	cin>> iNumber;
	
}
