#include "Solutions.h"

int Main(void)
{
	FILE* Input_File = fopen("Input.txt", "r");
	FILE* Output_File = fopen("Output.txt", "w");

	double No1 = -1, No2 = -1, No3 = -1, No4 = -1, No5 = -1;

	double read_double(FILE * Input_File);
	int read_int(FILE * Input_File);

	double No1 = read_double(Input_File), No2 = read_double(Input_File), No3 = read_double(Input_File), No4 = read_double(Input_File), No5 = read_double(Input_File);




	return 0;
}