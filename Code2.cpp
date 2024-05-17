
#include <bits/stdc++.h> 
using namespace std; 
  
void reverse(char *str, int index, int n)  
{ 
    if(index == n)       
    { 
        return; 
    } 
    char temp = str[index];    
    reverse(str, index+1, n); 
    cout << temp;              
} 
  
int main() 
{ 
    char a[] = "Shreyas Rama"; 
    int n = sizeof(a) / sizeof(a[0]); 
    reverse(a, 0, n); 
    return 0; 
} 
