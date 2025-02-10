#include <iostream>
using namespace std; 

int main(){
    int arrlen,num;
    int sum=0;
    cin>>arrlen;
    int intarr[arrlen];
    for(int i=0;i!=arrlen;i++){
        cin>>num;
        intarr[i]=num;
    }
    for(int j=0;j<arrlen;j++){
        sum+=intarr[j];
    }
    cout<<"Sum: "<<sum<<"\n";
    return 0;
}
