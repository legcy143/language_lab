#include <iostream>
#include <regex>

int main()
{

    std::string pyMess = "Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32\nType 'help', 'copyright', credits or license for more information.\n";
    std::cout << pyMess;
    bool pyMode = true;
    while (pyMode)
    {
        std::cout << ">>> ";
        std::string inpt;
        std::cin >> inpt;
        std::cout<<inpt;
        if(inpt == "exit"){
            pyMode = false;
        }
    }

    return 0;
}