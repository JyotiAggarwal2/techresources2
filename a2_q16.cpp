#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of rows:  ";
    cin>>n;
    int sp=(2*n-3);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        for(j=1;j<=sp;j++){
            cout<<"   ";
        }
        for(j=i;j>0;j--){
            if (j==n){
                continue;
            }
            cout<<" "<<j<<" ";
        }
        sp=sp-2;
        cout<<endl;
    }
    return 0;
}
