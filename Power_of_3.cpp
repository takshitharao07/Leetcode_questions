/*   326. Power of Three : Easy
    Given an integer n, return true if it is a power of three. Otherwise, return false.
    An integer n is a power of three, if there exists an integer x such that n == 3x.   */

#include<iostream>
using namespace std;

bool isPower_of_three(long long int n){
    if(n<=0){
        return false;
    }
    else if(n==1){
        return true;
    }
    else if(n%3==0){
        return isPower_of_three(n/3);
    }
    return false;
}
int main(){
    long long int n;
    cin>>n;
    if(isPower_of_three(n)==1){
        cout<<"True";
    }    
    else{
        cout<<"False";
    }
}