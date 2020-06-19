#include <cstring>
#include <string>
#include <iostream>

using namespace std; 




int strcmp_ncase(char *str1, char *str2, char punc = 'Y', char space = 'Y'){


        string:: size_type i = strlen(str1); 
        string:: size_type n = strlen(str2);
	string:: size_type total;

        if(i == n && punc == 'Y' && space == 'Y'){ 
                for(string:: size_type p = 0; p<i; p++){
                        if(tolower(str1[p]) == tolower(str2[p])){
                                
                        }

                        if(tolower(str1[p]) != tolower(str2[p])){
                                if(int(str1[p]) > int(str2[p])){
                                        return 1;
                                }else{
                                        return -1; 
                                }
                        }
                       

                }

                return 0; 

        }

        if(punc == 'N' && space == 'N'){
                 i = strlen(str1); 
                 n = strlen(str2);
                
                if(i>n){
                        total = i; 
                 }else{
                        total = n; 
                 }
                
                        for(string:: size_type p = 0; p<total; p++){

                                if (!ispunct(str1[p]) && !ispunct(str2[p])
                                   && !isspace(str1[p]) && !isspace(str2[p]))
                                {
                              if(tolower(str1[p]) == tolower(str2[p])){
                                        
                              }
                              
                              if (tolower(str1[p]) != tolower(str2[p])){
                                      if(int(str1[p]) > int(str2[p])){
                                                return 1;
                                      }else{
                                              return -1; 
                                      }

                              }
                        }

         }
        return 0; 

}

if(punc == 'Y' && space == 'N'){
         i = strlen(str1); 
         n = strlen(str2);
        
        if(i>n){
                total = i; 
        }else{
                 total = n; 
        }
                
                for(string:: size_type p = 0; p<total; p++){

                        if (!ispunct(str1[p]) && !ispunct(str2[p]))
                        {
                              if(tolower(str1[p]) == tolower(str2[p])){

                              }
                              
                              if (tolower(str1[p]) != tolower(str2[p])){
                                      if(int(str1[p]) > int(str2[p])){
                                                return 1;
                                      }else{
                                              return -1; 
                                      }

                              }
                        }

         }
        return 0; 

}

        if(punc == 'N' && space == 'Y'){
                 i = strlen(str1); 
                 n = strlen(str2);
               
                if(i>n){
                        total = i; 
                 }else{
                        total = n; 
        }
                
                for(string:: size_type p = 0; p<total; p++){

                        if (!isspace(str1[p]) && !isspace(str2[p]))
                        {
                              if(tolower(str1[p]) == tolower(str2[p])){

                              }
                              
                              if (tolower(str1[p]) != tolower(str2[p])){
                                      if(int(str1[p]) > int(str2[p])){
                                                return 1;
                                      }else{
                                              return -1; 
                                      }

                              }
                        }

         }
        return 0; 

}

return 400; ////should never reach this point

}
