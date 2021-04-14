#include<bits/stdc++.h>
using namespace std;

void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}  

int add(double a,double b){
    return a+b;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    add(a,b,c);
    cout<<add(a,b)<<endl;
}
