#include<stdio.h>
#include<conio.h>
#include <ctype.h>


//Write a function that receives a character and returns a positive valued integer if the character is vowel, 
//returns a negative valued integer if the character is consonant, 
//returns zero in the character is not a letter.
//Use the function in a program that receives character from user and tells if the character is a vowel, 
//or a consonant or not a letter until the last character entered is not a letter. 

// isalpha() =Tests if the character is an alphabetical character. Returns '0' if it is not an alphabetic character.
// isdigit() =Tests if the character is a number.
//If the received character is not a number, it returns '0'.
int main(){

char n;

while(1){
    printf("Please enter a character:");
    scanf(" %c",&n); 
    int h=isdigit(n);
    if(h==0){
       int m=r_function(n);
       if(m==2){
    	printf("VOWEL\n");
	  }
	   else if(m==-2){
		printf("CONSONANT\n");
	  }
	   else if(m==0){
		break;
	  }
    }
    else{
    	break;
	}
   
	continue;
}
printf("The loop is exited.");

	return 0;
}
int r_function(int x){
	
	int y=isalpha(x);
	if(x==0){
		return 0;
	}
	else{
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
		return 2;
	    }
	    else{
		return -2;
     	}
	}
	
}


