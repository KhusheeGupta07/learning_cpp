#include<iostream>
using namespace std;
int main(){
int arr[5]={600000000,20000000,-5,14,-3};   //INT K ANDER ONLY 9 DIGIT KE NUMBER HI AA SKTE H
    for(int i=0;i<4; i++){
        int index = i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[index]){
                index=j; }  }
     swap(arr[i],arr[index])  ;         
    }
        cout<<"SORTED_ARRAY:";
    for(int i=0;i<5; i++){
      cout<<arr[i]<<"   ";
      }
}
