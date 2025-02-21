#ifndef MONSTER_HPP
#define MONSTER_HPP

// Protected members can be accessed from:
// 	Member functions of the class in which they're declared
// 	Member functions of descendents of the class in which they're
// 		declared

class monster {
private:
// protected:
	int hp;
public:
	monster();
	monster(int hp);

	// Virtual: This function shall be bound dynamically
	virtual void do_turn() = 0;
	virtual ~monster() = default;

	virtual monster* clone() = 0;
};

#endif
