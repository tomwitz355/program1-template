#include "Vector.h"

//constructor sets up an array called vector
Vector::Vector(){
	this->vector = new Planet*[0];
}

/** for loops through vector to delete all the elements then deletes
the vector itself
*/
Vector::~Vector(){
	for(int i = 0; i < size(); i++){
		delete vector[i];
	}
	delete vector;
}


/**  I am gonna work on this more, I am not sure if this is right.
@TODO delete temp
*/
void Vector::insert(int index, Planet *p){
	if(size() < index){
		Planet **temp = new planet*[index+1];
		for(int i = 0; i < size(); i++){
			temp[i] = this->vector[i];
		}
		temp[index] = p;
		this->vector = temp;
		
	}
	else{
		vector[index];
	}
}

Planet* Vector::read(int index){
	if(size() < index){
		return NULL;
	}
	return this->vector[index];
}

//@TODO delete temp
//@TODO fix return

bool Vector::remove(int index){
	Planet **temp = new planet*[size()-1]{
	int newindex = 0;
	for(int i = 0; i < size(); i++){
		if(index != i){
			temp[newindex] = vector[i];
			newindex++;
		}
	}
	vector = temp;
	return true;
}
