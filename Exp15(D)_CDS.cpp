// NAME - SHLOKA PATEL 
// PRN - 23070123120 
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

// Output 
// 
// Enter the number: 123467
// 764321 
