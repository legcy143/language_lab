#include <iostream>
#include <vector>

int linearSearch(std::vector<int> vec, int target)
{
    // std::cout<<"linear search \n";
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
};

int binarySearch(std::vector<int> vec, int target)
{
    // vector must be sorted for binary search ;

    //

    // std::cout<<"binary search \n";
    int high = vec.size();
    int low = 0;
    int mid = (low + high) / 2;
    // std::cout<<mid <<" "<<vec.size();
    if (vec[mid] == target)
    {
        return mid;
    }
    else if (vec[mid] > target)
    {
        // negative
        high = mid;
        mid = (low + high) / 2;
    }
    else if (vec[mid] < target)
    {
        low = mid;
        mid = (low + high) / 2;
    }
    return -1;
};

int main()
{
    std::cout << "har har mahadev  ~searching.cpp\n";
    std::vector<int> vec1 = {7, 2, 4, 3, 1, 17, 20, 11, 33, 8, 9};
    int linearRes = linearSearch(vec1, 3);
    int binaryRes = binarySearch(vec1, 17);
    std::cout << " linear search res => " << linearRes << "\n";
    std::cout << " binary search res => " << binaryRes << "\n";
}