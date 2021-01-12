#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main()
{
    char c,d;
    int j=0;
    char word[100];
    char wordcut[100],maxword[100];
    int wcnt=0,maxcnt=0;
    int num[10],a[26],A[26];
    int space=0,whitespace=0,lowercase=0,uppercase=0,digit=0,countword=0,line=0,byte=0;
 
    for(int i=0;i<=9;i++){
            num[i]=0;
        }
        for(int i=0;i<26;i++){
            a[i]=0;
            A[i]=0;
        }
    
    while((c=getchar())!=EOF){
        byte++;
        if(c==' '){
            space++;
        }
        if(isspace(c)){
            whitespace++;
        }
        else if(c>='a' && c<='z'){
            lowercase++;
        }
        else if(c>='A' && c<='Z'){
            uppercase++;
        }
        else if(c>='0' && c<='9'){
            digit++;
        }
 
        
        if(!isspace(c)){
            word[j]=c;
            j++;
            if(j==1){
                countword++;
            }
        }
        else{
            j=0;
        }
 
        
        if(!isspace(c)){
          wordcut[wcnt]=c;
          wcnt++;
        }
        else{
          if(maxcnt<wcnt){
            maxcnt=wcnt;
            for(int i=0;i<maxcnt;i++){
              maxword[i]=wordcut[i];
            }
          }
          else if(maxcnt==wcnt && maxcnt!=0 && wcnt!=0){
              if(strcmp(maxword,wordcut)>0){
                  for(int i=0;i<wcnt;i++){
                      maxword[i]=wordcut[i];
                  }
              }
          }
            for(int i=0;i<wcnt;i++){
               wordcut[i]=0;
            }
            wcnt=0;
        }
 
        if(c=='\n'){
            line++;
        }
 
        if(c>='0' && c<='9'){
            num[c-'0']++;
        }
        else if(c>='a' && c<='z'){
            a[c-'a']++;
        }
        else if(c>='A' && c<='Z'){
            A[c-'A']++;
        }d=c;
    }if(d!='\n'){
        line++;
    }
    if(!isspace(d)){
        if(maxcnt<wcnt){
            maxcnt=wcnt;
            for(int i=0;i<maxcnt;i++){
              maxword[i]=wordcut[i];
            }
          }
          else if(maxcnt==wcnt && maxcnt!=0 && wcnt!=0){
              if(strcmp(maxword,wordcut)>0){
                  for(int i=0;i<wcnt;i++){
                      maxword[i]=wordcut[i];
                  }
              }
          }
            for(int i=0;i<wcnt;i++){
               wordcut[i]=0;
            }
            wcnt=0;
    }
    
 
 
   

    printf("===\n[2] Case-Sensitive Stats\n===\n");
    for(int i=0;i<26;i++){
        printf("%d %d\n",'A'+i,A[i]);
    }
 
    
return 0;
}