//7.2 Q`6 write a program to print the below pattern using nested for loop.
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
for(i=1;i<=5;i++){
  for(s=1;s<=i;s++){
  printf(" ");}
   for(j=5;j>=i;j--){
   printf("%d",j);}

   printf("\n");}

getch();}