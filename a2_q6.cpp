#include<iostream>
using namespace std;
int main(){
    int n,i,j,sp,st;
    sp=1;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<endl;
    st=(n+2)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=st;j++){
            cout<<" * ";
        }
        for(j=1;j<=sp;j++){
            cout<<"   ";
        }
        for(j=1;j<=st;j++){
            cout<<" * ";
        }
        if(i<=n/2){
            st=st-1;
            sp=sp+2;
        }
        else{
            st=st+1;
            sp=sp-2;
        }
        cout<<endl;
    }
    return 0;
}
