#include<iostream>
using namespace std;
int main(){
  /*int i=1;
    while(i<=10){
    cout<<i<<"\n";
i++;}*/
                 
// int i=1;
// int n;
// cin>>n;
// while(i<=10){
//     cout<<n*i<<""<<"\n";
//     i++;
// }

 
// int n;
// for( int i=1;i<=n;i++){
//     if(i%4==0)
//     continue;
//         cout<<i<<" ";  }


int n;
 cin>>n;
 for( int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;
    }
 }

/*switch (i)
{
case 1:
    cout<<"ram";
    break;

case 2:
     cout<<"sita";
    break;
default:
    cout<<"laxman";
}*/ 
   /*int num;
    cin>>num;   int ans=0,rem;
    while(num>9){
         int ans=0,rem;
       while(num!=0){
        rem = num%10;
        num/= 10;
        ans+=rem;} 
        num=ans;}
       cout<<num;*/
/*int num;
    cin>>num;
    if(num%400==0  || num%4 ==0 && num%100 !=0){
        cout<<"leap";}
        else
        cout<<"no";*/
 /*int i,num;
    cin>>num;
 for(i=1;i<num;i++){
    if(i*i>num)
    break;
 }       
cout<<i-1;*/
// int num;
//     cin>>num;
//     int ans=0,rem=0,m=1;
//  while(num>0){
//         rem=num%2;
//        num/= 2;
//  rem = rem^1;
//           ans=rem*m+ans;
//         m*=2;
//     }
//    cout<<ans; 

return 0;
}