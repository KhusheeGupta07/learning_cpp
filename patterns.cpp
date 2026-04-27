#include<iostream>
using namespace std;
    int main(){
 /* for(int i=0 ; i<5 ;i++){
            for( int j =0; j<5; j++){
                cout<<j<<" ";
            }
      cout<<"\n";  }*/
     
    
/*for(int i=0 ; i<5 ;i++){
            for( int j =5; j>0; j--){
                cout<<j<<" ";
            }
      cout<<"\n";  }*/


 /*for(int i=0 ; i<5 ;i++){
            for( int j =0; j<5; j++){
                cout<<j*j<<" ";
            }
      cout<<"\n";}*/

/*for(int i=0 ; i<5 ;i++){
    char name = 'a' + i;
            for( int j =0; j<5; j++){
                cout<<name<<" ";
            }
      cout<<"\n";}*/

 /*for(char c = 'a'; c<= 'e';c++){
            for( char j = 'a'; j<= 'e';j++){
                cout<<j<<" ";
            }
      cout<<"\n";}    */ 
                                                    //or
   /*   for(int i=0 ; i<5 ;i++){
            for( char j = 'a'; j<= 'e';j++){
                cout<<j<<" ";
            }
      cout<<"\n";} */


 /*int count =1;
      for(int i=0 ; i<5 ;i++){
            for( int j =0; j<5; j++){
                 cout<<count<<" ";
                count++;   }
      cout<<"\n";}*/

 /*for(int i=0 ; i<5 ;i++){
            for( int j =0; j<=i; j++){
                 cout<<j<<" ";  }
      cout<<"\n";}*/
  
 /*for(int i=0 ; i<5 ;i++){
            for( int j =0; j<=i; j++){
                 cout<<i<<" ";  }
      cout<<"\n";}*/

// for(int i=0 ; i<5 ;i++){
//             for( int j =i; j>0; j--){
//                  cout<<j<<" ";  }
//       cout<<"\n";  } 

// for(int i=0 ; i<5 ;i++){
//     char c ='a' + i;
//             for( int j =0; j<=i; j++){
//                  cout<<c<<" ";  }
//       cout<<"\n";}

// for(int i=5 ; i>0 ;i--){
//             for( int j =0; j<i; j++){
//                 cout<<'*'<<" ";
//             }
//       cout<<"\n";  }



// for(int i=1 ; i<=5 ;i++){
// for(int j=5; j>=5-(i-1);j--){
//                  cout<<j<<" ";  }
//       cout<<"\n";}

                                              //SAME H UPER AND NEECHE KA OUTPUT

//  for(int i=1 ; i<=5 ;i++){
//       int z=5;
//       for( int j =1; j<=i; j++){
//         //   int z=5;               INITIALISE Z PER ROW NOT PER COLUMN
//    if(z>0){
//         cout<<z;}
//         z--;
//       }cout<<"\n"; }


 
 for(int i=0 ; i<5 ;i++){
        for( int j =0; j<=5-i; j++){
            cout<<" ";}
           for( int j =0; j<=i; j++){
    cout<<'*';} 
    cout<<"\n"; }



 
//  for(int i=0 ; i<5 ;i++){
//         for( int j =0; j<=5-i; j++){
//             cout<<" ";}
//            for( int j =0; j<=i; j++) 
//     cout<<i;} 
//     cout<<"\n"; }


// for(int i=0 ; i<5 ;i++){
//         for( int j =0; j<=5-i; j++){
//             cout<<" ";}
//            for( int j =0; j<=i; j++){
//     cout<<j;} 
//     cout<<"\n"; }   


//  for(int i=0 ; i<5 ;i++){
//         for( int j =0; j<5-i; j++){
//             cout<<" ";}
//   char c='a';          
//            for( int j =0; j<=i; j++){
//             cout<<c;
//             c=c+1;} 
//     cout<<"\n"; } 


                                   //or


// for(int i=0 ; i<5 ;i++){
//         for( int j =0; j<5-i; j++){
//             cout<<" ";}
// for(char c='a';c<='a'+(i-1);  c++){
//     cout<<c; }
// cout<<"\n"; }

                                 //ISKE NEECHE  WAALA AND ISE OBSERVE KARO
// for(int i=1 ; i<=5 ;i++){
//         for( int j =1; j<=5-i; j++){
//             cout<<" ";}
// for(char c='a';c<='a'+(i-1);  c++){
//     cout<<c; }
// cout<<"\n"; } 
    return 0;
}
