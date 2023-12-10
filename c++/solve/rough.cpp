#include <bits/stdc++.h>
using namespace std;
int dp(int i, vector<int> &v, vector<int> &d)
{
    /*
    v vector = nums  ,
     d vector = vetor filled with -1 of same size  
     i  length of nums vector - 1 
    */
    if (i < 0)
    {
        return 0;
    }
    if (d[i] != -1)
        return d[i];

        //  i < 0  may possibe becaue n - 1 size
        // d[i] = -1 wich is alway happen then why he wrote this condition

        // v at i mean last value of nums vector

    int p = v[i] + dp(i - 2, v, d);
    int np = dp(i - 1, v, d);
    return d[i] = max(p, np);
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    // Write your code here.
    vector<int> d(nums.size());
    fill(d.begin(), d.end(), -1);
    return dp(nums.size() - 1, nums, d);
}


int main()
{
    // vector<int> nums = {2, 1, 4, 9};
    vector<int> nums = {4, 0, 8, 1, 10};
    /*
5
4 0 8 1 10
5
3 6 8 0 9
5
6 5 10 8 2
5
9 9 3 4 0
    */
    // cout << " max sum  = " << maximumNonAdjacentSum(nums);


    vector<int> d(nums.size());
    fill(d.begin(), d.end(), -1);
    for (int i = 0; i < d.size(); i++)
    {
       cout<<d[i]<<" ";
    }
    
    
    return 0;
}