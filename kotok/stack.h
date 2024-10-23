#pragma once

#include <iostream>
using namespace std;

template<typename T>
class Stack {
	struct Node {
		T el;
		Node* next;

		Node(T newEl) {
			el = newEl;
			next = nullptr;
		}
	};
	Node* top;
public:
	Stack() :top{ nullptr } {};

	bool isEmpty();
	void push(T);
	void pop();
	void peek();
	void print() const;
};

template<typename T>
bool Stack<T>::isEmpty() {
	return top == nullptr;
}
template<typename T>
void Stack<T>::push(T el) {
	Node* newEl = new Node(el);
	newEl->next = top;
	top = newEl;
}
template<typename T>
void Stack<T>::pop() {
	if (isEmpty()) {
		return;
	}
	Node* cur = top;
	top = top->next;
	delete cur;
}
template<typename T>
void Stack<T>::peek() {
	if (isEmpty()) {
		return;
	}
	cout << "Top = " << top->el;
}
template<typename T>
void Stack<T>::print() const {
	Node* cur = top;
	while (cur) {
		cout << cur->el << " ";
		cur = cur->next;
	}
}