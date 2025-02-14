#ifndef TAXPAYER_HPP
#define TAXPAYER_HPP

#include "dependent.hpp"

class taxpayer {
private:
	int num_dependents;
	dependent* dependents;
public:
	taxpayer(int num_dependents);
	taxpayer(const taxpayer& other);

	taxpayer& operator=(const taxpayer& other);

	~taxpayer();
};

#endif
