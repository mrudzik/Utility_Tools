// Example program
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>


bool IsSpace(char ch)
{
	if (ch < 33 || ch > 126)
		return true;
	return false;
}

std::vector<std::string> SeparateWords(std::string line)
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

std::vector<int> StrToInt(std::vector<std::string> numsToParse)
{
    std::vector<int> result;
    
    for (size_t i = 0; i < numsToParse.size(); i++)
    {
        int tempNum = std::atoi(numsToParse.at(i).c_str());
        result.push_back(tempNum);
    }
    return result;
}



















int main()
{
    // Get Input
    std::string name;
    std::cout << "Enter your natural nums: ";
    getline (std::cin, name);
    std::cout << "Input: " << name << "\n";
      
    // Split on tokens
    std::vector<std::string> numTokens = SeparateWords(name);
    for (size_t i = 0; i < numTokens.size(); i++)
    {
        std::cout << "Num " << i << ": " << numTokens.at(i) << "\n";   
    }
      
    // Convert tokens to int
    std::vector<int> numsToWorkWith = StrToInt(numTokens);
    for (size_t i = 0; i < numsToWorkWith.size(); i++)
    {
        std::cout << "Num Parsed " << i << ": " << numsToWorkWith.at(i) << "\n";
    }
    
    
    
    // Find all Dividers for each num
    std::vector<std::vector<int> allDividers;
    // Find Biggest Divider
    int biggestDiv;
    // Divide all on biggest Div
    std::vector<int> numsDivided;
    // Show Calculation Results
    
    
    
    
    
    
}






