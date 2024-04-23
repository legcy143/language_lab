#include <iostream>
#include <unordered_map>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s)
{
    std::unordered_map<char, int> cache={};
    int ans = 0;
    for (int i = 1; i < s.length(); i++)
    {
        int curr = s[i];
        
        if (cache.find(curr) == cache.end())
        {
            ans++;
            cache[curr] = curr;
        }
    }
    return ans;
}
int main()
{
    std::cout << "har har mahadev \n";
    std::cout << "\nans " << lengthOfLongestSubstring("abcabcbb"); // 3
    std::cout << "\nans " << lengthOfLongestSubstring("bbbbb");    // 1
    std::cout << "\nans " << lengthOfLongestSubstring("pwwkew");   // 3
    return 0;
}