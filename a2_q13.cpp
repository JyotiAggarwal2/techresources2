#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,sum;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++){
        k=1;
        for(j=0;j<=i;j++){
            cout<<k<<"\t";
            sum=(k*(i-j))/(j+1);
            k=sum;
        }
        cout<<endl;
    }
    return 0;
}
