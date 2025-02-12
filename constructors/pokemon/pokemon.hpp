#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

class pokemon {
private:
	// Name, stats, etc
	std::string name = "Cool pokemon";
	int attack = 0;
public:
	pokemon(const std::string& name, int attack);
	// pokemon() = default;
	pokemon();
};

#endif
