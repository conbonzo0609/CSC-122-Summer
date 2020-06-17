#include <cstring>
#include <string>
#include <iostream>

using namespace std; 




int strcmp_ncase(char *str1, char *str2, char y = 'N'){
       
      int n = 0; 
      if(y == 'Y'){
       for(int i = 0; i<strlen(str1); ++i)
       {
               if (str1[i] != ' ' && ispunct(str1[i]) == 0 )
                        str1[n++] = str1[i];
       }

       str1[n] = '\0';

       int z = 0; 
       for(int p = 0; p<strlen(str2); ++p)
       {
               if (str2[p] != ' ' && ispunct(str2[p]) == 0 )
                        str2[z++] = str2[p];
       }

        str2[z] = '\0';

        return strcmp(str1,str2);
        
      }

        return strcmp(str1,str2);

}