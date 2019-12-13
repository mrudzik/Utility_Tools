#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::string> str_vec_t;


void ConvertArgv(int argc, char** argv)
{
    str_vec_t result;

    for (int i = 0; i < argc; i++)
    {
        result.push_back(argv[i]);
        std::cout << result[i] << std::endl;
    }
}


void LaunchSoft(int argc, char** argv)
{
    // Convert argv to string[]
    ConvertArgv(argc, argv);
    // Parse
    // 
}

void PrintHelp()
{
    // Print the Legend Here how to use this programm
    std::cout << "usage: here" << std::endl;

}

int main (int argc, char** argv)
{
    std::cout << "Hello there" << std::endl;
    // (void)argv;

    if (argc == 1)
    {
        PrintHelp();
        return 0;
    }
    else
    {

        LaunchSoft(argc, argv);
        /* code */
    }
    
    std::cout << "Hello there" << std::endl;
}