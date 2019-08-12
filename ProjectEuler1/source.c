//  ===========================================================================
//  Program:              x
//
//  File:                 x
//
//  Software Engineer:    x
//
//  Class:				  x
//
//  Date:                 x
//
//  Purpose:              x
//
//  Parameters:           x
//
//  Returns:              x
//  ===========================================================================

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int main() {

	int max = 1000;
	int sum = 0;

	for (int i = 0; i < max; i++) {
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = (i + sum);
		}
	}

	printf("\nThe sum is: %d\n", sum);





}  //  end main