#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

template<typename T>
class vector {
private:
	int capacity = 0;
	int size = 0;
	T* array = nullptr;
public:
	void push_back(const T& value) {
		if (this->size < this->capacity) {
			this->array[this->size] = value;
			this->size++;
			return;
		}

		// Size is equal to capacity. Create a new array
		int new_capacity = this->capacity * 2;
		if (new_capacity == 0) {
			new_capacity = 1;
		}
		T* new_array = new T[new_capacity];
		
		// Copy elements over
		for (int i = 0; i < this->size; i++) {
			new_array[i] = this->array[i];
		}

		// Add the new element to the end
		new_array[this->size] = value;

		// Delete the old array
		delete [] this->array;

		this->size++;
		this->capacity = new_capacity;
		this->array = new_array;
	}

	void print() const {
		for (int i = 0; i < this->size; i++) {
			std::cout << this->array[i] << std::endl;
		}
	}
};

#endif
