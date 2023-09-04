#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     
     while(t--){
         int p, m,r;
         cin>>p>>m>>r;
         vector<int> vecp;
         vector<int> vecMyP;
         
         // taking input value
         int k = 0;
         while(k<p){
             int a;
             cin >> a;
            vecp.push_back(a);
            k++;
         }

         // sort array
         sort(vecp.begin(), vecp.end());
         
         
         //main logic part
        for (int i = p - 1; i >= 0; i -= m) {
            
            int MysingleP = vecp[i-r+1];
            
            // slice vector for next round
            vector<int> sliced(vecp.begin(), vecp.begin() + i+1);
            vecp = sliced;
            
            // push value to my qeue
            vecMyP.push_back(MysingleP);
        }
         
         // sum and return
        int ans = 0;
        for (int num : vecMyP) {
            ans += num;
        }
        cout<<ans<<endl;
     }
	return 0;
}
