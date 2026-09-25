#ifndef Solutions_h
#define Solutions_h
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h>

//Before No.1 - No.7
//Note: The following function prototypes are for reading and printing data from/to files. These functions are used in the main program to read input data from a file and print output data to a file.
//STUDY FOR TEST DUMMIE
double read_double(FILE* infile);
int read_integer(FILE* infile);
void print_double(FILE* outfile, double number);

//Function prototypes for the functions used in the main program
//This Is the Function Prototype For No.1
double Calculate_Sum(double No1, double No2, double No3, double No4, double No5);
//This Is the Function Prototype For No.2
double Calculate_mean(double Sum, int number);
//This Is the Function Prototype For No.3
double Calculate_deviation(double Number, double Mean);
//This Is the Function Prototype For No.4
double Calculate_variance(double Deviation1, double Deviation2, double Deviation3, double Deviation4, double Deviation5, int number);
//This Is the Function Prototype For No.5
double Calculate_standard_deviation(double Variance);
//This Is the Function Prototype For No.6
double Find_Maximum(double No1, double No2, double No3, double No4, double No5);
//This Is the Function Prototype For No.7
double Find_Minimum(double No1, double No2, double No3, double No4, double No5);
#endif
