#include<iostream> 
using namespace std;

int main(){
    string s1,s2;
    int res=0;
    cin>> s1>>s2;
    for(int i=0; i<s1.size(); i++){
        char c1 = s1[i];
        char c2 = s2[i];
        if(c1<'a'){
            c1 = c1+32;
        }
        if(c2<'a'){
            c2 = c2+32;
        }
        if(c1<c2){
            res = -1;
            break;
        }
        if(c1>c2){
            res = 1;
            break;
        }
    }
    cout<<res;
    return 0;
}