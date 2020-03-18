
#include "FindBiggestDivider.hpp"


int main()
{
    // Get Input
    std::string name;
    std::cout << "Enter your 2 natural nums: ";
    getline (std::cin, name);
    std::cout << "Input: " << name << "\n";
      
    // Split on tokens
    std::vector<std::string> numTokens = MathUtility::SeparateWords(name);
    for (size_t i = 0; i < numTokens.size(); i++)
    {
        std::cout << "Num " << i << ": " << numTokens.at(i) << "\n";   
    }
    
	if (numTokens.size() != 2)
	{
		std::cout << "There are not 2 arguments";
		return 0;
	}
    // Convert tokens to int
    std::vector<int> numsToWorkWith = MathUtility::StrToInt(numTokens);
    for (size_t i = 0; i < numsToWorkWith.size(); i++)
    {
        std::cout << "Num Parsed " << i << ": " << numsToWorkWith.at(i) << "\n";
    }
    






    // Find all Dividers for each num
    std::vector<std::vector<int>> allDividers = FindBiggestDivider::FindAllDividers_Vec(numsToWorkWith);
    for (size_t i = 0; i < allDividers.size(); i++)
    {
		std::cout << "Dividers " << i << ": ";
		for (size_t i2 = 0; i2 < allDividers.at(i).size(); i2++)
		{
			std::cout << allDividers.at(i).at(i2) << " ";
		}
        std::cout << "\n";
    }
	
	// Find Biggest Divider
    int biggestDiv = FindBiggestDivider::FindBiggestCommonDivider(allDividers.at(0), allDividers.at(1));
	// Divide all on biggest Div
	std::cout << "Biggest Divider is : " << biggestDiv << "\n";
	for (size_t i = 0; i < numsToWorkWith.size(); i++)
	{
		int tempNum = numsToWorkWith.at(i);
		std::cout << tempNum << " / " << biggestDiv << " = " << (tempNum / biggestDiv) << "\n";
	}
    
    
    
    
    
    
}