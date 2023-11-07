#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    cout << " Har har mahadev day - 1 practice \n";
    string word1 = "ab", word2 = "pqres", ans = "";

    int w1 = word1.length(), w2 = word2.length();
    int minSize = w1 > w2 ? w2 : w1;

    for (int i = 0; i < minSize; i++)
    {
        cout << word1[i] << " " << word2[i] << endl;
        ans += word1[i] ;
        ans += word2[i] ;
    }
    ans += (w1>w2)?word1.substr(minSize , w1): word2.substr(minSize , w2);
    // ans = (w1>w2)? ans+=word1.substr(minSize , w1): ans+=word2.substr(minSize , w2);
    cout << "ans => " << ans;
}