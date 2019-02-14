#include "List.h"


//Implementation of List Class Methods

List::List(){
	this->head = NULL;
	this->tail = NULL;
}

List::~List(){
	for(int i = (size() - 1); i >= 0; i--){
		
}

//Params: Planet * p is the planet being inserted into the list
//int index is the index to insert at the list
//Inserts an element at index. If index is out of bounds, appends to the list
void List::insert(int index, Planet * p){
	
}

//Params: int index = index in list
//Returns: Planet * of the Planet at the index in the list
Plant * List::read(int index){
}

//Params: int index = index in list
//Deletes Element from index, decreasing size of Vector by 1
//Returns: true on successful deletion, false otherwise
bool List::remove(int index){
}


//Implementation of Node Class Methods

Node::Node(){
	this->next = NULL;
}
