#include <iostream> 
using namespace std; 
  
char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 
  
// Driver program to test above function 
int main() 
{ 
    char str1[] = "gee    k   "; 
    cout << removeSpaces(str1) << endl; 
  
    char str2[] = " g e e k "; 
    cout << removeSpaces(str2); 
    return 0;
}