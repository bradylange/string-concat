#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRSIZE 100

/*
 * Brady Lange
 * 3/12/18
 * File name: mystrcat.c
 * This program is my own version of the string catenate function in the C library that catenates two strings together
 */
 
 //My string catenate function that takes that combines two strings
 char * mystrcat(char * destination, const char * source)
 {
	 int i = 0;
	 int destSize = strlen(destination);
	 
	 //This loop combines two strings together
	 while(source[i] != '\0')
	 {
		if(destSize > 0)
		{
			destination[destSize] = source[i];
		}
		else
			destination[i] = source[i];
		destSize++;
		i++;
	 }
	 
	 //Setting the new end spot in the destination array
	 destination[destSize] = source[i];
	 
	 return destination;
	 
 } //End of mystrcat function 
 
 //Main function to test the function above 
 int main(int argc, char * argv[])
 {
	 int i = 0;
	 int str1Size = strlen(argv[1]);
	 int str2Size = strlen(argv[2]);
	 char string1[STRSIZE];
	 char string2[STRSIZE];
	 string1[str1Size] = '\0';
	 string2[str2Size] = '\0';
	 
	 //Making the two string arrays more user friendly to work with
	 while(argv[1][i] != '\0')
	 {
		 string1[i] = argv[1][i];
		 i++;
	 }
	 i = 0;
	 while(argv[2][i] != '\0')
	 {
		 string2[i] = argv[2][i];
		 i++;
	 }

	 //Printing out the two combined strings
	 printf("%s\n", mystrcat(string1, string2));
	 
	 return 0;
	 
 } //End of main function 