//7.2 Q`5 write a program to print the below pattern using nested for loop.
/* return
54321
 5432
  543
   54
    5
 */
#include<stdio.h>
#include<conio.h>
void main(){
int j,i,s;
clrscr();
for(i=5;i>=1;i--){
  for(s=4;s>=i;s--){
  printf(" ");}
   for(j=i;j>=1;j--){
   printf("%d",j);}

   printf("\n");}

getch();}