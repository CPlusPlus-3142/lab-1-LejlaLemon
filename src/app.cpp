// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;
//first function declaration
bool isPrime(int x);
//second function declaration
int closestPrime(int x);
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
/**** 
int main()
{
//two integer variables named num1 and num2
int num1, num2;
//asking user to enter two numbers
cout << "Enter two numbers: "<<endl;
cin >> num1 >> num2;
//if num1 is prime
if (isPrime(num1)){
    cout << num1 << " is prime." << endl;
//else num1 is not prime
} else {
    cout << num1 << " is not prime. The closest prime is " << closestPrime(num1)<< endl;
}
//if num2 is prime
if(isPrime(num2)){
    cout << num2 << " is prime." << endl;
//else num2 is not prime
} else {
    cout << num2 << " is not prime. The closest prime is " << closestPrime(num2)<< endl;
}
    
    return 0;          
}
****/
//first function is isPrime and it will check if a number is a prime or not
//function defintion
bool isPrime(int x){
    //statements to check if the numbers (x) is a prime or not
    //if x is less than or equal to 1,then it return false (which is not a prime)
    if(x<=1){
        return false;
    }
    //if x is equal to 2, then it returns true (which is a prime)
    //2 is the start of the prime numbers and is only an even prime
    if(x==2){
        return true;
    }
    //if x is an even number, then it returns false (which is not a prime)
    //we start by i=3 since we already checked that 2 is a prime number
    //we do i*i<=x because we need to check the square root of x
    //we do i+=2 since we are onlu checking the odd numbers, we did even numbers from the if-else statements 
    if(x%2==0){
        return false;
    }
    //we use a for loop to check the odd numbers and if it's a prime or not
    for(int i=3;i*i<=x;i+=2){
        //we check if x is divisible by i, if it is then we return false(which is not a prime)
        if(x%i==0){
            return false;
        }

    }
    //if the loop breaks, and if the numbers doesn't meet the statements from above,then it returns true (which is a prime)
    return true;

}
//second function is closestPrime and it returns x if x is a prime (an if-else loop), if not then it returns the closet prime number
//second function definition
int closestPrime(int x){
    //if its a prime number,then it returns x
    if(isPrime(x)){
        return x;
    }
    //the second half of the function defintion
    //largenum is an integer variable that adds 1 to x,making x larger
    int largenum=x+1;
    //while largenum is NOT a prime number,then it will be in the loop statement,until theirs a prime number
    while(!isPrime(largenum)){
        largenum++;
    }
    //breaks the loop then returns largenum
    return largenum;
}