#include <iostream>
#include <cstring>

void strtoupper(char *str)
{
    while(*str)
    {
        *str = std::toupper(static_cast<unsigned char > (*str));
        str++;
    }
}

char *trim(char *str)
{
    int start = 0;
    while(std::isspace(str[start]))
    {
        start++;
    }
    int end = std::strlen(str) - 1;
    while(std::isspace(str[end]))
    {
        str[end--] = '\0';
    }
    return(str + start);
}

int main(int argc, char *argv[])
{
    int i = 1;
    int numargs = argc - 1;

    if(argc==1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while(i <= numargs)
    {
        strtoupper(argv[i]);
        std::cout << trim(argv[i]);
        if(i != argc - 1)
            std::cout << " ";

        i++;
    }
    std::cout << "\n";

    return(0);
}