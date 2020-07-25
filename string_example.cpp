#include<iostream>
#include<string.h>

using namespace std;

int main()
{
   char str[40];
   char str1[] = "hi there! ";
   char str2[] = "this is a, string";
   char * tok;
   
   strncpy(str, str1, sizeof(str1)); // used sizeof to copy whole str1 into str 
   strncat(str, str2, 13); // appends only 13 charaters of str2 in str
   
   cout<<str1<<endl<<str2<<endl<<str<<"\n\n";
   
   tok = strtok(str, " !,");
   while(tok != NULL)
   {
       cout<<tok<<endl;
       tok = strtok(NULL, " !,");
   }
   
   
   return 0;
}