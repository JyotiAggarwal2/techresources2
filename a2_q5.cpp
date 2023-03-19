#include<iostream>
using namespace std;
int main(){
    int n,i,j,sp,st;
    st=1;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<endl;
    sp=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"   ";
        }
        for(j=1;j<=st;j++){
            cout<<" * ";
        }
        if(i<=n/2){
            sp--;
            st=st+2;
        }
        else{
            sp++;
            st=st-2;
        }
    cout<<endl;
    }
    return 0;
}
