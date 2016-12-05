#include<iostream.h>
#include<stdio.h>
#include<conio.h>
main()
{
 int a, b;
 char lagi;
atas:
clrscr();
cout<<"MasukkanBilangan=";
cin>>a;
b=a%2;
printf("Nilai%d%%2adalah=%d",a,b);
printf("\n\nInginHitungLagi[Y/T]:");
lagi=getche();
if(lagi=='Y'||lagi=='y')
	goto atas;
  getch();
}