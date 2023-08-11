#include <iostream>
using namespace std;

int checkStable(int arr[] , int a, int b)
{
	b = b - 1;
	int val;
	while(a--){
		val += arr[a] - arr[b];
	}
 	return val; 
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		};
		int findpair = n * (n - 1) / 2;
		int ans = 0;
		while (findpair--)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					int check = checkStable(arr, i , j);
					if (check != arr[i] - arr[j])
					{
						ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
