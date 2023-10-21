#include <iostream>
using namespace std;

int p1(int n , int sum){
    int j = 0 , k = 0;
    if (n==0)
    {
        return 0;
    }
    k = n%10;
    j = n/10;
    sum = sum+k;
    p1(j , sum);
    cout<<"value of k "<<k<<"\n";
}

int p2(int n){
    static int d = 1;
    // cout<<n<<"\n"<<d<<endl;
    d++;

    if(n>1){
        p2(n-1);
    }
    cout<<d<<endl;
    // cout<<d<<endl;
}

int main(){
    int v1 = p1(2048 , 0);
    int v2 = p2(3);
    std::cout<<"\n finished !";
}