#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("usage : ./caesar key");
        return 1;
    }
    
    for(int i=0,len=strlen(argcv[1]); i<len; i++)
        if(!isdigit(argv[1][i]))
        {
            printf("usage: ./caesar key");
            return 1;
        }
        
    int k = atoi(argv[1])%26;
    string s = GetString();
    int len = strlen(s);
    
    for(int i =0; i<len; i++)
        if(isalpha(s[i])) {
            int tmp = (int) s[i]+k;
            
            if(isupper(s[i])) {
                if(tmp>65+25)
                    tmp=tmp-26;
            }
            else {
                if(tmp>97+25)
                    tmp=tmp-26;
            }
            
            printf("%c", (char)tmp);
        } else
            printf("%c", s[i]);
    printf("\n");
    
    return 0;
}#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("usage : ./caesar key");
        return 1;
    }
    
    for(int i=0,len=strlen(argcv[1]); i<len; i++)
        if(!isdigit(argv[1][i]))
        {
            printf("usage: ./caesar key");
            return 1;
        }
        
    int k = atoi(argv[1])%26;
    string s = GetString();
    int len = strlen(s);
    
    for(int i =0; i<len; i++)
        if(isalpha(s[i])) {
            int tmp = (int) s[i]+k;
            
            if(isupper(s[i])) {
                if(tmp>65+25)
                    tmp=tmp-26;
            }
            else {
                if(tmp>97+25)
                    tmp=tmp-26;
            }
            
            printf("%c", (char)tmp);
        } else
            printf("%c", s[i]);
    printf("\n");
    
    return 0;
}
