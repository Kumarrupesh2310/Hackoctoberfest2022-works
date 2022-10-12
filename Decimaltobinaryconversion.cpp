#include<bits/stdc++.h>
using namespace std;
int main(void){
int x;
long long rem,base=0;
cin>>x;
cout<<"number of leading zeros:"<< __builtin_clz(x)<<endl;
cout<<"Trailing zero in binary form: "<< __builtin_ctz(x)<<endl;
cout<<"number of 1's in binary form:"<<__builtin_popcount(x)<<endl;
long int i=0;
while(x>=1){
    rem=x%2;
    base+=rem*pow(10,i);
    i++;
    x=x/2;
}
cout<<base<<endl;
}
