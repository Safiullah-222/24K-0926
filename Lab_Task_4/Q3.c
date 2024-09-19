#include <stdio.h>
  
 int main()
 {
 	
 	// a=97 z = 122
 	// A= 65 to 90
 	// 0 to 9 digit
 	//128-255 special
 	char ch;
 	
 	
 	printf ("Enter a character ");
 	scanf("%c",&ch );
 	
 	if (ch >= 96 && ch <= 122)
 	{
 		printf("Chracter is  lower-case alphabet");
	 }
 	 
 	
 	if (ch >= 65 && ch <= 90)
 	{
 		printf("Chracter is upper-case alphabet");
	 }
 	
	if (ch >= 48 && ch <= 57)
 	{
 		printf("Chracter is a digit");
	 }
 	
 	if (ch >= 33 && ch <= 47)
 	{
 		printf("Chracter is a special character");
	 }
 	
 	
 	
 	return 0;
 	
 	
 	
 }