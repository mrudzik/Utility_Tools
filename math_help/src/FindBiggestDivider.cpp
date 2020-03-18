// Example program

#include "MathUtility.hpp"





















int main()
{
    // Get Input
    std::string name;
    std::cout << "Enter your natural nums: ";
    getline (std::cin, name);
    std::cout << "Input: " << name << "\n";
      
    // Split on tokens
    std::vector<std::string> numTokens = MathUtility::SeparateWords(name);
    for (size_t i = 0; i < numTokens.size(); i++)
    {
        std::cout << "Num " << i << ": " << numTokens.at(i) << "\n";   
    }
      
    // Convert tokens to int
    std::vector<int> numsToWorkWith = MathUtility::StrToInt(numTokens);
    for (size_t i = 0; i < numsToWorkWith.size(); i++)
    {
        std::cout << "Num Parsed " << i << ": " << numsToWorkWith.at(i) << "\n";
    }
    
    
    
    // // Find all Dividers for each num
    // std::vector<std::vector<int>> allDividers;
    // // Find Biggest Divider
    // int biggestDiv;
    // // Divide all on biggest Div
    // std::vector<int> numsDivided;
    // // Show Calculation Results
    
    
    
    
    
    
}






