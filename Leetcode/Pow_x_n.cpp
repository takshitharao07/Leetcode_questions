#include<iostream>
using namespace std;

/*  RUNTIME ERROR:
    Last executed input:
        0.00001
        2147483647   
            |
            V          */
// double power(double x,int n){
//     if(n==0){
//         return 1;
//     }
//     if(x==0){
//         return 0;
//     }
//     //recursive case
//     if(n>0){  // Even and positive power
//         return x*power(x,n-1);
//     }
//     else{     // Negative power
//         n*=-1;
//         return (1/(power(x,n)));
//     }
// }     

double power(double x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    //recursive case
    double temp=power(x,n/2);

    if(n%2==0){  // Even and positive power
        return temp*temp;
    }
    else{ 
        if(n>0){ // Odd and positive power
            return x*temp*temp;
        }
        else     // Negative power
            n=abs(n);
            return ((temp*temp)/x);
    }
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    cout<<power(x,n);
}