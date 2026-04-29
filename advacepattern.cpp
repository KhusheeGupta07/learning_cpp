#include<iostream>
using namespace std;
int main(){


// for(int i=1 ; i<=5 ;i++){
//         for( int j =1; j<=5-i; j++){
//             cout<<" ";}
//                                        //  for(int i=0 ; i<5 ;i++){
//                                       //         for( int j =0; j<5-i; j++){
//                                       //             cout<<" a ";}
//            for( int j =1; j<=(2*i-1); j++){
//      cout<<'*';} 
//  cout<<"\n"; }



//  for(int i=1 ; i<=5 ;i++){
//         for( int j =1; j<=5-i; j++){
//             cout<<" ";}
//           for(int j=1 ;j<=i ;j++){
//             cout<<j;}
//             for(int j=i-1;j>0;j--){
//                 cout<<j; }
//  cout<<"\n"; }



 for(int i=1;i<=5; i++){
    for(int j=1;j<i;j++){
         cout<<" "; }
    for(int j=5-i;j>=1;j--){                         //WAITING
        cout<<'*'; }
     for( int j=5-i; j>=1;j--){
        cout<<'*'; } 
     cout<<"\n";    }


// for(int i=5;i>0;i--){
//     for(int j=i-1;j>0;j--){
//         cout<<" ";   }
//     for(int j=5-i+1;j>0;j--){
//         cout<<'*';  }
//     for(int j=5-i;j>0;j--){
//         cout<<'*';  } 
//      cout<<"\n"; 
// }
                                             

// for(int i = 5;i>0;i--){
// for(int j=5-i;j>0 ; j--){
//     cout<<" ";
// }
// for( int  j=2*i-1 ;   j>0;j--) {
//        cout<<'*';}
//            cout<<"\n"; 
// }

                                                    //SAME

// for(int i=0;i<5; i++){
//     for(int j=0;j<i;j++){
//          cout<<" "; }                                       //YEH ALAG H BS
//     for(int j=5-i;j>=1;j--){
//         cout<<j;  } 
//      cout<<"\n";    }

                                       //SAME H UPER WALA AND NEECHE WALA AND USKE NEECHE WALA

// for(int i=0;i<5; i++){
//     for(int j=0;j<i;j++){
//          cout<<" "; }
//     for(int j=5-i;j>=1;j--){
//         cout<<'*';  }
//  for(int j=5-i-1;j>=1;j--){
//         cout<<'*';  }
//      cout<<"\n";}
                                      //  or

// for(int i=5;i>=1;i--){
//     for(int j=5-i;j>=1;j--){
//          cout<<" "; }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<'*';  }
//      cout<<"\n";}


// for(int i=0;i<5; i++){
//     for(int j=0;j<i;j++){
//          cout<<" "; }
//     for(int j=5-i;j>=1;j--){
//         cout<<j;  }
//     for(int j=5-i-1;j>=1;j--){
//         cout<<j;  }
//      cout<<"\n";}

// for(int i=4; i>=1 ; i--){
//     for(int j=1;j<=i;j++){
//         cout<<'*'; }
//         for(int j=1;j<=8-2*i;j++){
//             cout<<" ";  }
//             for(int j=1;j<=i ;j++){
//                 cout<<'*';     }
//     cout<<"\n";  }




    // int n,i,j;
    // cin>>n;

// for(int i=n; i>=1 ; i--){
//     for(int j=1;j<=i;j++){
//         cout<<'*'; }
//         for(int j=1;j<=2*n-2*i;j++){
//             cout<<" ";  }
//             for(int j=1;j<=i ;j++){
//                 cout<<'*';     }
//                   cout<<"\n";  }

// int i,j,n;
//     for(i=1;i<=n; i++){
//         for(j =1;j<=i;j++){
//             cout<<'*'; }
//        for(j=1;j<=2*n-2*i;j++){
// cout<<" "; }     
//    for(j=1;j<=i;j++){
//     cout<<'*'; } 
//    cout<<"\n";}


  
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         cout<<'*';}
//         for(j=1;j<=2*n-2*i;j++){
//             cout<<" ";  }
//             for(int j=1;j<=i ;j++){
//                 cout<<'*';  }
//                   cout<<"\n";  }  



//  //////////////for(i=1;i<n; i++){
//      for(int j=n-1;j>=1;j--){                             error
//         cout<<'*'; }
//         for(int j=1;j<=2*n-2*i;j++){
//             cout<<" ";  }
//             for(int j=1;j<=i ;j++){
//                 cout<<'*';     }
//                   cout<<"\n";  }///////////
                  
                  

//   for(int i=n-1; i>=1 ; i--){
//     for(int j=1;j<=i;j++){
//         cout<<'*'; }
//         for(int j=1;j<=2*n-2*i;j++){
//             cout<<" ";  }
//             for(int j=1;j<=i ;j++){
//                 cout<<'*';     }
//                   cout<<"\n";  }



// for(i=1;i<=n;i++){
//     for(j=n-1;j>=i;j--){
//         cout<<" ";   }
//         for(j=1;j<=i;j++){
//            cout<<'*'<<" "; 
//         } cout<<"\n"; }
// for( i=n; i>=1 ; i--){
//     for( j=1;j<=n-i;j++){
//            cout<<" ";  }
//             for(j=1;j<=i;j++){
//            cout<<'*'<<" ";  }
// cout<<"\n"; }

// for(char i='a'; i<='e' ; i++){
//     for(int j =1;j<= 5;j++){
//         cout<<i;
//     }cout<<"\n";
// }

// for (int i=1;i<=5;i++){
//     char name = 'a' +i-1;
//      for(int j =1;j<= 5;j++){
//         cout<<name<<"  ";
//      }
//      cout<<"\n";
// }


// for( int  i=1;i<=5;i++ ){
//      for(char c='a'; c<='e' ; c++){
//          cout<<c<<"  ";
//      }
//      cout<<"\n";
// }



// for( int  i=1;i<=5;i++ ){
//     for(int j =1;j<= 5;j++){
//         char name = 'a' +j-1;
//           cout<<name<<"  ";
//      }
//      cout<<"\n";
// }

// int c =1;
// for(int i = 1; i<=5;i++){
//   for(int j =1;j<= 5;j++){
//     cout<<c;
//     c++;
//   }  cout<<"\n";
// }


   return 0;
}

   
                                            
                                  
