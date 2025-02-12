#include "taxpayer.hpp"

taxpayer::taxpayer(int num_dependents) :
		num_dependents(num_dependents),
		dependents(new dependent[num_dependents]) {}

taxpayer::~taxpayer() {
	if (this->dependents != nullptr) {
		delete [] this->dependents;
	}

	this->dependents = nullptr;
}
