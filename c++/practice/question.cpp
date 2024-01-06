#include <iostream>
using namespace std;
int main()
{
    int pair = 0;
    size_t n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n-1; i++)
    {
        int j = i+1;
            if (arr[i] - arr[j] == (int)(i - j))
            {
                pair += 2;
            }
    }
    cout << pair << endl;
    return 0;
}