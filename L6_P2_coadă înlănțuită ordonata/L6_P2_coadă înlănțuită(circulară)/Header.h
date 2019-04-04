#pragma once
#include <iostream>
using namespace std;
struct Element {
	int data;
	Element *leg;
};

struct Queue {
	Element *head;
	Element *tail;
};

void initQueue(Queue &);
bool isEmpty(Queue);
int Front(Queue q);
int Get(Queue &);
void Put(Queue &, int);
void display(Queue &);


