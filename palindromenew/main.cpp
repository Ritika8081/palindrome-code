/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string[10] = "aaccaa";
    int len = strlen(string);
    int st=0;
    int ed=len-1;
    int i=0;
    int flag=0;
   while(i<=len){
        if(string[st] ==string[ed]){
           
            st++;
            ed--;
        }
        else{
            flag++;
        }
        i++;
        
    }
    if(flag>=1){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }

    return 0;
}
