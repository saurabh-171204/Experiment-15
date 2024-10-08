# Experiment-15
## Aim
To study and implement Recursion.

## Software
Visual Studio Code

## Theory
Recursion in C++, is a technique in which a function calls itself repeatedly until a given condition is satisfied.
Syntax Structure of Recursion
return_type recursive_func {
....
// Base Condition
// Recursive Case
....
}

Base Condition
The base condition is the condition that is used to terminate the recursion. The recursive function will keep calling itself till the base condition is satisfied.

Recursive Case
Recursive case is the way in which the recursive call is present in the function. Recursive case can contain multiple recursive calls, or different parameters such that at the end, the base condition is satisfied and the recursion is terminated.

## Code and Output
(A)
```
// NAME - SAURABH BIHANI
// PRN - 23070123166 
// EXPERIMENT - 15(A) 

#include<iostream> 
using namespace std;

// Creating a function. 

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return(n*fact(n-1));  // Recursion 
    }
}

int main(){
    int X,n;
    cout<<"Enter a number: ";
    cin>>n;
    X=fact(n);
    cout<<X;
    return 0;
}
```
![Output_15A](https://github.com/user-attachments/assets/99d83845-a2c2-4c5a-b62c-d6cfdfa2f57a)

(B)
```
// NAME - SAURABH BIHANI
// PRN - 23070123166 
// EXPERIMENT - 15(B) 

#include<iostream> 
using namespace std;

int add(int n){
    if(n<=1){
        return 1;
    }
    else{
        return(n+add(n-1));
    }
}

int main(){
    int X,n;
    cout<<"Enter a number: ";
    cin>>n;
    X=add(n);
    cout<<X;
    return 0;
}
```
![Output_15B](https://github.com/user-attachments/assets/b725606c-3730-499f-af61-f668db16172f)

(C)
```
// NAME - SAURABH BIHANI 
// PRN - 23070123166 
// EXPERIMENT - 15(C) 

#include<iostream>
using namespace std;      

// Creating function. 
void reverse(char *str)
{
    if(*str)  // Base Condition 
    {
        reverse(str+1);  // Recursion 
        cout<<("%c",*str);
    }
}

int main() 
{
    char a[50];
    cout<<"Enter a string: ";
    cin>>a;
    reverse(a);  // Function calling 
    return 0; 
}
```
![Output_15C](https://github.com/user-attachments/assets/fcd615ce-9fe9-46ef-a680-6d96b3eaef18)

(D)
```
// NAME - SAURABH BIHANI 
// PRN - 23070123166
// EXPERIMENT - 15(D) 

#include<iostream> 
using namespace std;

// Creating a function 

void print_rev(int i){
    if(i>0)          // Base Condition  
    {
        cout<<(i%10);
        print_rev(i/10);   // Recursion 
    }
}

int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    print_rev(i);  // Function Calling   
    return 0;
}
```
![Output_15D](https://github.com/user-attachments/assets/9692bc61-34e5-44f2-b8cf-4d28bc8c7844)
