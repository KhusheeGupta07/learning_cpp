#include<iostream>
using namespace std;
int main(){
/*int num;
    cin>>num;
    int ans=0,m=1,rem=0;
    while(num>0){
        rem=num%2;
        num/=2;
        ans=rem*m+ans;
        m*=10;}
            cout<<ans;*/

            int num;
            cin>>num;
            int ans , rem= 0 ,mul = 1;
            while(num>0){
                rem = num%2;
                num = num/2;
                  ans= rem * mul  + ans ;
                  

            }

 /*int num;
    cin>>num;
    int ans=0,m=1,rem=0;
    while(num>0){
        rem=num%10;
        num/=10;
        ans=rem*m+ans;
        m*=2;}
            cout<<ans; */ 
 /*  int num;
    cin>>num;
    int ans=0,m=1,rem=0;
    while(num>0){
        rem=num%8;
        num/=8;
        ans=rem*m+ans;
        m*=10;}
            cout<<ans; */   
            
  /*int num;
    cin>>num;
    int ans=0,rem=0;
    while(num>10){
       while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem;} 
        num=ans;}
       cout<<ans;   */   
   int num;
    cin>>num;
    int ans=0,rem=0;
    while(num>9){
       while(num!=0){
        rem=num%10;
        num/=10;
        ans+=rem;} 
        num=ans;}
       cout<<ans;
    return 0;
}