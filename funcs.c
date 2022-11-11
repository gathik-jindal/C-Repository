#include <stdio.h>
// Aim 1. show how functions and their prototypes work
//     2. show how the call sequence works
//     3. show how the returns and parameter lists work

// notion of declare before use - just move around the function
// show prototytpe
// show scope


void saybye(){
	printf("   bye\n");
}

void sayhi(){
	printf("   hi\n");
	printf("   Now calling sayhello\n");
	sayhello();
	printf("   back from sayhello\n");
}

void sayhello(){
	printf("      hello\n");
}

void main(){
	printf("main\n");
	printf("Now calling sayhi\n");
	sayhi();
	printf("back from sayhi\n");
	printf("Now calling saybye\n");
	saybye();
	printf("back from saybye\n");
}
// ------------- demonstrate parameters and return values
// Modify main to call there one by one
//
int get_number(){
	printf("Will return a value\n");
	return(5);
}

void print_number(int n){
	printf("Will receive a value and print it\n");
	printf("%d", n);
}

int  add_numbers(int n, int m){
	printf("Will print received numbers and return their sum\n");
	printf("numbers received are  %d  and  %d\n",n,m);
	return n+m;
}


