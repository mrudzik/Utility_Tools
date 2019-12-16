
#include <CreateCppFile.hpp>

CreateCppFile::CreateCppFile()
{
    // _className = new std::string(className);
    // _cppPath = new std::string(cppPath);
}

CreateCppFile::~CreateCppFile()
{
    // delete _className;
    // delete _cppPath;
}

std::string     CreateCppFile::BuildCppFileInsides(const std::string className)
{
    std::string result = 

    "\n#include<" + className + ".hpp>\n" + // For Include
    "\n" + className + "::" + className + "()" +
    "\n{\n\n}\n" + // Constructor Declaration
    "\n" + className + "::~" + className + "()" +
    "\n{\n\n}\n"; // Destructor Declaration

    return result;
}

std::string     CreateCppFile::BuildHppFileInsides(const std::string className)
{
    std::string upperClassName = className;
    // To Upper
    std::transform(upperClassName.begin(), upperClassName.end(), upperClassName.begin(), std::toupper);
    
    std::string result =
    "\n#ifndef " + upperClassName + "_HPP" +
    "\n#define " + upperClassName + "_HPP\n\n" +
    "\nclass " + className +
    "\n{" +
        "\nprivate:" +
        "\n\t// Private fields here" +
        "\npublic:" +
        "\n\t// Constructor/Destructor" +
        "\n\t" + className + "();" + // Simple Constructor
        "\n\t~" + className + "();" + // Destructor
    "\n};\n" +
    "\n#endif";

    return result;
}

void        CreateCppFile::CreateWriteFile(const std::string dirPath, const std::string name,
const std::string content)
{
    std::string command;
    // std::string command = "mkdir " + dirPath;
    // system(command.c_str());

    command = "touch " + dirPath + name;
    system(command.c_str());

    command = "echo \"" + content + "\" > " + dirPath + name;
    system(command.c_str());

    
}




