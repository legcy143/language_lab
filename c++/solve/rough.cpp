#include <bits/stdc++.h>
using namespace std;

int maximumNonAdjacentSum(vector<int> &nums)
{
    int p1 = nums[0];
    int p2 = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int p = nums[i] + p2;
        int np = p1;
        int curr = max(p, np);
        p2 = p1;
        p1 = curr;
    }
    return p1;
}


int dp(int i,vector<int> &v,vector<int> &d){
    if(i<0){
        return 0;
    }
    if(d[i]!=-1)
        return d[i];
    int p=v[i]+dp(i-2,v,d);
    int np=dp(i-1,v,d);
    return d[i]=max(p,np);
}
 
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    vector<int> d(nums.size());
    fill(d.begin(),d.end(),-1);
    return dp(nums.size()-1,nums,d);
}


int main()
{
    vector<int> nums = {2 , 5,6, 1, 4, 9};
    // vector<int> nums = {4, 0, 8, 1, 10};
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
    cout << " max sum  = " << maximumNonAdjacentSum(nums);
    return 0;
}