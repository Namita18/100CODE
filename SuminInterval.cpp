#include<iostream>
using namespace std;
int main(){
    int n1,n2,sum=0;
    cout<<"enter number 1 and number 2"<<endl;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++){
       sum= sum+i;
    }
    cout<<sum<<endl;
    return 0;
}