
#include <string>
#include <iostream>

using namespace std; 

int strcmp_ncase(string str1, string str2){


        string:: size_type i = str1.length(); 
        string:: size_type n = str2.length();
	string:: size_type total;

        if(i == n){ 
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

            return -1;                     


}