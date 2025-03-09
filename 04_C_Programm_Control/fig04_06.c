// Fig. 4.6: fig04_06.c
// Calculating compoud interest

#include<stdio.h>
#include<math.h>

int main(void){
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate

    // output tablecolumn heads
    printf("%4s%21s\n", "Year", "Amount of deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year){

	// calculate new amount for sepcified year
	double amount = principal * pow(1.0 + rate, year);

	// output one table row
	printf("%4u%21.2f\n", year, amount);
    }
}
