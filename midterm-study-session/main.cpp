/*
bool* create_true() {
	// bool t = true;
	//return &t;
	return new bool(true);
}

int main() {
	int a;

	int* b; // B is a pointer
	b = &a; //Address-of operator

	*b = 5; // Dereference operator (indirection operator)

	int& c = a; // C is a reference
}*/

int main() {
	baseball_player joe;
	joe.first_name = "Joe";
	joe.last_name = "Redfield";
	joe.age = 34;

	baseball_player sally = joe;
	// sally.first_name = joe.first_name
	// sally.last_name = joe.last_name
	// sally.age = joe.age
	
	joe.play_ball();
}

void garage::add_a_car(const vehicle& car_to_add) {
	vehicle* new_cars = new vehicle[this->num_cars + 1];
	for (int i = 0; i < this->num_cars; i++) {
		new_cars[i] = this->cars[i];
	}
	new_cars[this->num_cars] = car_to_add;
	delete [] this->cars;
	this->cars = new_cars;
	new_cars = nullptr;
	this->num_cars++;
}

/*
int main() {
	int x = 12;
	int* r = &x;

	int*& z = r;

	int y = -1;

	r = &y; // What does this do
	*r = y;
	x = y;
	x = -1;
}
*/
