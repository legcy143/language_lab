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
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    std::cout << "har har mahadev  ~searching.cpp\n";
    std::vector<int> vec1 = {7, 2, 4, 3, 1, 17, 20, 11, 33, 8, 9};
    int linearRes = linearSearch(vec1, 3);
    int binaryRes = binarySearch(vec1, 17);
    std::cout << " linear search res => " << linearRes << "\n";
    std::cout << " binary search res => " << binaryRes << "\n";
}