#include "Header.h"


void initQueue(Queue &q) {
	q.head = 0;
	q.tail = 0;
}

bool isEmpty(Queue q) {
	if (q.head == 0)
	return true;
	else return false;
}
int Front(Queue q) {
	if (q.head != NULL){
		int val = q.head->data;
		return val;
}	else
	cout << "lista vida" << endl;

}
int Get(Queue &q) {
	Element *temp = new Element;
	int val=0;
	if (q.head = NULL) {
		cout << "coada vida" << endl;
		return 0;
	}
	else
	{
		if (q.head == q.tail) {
			val = q.head->data;
			delete q.head;
			q.head = NULL;
			q.tail = NULL;
		}
		else {
				temp = q.head;
				val = temp->data;
				q.head = q.head->leg;
				q.tail->leg = q.head;
				delete temp;
		}
		return (val);
	}
	return NULL;
}

void Put(Queue &q, int val) {
	Element *nptr = new Element;
	nptr->data = val;
	if (q.head == NULL) {
		q.head = nptr;
	}
	else {
		q.tail->leg = nptr;
	}
	q.tail = nptr;
	q.tail->leg = q.head;
}


void display(Queue &q) {
	Element *temp = q.head;
	cout << "\nElementele sunt: ";
	while (temp->leg != q.head)
	{
		cout << temp->data;
		temp = temp->leg;
	}
	cout << temp->data;
}
	