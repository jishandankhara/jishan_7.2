//7.2 Q`1 write a program to print the below pattern using nested for loop.
/* return
    1
   21
  321
 4321
54321
 */
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s;
clrscr();
for(i=1;i<=5;i++){
 for(s=4;s>=i;s--){
  printf(" ");}
   for(j=i;j>=1;j--){
   printf("%d",j);}printf("\n");}

getch();}
