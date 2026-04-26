#include<iostream>
using namespace std;
int main(){

// int age;
//   cin>>age;


//   if(age>=18){                             // using if else
//          cout<<"you are an adult";}
//  else {   cout<<"not"; }       


// if(age>=18){                             // using if elseif
//          cout<<"you are an adult";}
//  else if (age<10) {   cout<<"not"; } 

// float marks;
// cin>>marks;

// if(marks>=80  && marks<=100){cout<< "A";}
// if(marks>=60 && marks<=79){cout<< "B";}
// if(marks>=50 && marks<59){cout<< "C";}
// if(marks>=45 && marks<=49){cout<< "D";}
// if(marks>=25 && marks<=44){cout<< "E";}
// if(marks<25 ){cout<< "F";}


// if (marks<25) { cout<<"f";}
// else if ( marks<=44) { cout<<"e";}
// else if ( marks<=49){ cout<<"d";}
// else if ( marks<=59){ cout<<"c";}
// else if ( marks<=79){ cout<<"b";}
// else if ( marks<=100){ cout<<"a";}


// int age;
// cin>>age;
// if(age<18){ cout<<"not eligible";}
// else if(age>=18  && age<=49){ cout<<"eligible";}       //see the use of else if  :the second condition is fulfilled , when the
//                                                          // age is 18,, so at any age greater than 18 it gives eligible
// else if (age>=50 && age<=59){ cout<<"retirement soon";}
// else if (age>=60 ){ cout<<"retierment time";}

                                    //above and below are same
// int age;
// cin>>age;
// if(age<18){ cout<<"not eligible";}
// else if(age<=54){ cout<<"eligible";}       //see the use of else if  :the second condition is fulfilled , when the age is 18,, so at any age greater than 18 it gives eligible
// else if (age<=57){ cout<<"retirement soon";}
// else if (age>=60 ){ cout<<"retirement time";}


int age;
cin>>age;
if(age<18){ cout<<"not eligible";}
else if(age<=60 ){ cout<<"eligible";
    if(age>=54){cout<<" but retirement soon";}}

else if ( age>=60){ cout<<"retired";}




    return 0;
}
