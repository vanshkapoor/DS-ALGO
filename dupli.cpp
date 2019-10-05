// CPP program to remove duplicate character 
// from character array and print in sorted 
// order 
#include <iostream> 

using namespace std; 
  
char *removeDuplicate(char input1[], int n) 
{ 
   // Used as index in the modified string 
   int index = 0;    
   char input2[1000]  ;
   // Traverse through all characters 
   for (int i=0; i<n; i++) { 
         
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<n; j++)  
       {
 	 if (input1[i] == input1[j]) 
         {  break; }
	else{
       	input1[i] = input1[i];       }
     // If not present, then add it to 
     // result. 
 	    if (i == j) 
	    {
 	      input2[index++] = input1[i];
	     }
       }
   }   
   return input1; 
} 
  
// Driver code 
int main() 
{ 
   char str[]= "csharpstarz"; 
   int n = sizeof(str) / sizeof(str[0]); 
   cout << removeDuplicate(str, n); 
   return 0; 
} 
