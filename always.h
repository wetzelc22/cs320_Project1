#ifndef CW_ALWAYS
#define CW_ALWAYS

#include <vector>
#include <string>


class always{
	int trackT;
	int trackNT;
public:
	always();
	int alwaysTaken(std::vector<std::string>);
	int alwaysNotTaken(std::vector<std::string>);

};

#endif
