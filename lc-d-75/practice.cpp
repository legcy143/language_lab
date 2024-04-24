#include <iostream>
#include <unordered_map>
using namespace std;

// Example 1:
// Input: s = "hello"
// Output: "holle"

// Example 2:
// Input: s = "leetcode"
// Output: "leotcede"

string reverseVowels(string s)
{
    int first = 0;
    int last = s.length() - 1;

    unordered_map<char, char> vowels = {
        {'a', 'a'},
        {'A', 'A'},
        {'e', 'e'},
        {'E', 'E'},
        {'i', 'i'},
        {'I', 'I'},
        {'o', 'o'},
        {'O', 'O'},
        {'u', 'u'},
        {'U', 'U'}};

    while (first <= last)
    {

        while (first <= last && vowels.find(s[first]) == vowels.end())
        {
            first++;
        }
        while (first <= last && vowels.find(s[last]) == vowels.end())
        {
            last--;
        }
        if (vowels.find(s[first]) != vowels.end() && vowels.find(s[last]) != vowels.end())
        {
            swap(s[first], s[last]);
        }
        first++;
        last--;
    }

    return s;
}

int main()
{
    std::cout << "har har mahadev \n";
    std::cout << "\nans " << reverseVowels("laetcido"); // 1
    return 0;
}