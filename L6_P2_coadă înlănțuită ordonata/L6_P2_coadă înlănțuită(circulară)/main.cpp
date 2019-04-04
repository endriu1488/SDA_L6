#include "Header.h"

int main() {
	Queue q;
	int dim, val;
	initQueue(q);
	cout << "dimensiune coada: ";
	cin >> dim;
	for (int i = 0; i < dim; ++i) {
		cin >> val;
		Put(q, val);
	}
	display(q);
	cout << endl;
	cout << "Cap:" << Front(q) << endl;
	// crapă la Get(q);
	system("pause");
	return 0;
}