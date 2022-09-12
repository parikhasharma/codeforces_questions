#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int chartoint(char a)
{
    int i= a-'0';  
    return i;
}
char intochar(int i)
{
    char c='a'+i-1;
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
       int n;
       cin>>n;
       int a;
       vector<int> arr;
       for(int i=0;i<n;i++){
              cin>>a;
              arr.push_back(a);
       }
        int maxelementindex= max_element(arr.begin(), arr.end()) - arr.begin() ;
        cout<< maxelementindex + 1 << endl;
        t--;
    }
}
