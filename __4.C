//7.2 Q`4 write a program to print the below pattern using nested for loop.
/* return
10101
 0101
  101
   01
    1
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
   printf("%d",j%2);}

   printf("\n");}

getch();}