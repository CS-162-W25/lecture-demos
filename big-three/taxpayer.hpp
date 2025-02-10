#ifndef TAXPAYER_HPP
#define TAXPAYER_HPP

class taxpayer {
private:
	int num_dependents;
	dependent* dependents;
public:
	taxpayer(int num_dependents);
	~taxpayer();
};

#endif
