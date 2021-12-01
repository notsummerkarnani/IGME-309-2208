#pragma once
#include <iostream>

using namespace std;

//Samar Karnani
//IGME 309 DSA2
//A1 Templated Priority Queue
//31-05-2021

template <class Placeholder>
class Queue
{
private:
	Placeholder* queue;
	int size;


public:
	Queue();
	//Copy Constructor for Queue
	Queue(const Queue& _otherQueue);
	//Copy Assignment constructor
	Queue<Placeholder>& operator=(const Queue<Placeholder>& other);
	//Destructor for queue
	~Queue();

	//Adds an item to the top of the queue and resizes it if needed
	void Push(Placeholder _item);
	//Removes an item from the top of the queue
	Placeholder Pop();
	//Prints all the elements on the queue
	void Print();
	//gets the number of items on the queue
	int GetSize();
	//Checks if the queue is empty or not
	bool IsEmpty();
	//Sorts the data from smallest to largest ( < )
	void Sort(Placeholder* _queue, int _size);
};

//Default constructor
template<class Placeholder>
inline Queue<Placeholder>::Queue() {
	queue = new Placeholder[1];
	size = 0;
	queue[0] = 0;
}

//Copy constructor
template<class Placeholder>
inline Queue<Placeholder>::Queue(const Queue& _otherQueue) {
	size = _otherQueue.size;
	queue = new Placeholder[size];
	for (int i = 0; i < size; i++) {
		queue[i] = _otherQueue.queue[i];
	}
}

//copy assignment constructor
template<class Placeholder>
inline Queue<Placeholder>& Queue<Placeholder>::operator=(const Queue<Placeholder>& other) {
	if (this == &other) {
		return *this;
	}

	if (queue != nullptr) {
		delete queue;
		queue = nullptr;
		size = 0;
	}

	size = other.size;
	queue = new Placeholder[size];
	for (int i = 0; i < size; i++) {
		queue[i] = other[i];
	}

	return *this;
}

//Destructor
template<class Placeholder>
inline Queue<Placeholder>::~Queue() {
	delete queue;
	queue = nullptr;
}

//Adds an item to the queue
template<class Placeholder>
inline void Queue<Placeholder>::Push(Placeholder _item) {
	if (queue[size] == 0) {
		Placeholder* oldqueue = queue;
		queue = new Placeholder[(size + 1) * 2];	//creates new [] double the original size
		queue[((size + 1) * 2) - 1] = 0;
		for (int i = 0; i < size; i++) {
			queue[i] = oldqueue[i];
		}
		delete oldqueue;
	}
	queue[size] = _item;
	size++;
	Sort(queue, size);
}

//Removes item from the top of the queue
template<class Placeholder>
inline Placeholder Queue<Placeholder>::Pop() {
	if (size > 0) {
		Placeholder item = queue[0];
		for (int i = 0; i < size-1; i++){
			queue[i] = queue[i+1];
		}
		queue[size-1] = 0;
		size--;
		return item;
	}
	return 0;
}

//Prints all items on queue
template<class Placeholder>
inline void Queue<Placeholder>::Print() {
	cout << "\n--Start of queue--\n";
	for (int i = size-1; i >=0 ; i--) {
		cout << queue[size - i - 1] << endl;
	}
	cout << "--End of queue--\n";
}

//returns the number of elements in the queue
template<class Placeholder>
inline int Queue<Placeholder>::GetSize() {
	return size;
}

//Returns true if the queue is empty
template<class Placeholder>
inline bool Queue<Placeholder>::IsEmpty() {
	if (size == 0) {
		return true;
	}
	return false;
}

//Recursively sorts array pushing larger elements to the back
template<class Placeholder>
inline void Queue<Placeholder>::Sort(Placeholder* _queue, int _size)
{
	// Base case
	if (_size == 1)
		return;

	for (int i = 0; i < _size - 1; i++) {
		if (_queue[i] > _queue[i + 1]){
			swap(_queue[i], _queue[i + 1]);
		}
	}
	// Largest element gets pushed to the back
	// recur for remaining array
	Sort(_queue, _size - 1);
}