#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

int replace(char **argv, const std::string &str)
{
    std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
    if (!outfile)
        return 1;

    std::size_t i = 0;
    while (i < str.size())
    {
        std::size_t pos = str.find(argv[2], i);
        if (pos != std::string::npos && pos == i)
        {
            outfile << argv[3];
            i += std::string(argv[2]).size();
        }
        else
        {
            outfile << str[i];
            ++i;
        }
    }
    outfile.close();
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "usage: replace <file_name> word_to_replace replacement_word" << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile)
    {
        std::cout << "Error while opening file " << argv[1] << std::endl;
        return 1;
    }

    std::string str((std::istreambuf_iterator<char>(infile)),
                     std::istreambuf_iterator<char>());
    infile.close();

    return replace(argv, str);
}
