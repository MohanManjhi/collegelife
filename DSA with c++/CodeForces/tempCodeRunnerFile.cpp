#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,maxSub=0;
    cin>>n;
    while (n--)
    {
        int x = 0,res=0;

        cin>>a;
        if(x<=a){
            res++;
        }else{
            maxSub = max(maxSub,res);
            res=0;
        }
    }
    cout<<maxSub;
    
    return 0;
}