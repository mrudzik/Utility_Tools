#ifndef MATH_UTILITY_HPP
#define MATH_UTILITY_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class MathUtility
{
private:
	// Simple Utility
	static bool IsSpace(char ch);
public:

	// Simple Utility
	static std::vector<std::string> SeparateWords(std::string line);
	static std::vector<int> StrToInt(std::vector<std::string> numsToParse);

};



#endif