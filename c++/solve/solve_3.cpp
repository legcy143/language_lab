#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void problem_1()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "\n new \n";
        double price, charge = 20.0, minEarn = 100.0;
        cin >> price;
        double chefProfit = (charge * price) / 100;
        cout << "debug -1 " << chefProfit;
        double minSell = minEarn / chefProfit;
        cout << "  ans => ";
        cout << ceil(minSell) << endl;
    }
}

void problem_2()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arrSize, ans = 0;
        cin >> arrSize;
        int arr[arrSize];
        for (int i = 0; i < arrSize; i++)
        {
            cin >> arr[i];
        };
        sort(arr, arr + arrSize);
        for (int i = 1; i < arrSize; i++)
        {
            ans += arr[i];
        };
        cout << ans << endl;
    }
}

void problem_3()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len = 0;
        cin >> len;
        char str[len];
        for (int i = 0; i < len; i++)
        {
            cin >> str[i];
        }
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '1' && (str[i] == '0' || str[i] == '1'))
            {
                ans++;
            }
            else if (str[i] == '0' && str[i] == '1')
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
}

int main()
{

    // problem_1();
    // problem_2();
    problem_3();

    return 0;
}
