#include <iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

void main()
{
textbackground(2);
clrscr();
int c=1,r=1,ch;
_setcursortype(_NOCURSOR);
textcolor(1);
gotoxy(c,r);
int m,n,i=0,a=0;
cout<<"#";
do
{
	ch=getch();
	if(a==0){randomize();
	m=random(79)+1;
	n=random(24)+1;
	gotoxy(m,n);
	cout<<"@"; a++;}
	switch(ch)
	{ case 72: if(r==1) r=24; else r--; gotoxy(c,r); cout<<"#"; break;
	  case 80: if(r==24) r=1; else r++; gotoxy(c,r); cout<<"#"; break;
	  case 77: if(c==79) c=1; else c++; gotoxy(c,r); cout<<"#"; break;
	  case 75: if(c==1) c=79; else c--; gotoxy(c,r); cout<<"#"; break;
	} delay(10);
	if(c==m&&r==n)
	{
	gotoxy(m,n); cout<<" "; i++;
	m=random(79)+1;
	n=random(24)+1;
	gotoxy(m,n);
	cout<<"@"; }
} while(ch!=27&&i!=4);
clrscr();
cout<<"YOU WON";
getch();

}