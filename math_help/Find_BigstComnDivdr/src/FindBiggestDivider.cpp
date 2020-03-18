
#include "FindBiggestDivider.hpp"


std::vector<int> FindBiggestDivider::FindAllDividers(int num)
{
	std::vector<int> result;

	int divider = 1;
	while (divider <= num)
	{
		int tempNum = num / divider;
		if (tempNum * divider == num)
			result.push_back(tempNum);
		
		divider++;
	}
	MathUtility::ReverseVector(result);
	return result;
}

std::vector<std::vector<int>> FindBiggestDivider::FindAllDividers_Vec(std::vector<int> nums)
{
	std::vector<std::vector<int>> result;
	for (size_t i = 0; i < nums.size(); i++)
	{
		result.push_back(FindAllDividers(nums.at(i)));
	}
	return result;
}

int FindBiggestDivider::FindBiggestCommonDivider(std::vector<int> dividers1, std::vector<int> dividers2)
{
	int result = 0;

	// int tempNum = allDividers.at(0);
	for (size_t i = 0; i < dividers1.size(); i++)
	{
		int tempNum = dividers1.at(i);
		for (size_t i2 = 0; i2 < dividers2.size(); i2++)
		{
			if (dividers2.at(i2) == tempNum)
				if (result < tempNum)
					result = tempNum;
		}
	}

	if (result == 0)
		return 1;
	return result;
}






















