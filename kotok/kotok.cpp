#include "stack.h"
#include "queue.h"

void funcForProg() {
	int choice;
	cout << "1. Работать с очередью\n" <<
		"2. Работать со стеком\n" <<
		"3. Выход" << endl;
	cin >> choice;
	if (choice == 1) {

	}
}

int main() {
	system("cls");
	
	Stack<int>* stack = new Stack<int>();
	stack->push(20);
	stack->pop();
	stack->push(40);
	stack->pop();
	stack->push(50);
	stack->push(60);
	stack->pop();

	stack->print();

	return 0;
}