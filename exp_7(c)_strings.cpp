// printing string in reverse 
#include<iostream> 
#include<string> 
using namespace std; 
int main() { 
string x; 
cout<<"Enter a string: "; 
cin>>x; 
    int i; 
    for(i=x.length()-1;i>=0;i--) { 
        cout<<x[i]; 
    } 
    return 0; 
}