#ifndef HEADERVAR_LIST
#define HEADERVAR_LIST

class List{
	Node * head;
	Node * tail;
	public:
		List();
		~List();
		void insert(int index, Planet * p);
		Planet * read(int index);
		bool remove(int index);
		//Returns: current size of List
		unsigned List::size(){return this->size;
};

class Node{
	public:
		Planet * planet;
		Node * next;
		Node();
};
		
	
