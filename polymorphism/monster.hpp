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
	void do_turn();
};

#endif
