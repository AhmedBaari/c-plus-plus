#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out_file;
    char ch;
    out_file.open("str.txt", std::ios::app);
    std::string name = "";
    while (true)
    {
        std::getline(std::cin, name);
        if (name == "*")
        {
            break;
        }
        out_file << name << std::endl;
        std::cin.ignore();
    }
    out_file.close();

    std::ifstream in_file;
    in_file.open("str.txt", std::ios::in);

    while (in_file.get(ch))
    {
        std::cout << ch;
    }
    in_file.close();

    return 0;
}