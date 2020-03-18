#include "MathUtility.hpp"
#include <algorithm>

bool MathUtility::IsSpace(char ch)
{
	if (ch < 33 || ch > 126)
		return true;
	return false;
}

std::vector<std::string> MathUtility::SeparateWords(std::string line)
{
	std::vector<std::string> result;

	size_t start = 0;
	size_t end = 0;
	size_t i = 0;
	while (i < line.size())
	{
		// Search for word
		if (!IsSpace(line[i]))
		{// Found word
			start = i;
			end = i;
			while (end < line.size())
			{ //Search when word ends
				if (IsSpace(line[end]))
				{// Found word ending
					break;
				}
				end++;
			}
			result.push_back(line.substr(start, end - start));
			// Skiping to found Space
			i = end;
		}
		i++;
	}
	return result;
}

std::vector<int> MathUtility::StrToInt(std::vector<std::string> numsToParse)
{
    std::vector<int> result;
    
    for (size_t i = 0; i < numsToParse.size(); i++)
    {
        int tempNum = std::atoi(numsToParse.at(i).c_str());
        result.push_back(tempNum);
    }
    return result;
}

void MathUtility::ReverseVector(std::vector<int> &toReverse)
{
	std::reverse(std::begin(toReverse), std::end(toReverse));
}