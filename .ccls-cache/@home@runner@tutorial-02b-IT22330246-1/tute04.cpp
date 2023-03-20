/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
#include <iostream>
long Factorial(int no);
long ncr(int n, int r);

using namespace std;
int main (){
    int n, r ;
    cout<<"Enter a value of n:";
    cin>>n; 
    
    cout<<"Enter  a value of r:";
    cin>>r;
    int ans = ncr(n,r);
    cout<<"ncr ="<<ans<<endl;
    
   return 0 ;
}
long Factorial(int no){
   
   int i ;
   long Factorial = 1;
   for( i =1 ; i<= no;i++)
   {
       Factorial = Factorial * i;
   }
   return Factorial ;
}
long ncr(int n, int r){
return Factorial(n) / (Factorial (r) * Factorial (n - r));
    
}