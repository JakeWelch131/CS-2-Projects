//
// File: stack.hpp
//
// Programmer:
// Date:       Fall 2023
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>
#include "../string/string.hpp"

template<typename T> 
class Node {
	public:
	Node() : next(0) {};
	Node(const T& item) : data(item), next(0) {};
	T data;
	Node<T> *next;
};


// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     () : tos(0) {};
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);
    
	bool      empty     () const;
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

template <typename T>
stack<T>::stack(const stack<T>& actual) {
	Node<T> *temp = actual.tos;							//assigns Node ptr to the actual stack's tos
	Node<T> *bottom = 0;								//creates a Node nullptr
	tos = 0;											//sets copy Node to 0						
	while (temp != 0) {									//loops until temp == 0
		if (tos == 0) {									//if copy Node is empty
			tos = new Node<T>(temp->data);				//assign it's tos to a new Node containing temp's data
			bottom = tos;								//assign bottom to tos since the stack is only 1 Node so far
		}
		else {											//if there is a Node in the stack
			bottom->next = new Node<T>(temp->data);		//assign bottom's next ptr to a new Node containing temp's data
			bottom = bottom->next;						//assign bottom to that new Node
		}
		temp = temp->next;								//assign temp to the next Node in the original stack
	}
}

template <typename T>
stack<T>::~stack() {
	Node<T> *temp;										//creates a pointer of type Node<T>
	while (tos != 0) {									//loops until tos is null
		temp = tos;										//assigns temp to tos
		tos = tos->next;								//tos is now pointing at the next node
		delete temp;									//deletes the previous node
	}
}

template <typename T>
void stack<T>::swap(stack<T> &rhs) {
	Node<T> *temp = tos;
	tos = rhs.tos;
	rhs.tos = temp;
}

template <typename T>
stack<T>& stack<T>::operator= (stack<T> rhs) {
	swap(rhs);
	return *this;
}

template <typename T>
bool stack<T>::empty() const {
	return (tos == 0);
}

template <typename T>
bool stack<T>::full() const {
	Node<T> *temp = new Node <T>();
	if (temp == 0) return true;
	delete temp;
	return false;
}

template <typename T>
T stack<T>::top() const {
	//assert(!empty());
	return tos->data;
}

template <typename T>
T stack<T>::pop() {
	//assert(!empty());
	T result = tos->data;
	Node<T> *temp = tos;
	tos = tos->next;
	delete temp;
	return result;
}

template <typename T>
void stack<T>::push(const T& item) {
	Node<T> *pushed_item = new Node<T>(item);
	pushed_item->next = tos;
	tos = pushed_item;
}

#endif
