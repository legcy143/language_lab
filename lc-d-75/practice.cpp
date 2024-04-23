#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int lengthOfLastWord(string s)
{
    size_t end = s.find_last_not_of(" \t\n\r\f\v");
    s = (end == std::string::npos) ? "" : s.substr(0, end + 1);
    int ans = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        
        if (s[i] == ' ')
        {
            break;
        }
        ans++;
    }
 
    return ans;
}

int main()
{
    std::cout << "har har mahadev \n";
    std::cout << "\nans " << lengthOfLastWord("hello world"); // 3
    std::cout << "\nans " << lengthOfLastWord(" hi lol  ");   // 1
    return 0;
}