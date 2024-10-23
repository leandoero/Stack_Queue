#include "stack.h"
#include "queue.h"
#include "User.h"

template<typename T>
void funcForStack(Stack<T>* stack) {
	system("cls");
	int index;
	do {
		system("cls");
		cout << "1. Добавить элемент\n" <<
			"2. Удалить элемент\n" <<
			"3. Вернуть top\n" <<
			"4. Вывод\n" <<
			"5. Вернуться в меню\n" << endl;

		cout << "Ввод: ";
		cin >> index;
		switch (index)
		{
		case 1: {
			if constexpr (std::is_same<T, int>::value) {
				system("cls");
				int num;
				cout << "Ввод: ";
				cin >> num;
				stack->push(num);
				break;
			}
			else if constexpr (std::is_same<T, User>::value) {
				system("cls");
				User user;
				stack->push(user);
				break;
			}
		}
		case 2: {
			system("cls");
			stack->pop();
			cout << "Успешно." << endl;
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			stack->peek();
			cout << endl;
			system("pause");
			break;
		}
		case 4: {
			system("cls");
			stack->print();
			system("pause");
			break;
		}
		default:
			break;
		}
	} while (index != 5);
}

template<typename T>
void funcForQueue(Queue<T>* queue) {
	system("cls");
	int index;
	do {
		system("cls");
		cout << "1. Добавить элемент\n" <<
			"2. Удалить элемент\n" <<
			"3. Вернуть top\n" <<
			"4. Вывод\n" <<
			"5. Вернуться в меню\n" << endl;

		cout << "Ввод: ";
		cin >> index;
		switch (index)
		{
		case 1: {
			if constexpr (std::is_same<T, int>::value) {
				system("cls");
				int num;
				cout << "Ввод: ";
				cin >> num;
				queue->push(num);
				break;
			}
			else if constexpr (std::is_same<T, User>::value) {
				system("cls");
				User user;
				queue->push(user);
				break;
			}
		}
		case 2: {
			system("cls");
			queue->pop();
			cout << "Успешно." << endl;
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			queue->peek();
			cout << endl;
			system("pause");
			break;
		}
		case 4: {
			system("cls");
			queue->print();
			system("pause");
			break;
		}
		default:
			break;
		}
	} while (index != 5);
}

void funcForProg() {
	int choice;
	do {
		system("cls");
		cout << "1. Работать со стеком\n" <<
			"2. Работать с очередью\n" <<
			"3. Выход" << endl;
		cin >> choice;
		if (choice == 1) {
			Stack<User>* stack = nullptr;
			Stack<int>* stackInt = nullptr;
			system("cls");
			cout << "1. Работать с базовым типом(int)\n" <<
				"2. Работать с индивидуальной структурой\n" << endl;
			cin >> choice;
			if (choice == 1) {
				stackInt = new Stack<int>();
				funcForStack<int>(stackInt);
			}
			else if (choice == 2) {
				stack = new Stack<User>();
				funcForStack<User>(stack);
			}
		}
		else if (choice == 2) {
			Queue<User>* queue = nullptr;
			Queue<int>* queueInt = nullptr;
			system("cls");
			cout << "1. Работать с базовым типом(int)\n" <<
				"2. Работать с индивидуальной структурой\n" << endl;
			cin >> choice;
			if (choice == 1) {
				queueInt = new Queue<int>();
				funcForQueue<int>(queueInt);
			}
			else if (choice == 2) {
				queue = new Queue<User>();
				funcForQueue<User>(queue);
			}
		}
	} while (choice != 3);
}

int main() {
	setlocale(LC_ALL, "ru");
	funcForProg();
	return 0;
}