#include <iostream>

using namespace std;

char *my_strncpy(char *dest, const char *src, unsigned int num)
{
    char *str;
    str = dest;
    
    if(!*dest)
    return NULL;
    
    while(num-- && *src)
    {
        *dest = *src ;
        dest++; src++;
    }
    
    *dest = NULL;
    
    return str;
}

char *my_strncat(char *dest, const char *src, unsigned int num)
{
    char *str;
    str = dest;
    
    if(!*dest)
    return NULL;
    
    while(*dest)
    dest++;
    
    while(*src && num--)
    {
        *dest = *src;
        dest++; src++;
    }
    
    *dest = NULL;
    
}


int main()
{
   char str1[] = "This! is test-";
   char str2[] = "string";
   
   cout << "\nInitial strings\nstr1 = "<< str1 <<"\nstr2 = "<< str2 << endl;
   
   my_strncpy(str1, str2, 8);
   printf("\nAfter copying str2 into str1 \nstr1 = %s\nstr2 = %s", str1, str2 );
   
   my_strncat(str1, str2, 5);
   printf("\n\nAfter concatenation str2 into str1 \nstr1 = %s\nstr2 = %s", str1, str2 );
   
   return 0;
}