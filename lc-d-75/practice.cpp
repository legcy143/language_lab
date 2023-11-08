#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << " Har har mahadev day - 2 practice \n";
    vector<int> nums = {2, 0, 1};

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums.at(i)<<endl;
        if (nums.at(i) == 0)
        {
            nums.erase(nums.begin() + 0);
            nums.push_back(2);
        }
    }

    // 2nd approch;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums.at(i) == 0 && i < nums.size() - 1)
    //     {
    //         nums.at(i) = nums.at(i + 1);
    //         nums.at(i) = 0;
    //     }
    // }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << " ";
    }
    cout << endl;
    // printting

    return 0;
}