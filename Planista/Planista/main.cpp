#include <iostream>

struct Wezel
{
	int dana;				//wato�� w�z�a
	Wezel *next;			//wska�nik na nast�pny w�ze�
	Wezel *previous;		//wska�nik na nast�pny element listy
};

class Lista {
public:
	Lista();				//domy�lny konstruktor
	virtual ~Lista();

private:
	Wezel *head;
	Wezel *tail;

};


int main() {

}