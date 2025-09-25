#include <iostream>  
using namespace std;  
long long factorial(int n) {  
long long fact = 1;        
//Initializing the fact 1  
for(int i = 2; i <= n; i++) {    //Staring the fact from 2   
fact *= i;  
}  
return fact;  
}  
int main() {  
int n = 20, r = 3;      
long long c = factorial(n) / (factorial(r) * factorial(n - r));   //formula for combination  
cout << "Combination is: " << c << endl;   //output  
return 0;  
} 

