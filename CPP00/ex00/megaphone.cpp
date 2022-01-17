#include <iostream>

char *upper(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (argv[++i])
    {
        std::cout << upper(argv[i]) << '\n';
    }
    return 0;
}