#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{
  float setengah,alas,tinggi;
  float luas;
  clrscr();
  cout<<"masukan nilai alas = ";
  cin>>alas;
  cout<<"masukan nilai tinggi = ";
  cin>>tinggi;
  setengah=0.5;
  luas = setengah*alas*tinggi;
  cout<<"Luas segitiga adalah	: "<<luas<<ends;
  getch();
}