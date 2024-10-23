#include <iostream>
using namespace std;

template<typename T>
class Queue {
	struct Node {
		T el;
		Node* next;
		Node* prev;

		Node(T newEl) {
			el = newEl;
			next = prev = nullptr;
		}
	};
	Node* top;
public:
	Queue() : top(nullptr) {};
	bool isEmpty();
	void push(T el);
	void pop();
	T peek();
	void print() const;
};
template<typename T>
bool Queue<T>::isEmpty() {
	return top == nullptr;
}
template<typename T>
void Queue<T>::push(T el) {
	Node* cur = top;
	Node* newEl = new Node(el);
	if (top == nullptr) {
		top = newEl;
		return;
	}
	while (cur->prev) {
		cur = cur->prev;
	}
	cur->prev = newEl;
	newEl->next = cur;
	newEl->prev = nullptr;
}
template<typename T>
void Queue<T>::pop() {				//��������
	if (isEmpty()) {
		return;
	}
	Node* cur = top;
	delete cur;
	cur = nullptr;
	top = top->prev;
}
template<typename T>
T Queue<T>::peek() {
	if (isEmpty()) {
		return;
	}
	return top->el;
}
template<typename T>
void Queue<T>::print() const {
	Node* cur = top;
	while (cur) {
		cout << cur->el << " ";
		cur = cur->prev;
	}
}