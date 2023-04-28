#include<stdio.h>
#define max 100
main() {
   char str[max],f='a';
   int i;
   printf("enter the string to be checked: ");
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++) {
      switch(f) {
         case 'a': if(str[i]=='0') f='d';
            else if(str[i]=='1') f='b';
         break;
         case 'b': if(str[i]=='0') f='c';
            else if(str[i]=='1') f='b';
         break;
         case 'c': if(str[i]=='0') f='c';
            else if(str[i]=='1') f='b';
         break;
         case 'd': if(str[i]=='0') f='d';
             else if (str[i]=='1') f='d';
      }
   }
   if(f=='c')
      printf("String is accepted", f);
   else printf("String is not accepted", f);
      return 0;
}