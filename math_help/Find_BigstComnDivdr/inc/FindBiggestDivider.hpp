#ifndef FIND_BIGGEST_DIVIDER_HPP
#define FIND_BIGGEST_DIVIDER_HPP

#include "MathUtility.hpp"

class FindBiggestDivider
{
private:

public:
	static std::vector<int> FindAllDividers(int num);
	static std::vector<std::vector<int>> FindAllDividers_Vec(std::vector<int> nums);
	static int FindBiggestCommonDivider(std::vector<int> dividers1, std::vector<int> dividers2);

};

#endif