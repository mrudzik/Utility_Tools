#include <main.hpp>


void LaunchSoft(int argc, char** argv)
{
    std::string className = argv[1];

    std::string cppFileContent = CreateCppFile::BuildCppFileInsides(className);
    std::string hppFileContent = CreateCppFile::BuildHppFileInsides(className);
    
    std::string hppLocation = "";
    if (argc >= 3)
    {
        hppLocation = argv[2];
        hppLocation += "/";
    }
    std::string cppLocation = "";
    if (argc >= 4)
    {
        cppLocation = argv[3];
        cppLocation += "/";
    }
    CreateCppFile::CreateWriteFile(hppLocation, className + ".hpp", hppFileContent);
    CreateCppFile::CreateWriteFile(cppLocation, className + ".cpp", cppFileContent);
}

void PrintHelp()
{
    // Print the Legend Here how to use this programm
    std::cout << "usage: ut_create_cpp_class [class_name] [path_where_place_hpp] [path_where_place_cpp]" << std::endl;
}

int main (int argc, char** argv)
{
    std::cout << "App Started " << argc << std::endl;

    if (argc < 2 || 4 < argc)
    {
        PrintHelp();
        return 0;
    }
    else
    {
        std::cout << "Launching Soft" << std::endl;
        LaunchSoft(argc, argv);
        /* code */
    }
    
    std::cout << "\nLooking for Leaks" << std::endl;
    system("leaks ut_create_cpp_class");
}