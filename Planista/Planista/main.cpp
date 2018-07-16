#include <iostream>

struct Wezel
{
	int dana;				//watoœæ wêz³a
	Wezel *next;			//wskaŸnik na nastêpny wêze³
	Wezel *previous;		//wskaŸnik na nastêpny element listy
};

class Lista {
public:
	Lista();				//domyœlny konstruktor
	virtual ~Lista();

private:
	Wezel *head;
	Wezel *tail;

};


int main() {

}