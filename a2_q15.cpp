#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1,sp,st=1,sum;
    cout<<"Enter a number: ";
    cin>>n;
    sp=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"   ";
        }
        int t=k;
        for(j=1;j<=st;j++){
            cout<<" "<<t<<" ";
            if(j<=st/2){
                t=t+1;
            }
            else{
                t=t-1;
            }           
        }
        if(i<=n/2){
            sp=sp-1;
            st=st+2;
            k++;
        }
        else{
            sp++;
            st=st-2;
            k--;
        }
        cout<<endl;
    }
    return 0;
}
