#include "Vector.h"


Vector::Vector(){	//constructor sets up an array called vector
	this->vector = new Planet*[0];
}

/** for loops through vector to delete all the elements then deletes
the vector itself
**/
Vector::~Vector(){
	for(int i = 0; i < size(); i++){
		delete vector[i];
	}
	delete vector;
}

void Vector::insert(int index, Planet *p){
	if(size() < index){
		for(int i = 0; i < size(); i++){
			
		}
	}
} 
