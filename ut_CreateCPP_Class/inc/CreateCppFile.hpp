#ifndef CREATECPPFILE_HPP
#define CREATECPPFILE_HPP

#include <string>
#include <algorithm> // For upper case transforms
#include <cstdlib>

class CreateCppFile
{
public:
    CreateCppFile();
    ~CreateCppFile();

    static std::string      BuildCppFileInsides(const std::string className);
    static std::string      BuildHppFileInsides(const std::string className);
    static void             CreateWriteFile(const std::string dirPath, const std::string name,
                                const std::string content);
};






#endif
