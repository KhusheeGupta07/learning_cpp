#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,4,8,6, 5};
   // int l=length(arr);
   int num;
cin>>num;
    for(int i=0;i<5;i++){                         //search of an element
   if(arr[i]==num){
    cout<<i;
  cout<<arr[i];
  }break;
        }
    return 0;
}
