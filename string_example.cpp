#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char str1[] = "This! is test";
   char str2[] = "string";
   char * tok;
   
   cout << "\nInitial strings\nstr1 = "<< str1 <<"\nstr2 = "<< str2 << endl;
   
   cout << "\nTokens of str1 with delimiters \' !\' \n";
   
   tok = strtok(str1, " !");
    while(tok != NULL)
    {
        cout<<tok<<endl;
        tok = strtok(NULL, " !");
    }
   
   strncpy(str1, str2, 8);
   printf("\nAfter copying str2 into str1 \nstr1 = %s\nstr2 = %s", str1, str2 );
   
   strncat(str1, str2, 5);
   printf("\n\nAfter concatenation str2 into str1 \nstr1 = %s\nstr2 = %s", str1, str2 );
   
   return 0;
}
