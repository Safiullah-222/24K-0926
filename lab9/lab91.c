#include<stdio.h>
#include<string.h>

//void ispalindrome(str[][])



void palindrome(char str[5][20]){
	char chr ,chr2;
	int size,isvalid = 0;
	int i = 0;
	for (i=0;i<5;i++){
		size = strlen(str[i]);
		int j = 0;
		while ( j<=size/2 || isvalid == 0){
			chr = str[i][j];
		    chr2 = str[i][size -j-1];
		    if (chr == chr2){
			isvalid = 1;
		    }
		    else {
			isvalid = 0;
		    }
	    	j++;
		
	}

    	isvalid? printf("word is palindrome\n"):printf("not palindrome\n");
	}

	
}

int main(){
	char str[5][20] = {"racecar","madam","level","radar","deed"};
	/*
	for  (int i=0; i <=5; i++){
		printf("Enter word %d to be checked for palindrome (20 or less letter word)\n", i+1);
		scanf("%s", str[i]);
		palindrome(str[i]);
	*/
	palindrome(str);
	}
	
	
