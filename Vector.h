#include <cstdlib>
#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector{
	private:
		Planet **vector;

	public:
		Vector();
		~Vector();
		void insert(int, Planet);
		Planet* read(int);
		bool remove(int);
		unsigned size();
};

#endif
