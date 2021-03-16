#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXAMS 3
#define STUDENTS 4

void main()
{
	int exams[STUDENTS][EXAMS];
	int averages[STUDENTS];
	int total;

	//input the results	
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("Input the %d results for student %d \n", EXAMS, (i + 1));
		for (int j = 0; j < EXAMS; j++)
			scanf("%d", &exams[i][j]);


		
	}

	printf("\n\n");

	//display the results	
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("The %d results for student %d are...\n", EXAMS, (i + 1));
		for (int j = 0; j < EXAMS; j++)
			printf("%d%% ", exams[i][j]);
		    printf("\n");
	}
	
	//input average of each students results into an array
	for (int i = 0; i < STUDENTS; i++)
	{	
		total = 0;
		for (int j = 0; j < EXAMS; j++) {
			total = total + exams[i][j];
		}

		averages[i] = total / 3;

	}

	//display the average of each students results
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("The average results for student %d are %d%%\n",(i + 1), averages[i] );
	}
	

}
