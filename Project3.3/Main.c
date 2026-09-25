#include "Solutions.h"

int main(void)
{
	FILE* Input_File = fopen("Input.txt", "r");
	FILE* Output_File = fopen("Output.txt", "w");

	//Student 1
		int student_ID1 = read_integer(Input_File);
		double GPA1 = read_double(Input_File);
		int class_standing1 = read_integer(Input_File);
		double age1 = read_double(Input_File);

	//Student 2
		int student_ID2 = read_integer(Input_File);
		double GPA2 = read_double(Input_File);
		int class_standing2 = read_integer(Input_File);
		double age2 = read_double(Input_File);

	//Student 3
		int student_ID3 = read_integer(Input_File);
		double GPA3 = read_double(Input_File);
		int class_standing3 = read_integer(Input_File);
		double age3 = read_double(Input_File);

	//Student 4
		int student_ID4 = read_integer(Input_File);
		double GPA4 = read_double(Input_File);
		int class_standing4 = read_integer(Input_File);
		double age4 = read_double(Input_File);

	//Student 5
		int student_ID5 = read_integer(Input_File);
		double GPA5 = read_double(Input_File);
		int class_standing5 = read_integer(Input_File);
		double age5 = read_double(Input_File);

	//Function Calls & storing the results in variables
		double GPA_Sum = Calculate_Sum(GPA1, GPA2, GPA3, GPA4, GPA5);
		double GPA_Mean = Calculate_mean(GPA_Sum, 5);
		double Age_Sum = Calculate_Sum(age1, age2, age3, age4, age5);
		double Age_Mean = Calculate_mean(Age_Sum, 5);
		double class_standing_Sum = Calculate_Sum(class_standing1, class_standing2, class_standing3, class_standing4, class_standing5);
		double class_standing_Mean = Calculate_mean(class_standing_Sum, 5);
		double GPA_Deviation1 = Calculate_deviation(GPA1, GPA_Mean);
		double GPA_Deviation2 = Calculate_deviation(GPA2, GPA_Mean);
		double GPA_Deviation3 = Calculate_deviation(GPA3, GPA_Mean);
		double GPA_Deviation4 = Calculate_deviation(GPA4, GPA_Mean);
		double GPA_Deviation5 = Calculate_deviation(GPA5, GPA_Mean);
		double gpa_variance = Calculate_variance(GPA_Deviation1, GPA_Deviation2, GPA_Deviation3, GPA_Deviation4, GPA_Deviation5, 5);
		double gpa_standard_deviation = Calculate_standard_deviation(gpa_variance);
		double maximum_GPA = Find_Maximum(GPA1, GPA2, GPA3, GPA4, GPA5);
		double minimum_GPA = Find_Minimum(GPA1, GPA2, GPA3, GPA4, GPA5);
	
	//Printing the results to the output file
		print_double(Output_File, GPA_Mean);
		print_double(Output_File, class_standing_Mean);
		print_double(Output_File, Age_Mean);
		print_double(Output_File, gpa_standard_deviation);
		print_double(Output_File, minimum_GPA);
		print_double(Output_File, maximum_GPA);
	
		fclose(Input_File);
		fclose(Output_File);

	return 0;
}
