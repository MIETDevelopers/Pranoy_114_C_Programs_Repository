// Author:Pranoy Bhan
// Creation date: 31 March 2021
// Purpose: C program for Reading CSV files

#include <stdio.h>	//Preprocessor directive to include standard input output header file
#include <string.h>	//Preprocessor directive to include string header file
#include <stdlib.h>	//Preprocessor directive to include standard library header file


void read_csv(int row, int col, char *filename, double **data)
{
	FILE *file;
	file = fopen(filename, "r");

	int i = 0;	//variable declaration
    char line[4098];
	while (fgets(line, 4098, file) && (i < row))	//whileloop
    {
    	// double row[ssParams->nreal + 1];
        char* tmp = strdup(line);

	    int j = 0;
	    const char* tok;
	    for (tok = strtok(line, "\t"); tok && *tok; j++, tok = strtok(NULL, "\t\n"))
	    {
	        data[i][j] = atof(tok);
	        printf("%f\t", data[i][j]);
	    }
	    printf("\n");

        free(tmp);
        i++;
    }
}

int main(int argc, char const *argv[])
{
	//code
	if (argc < 3)
	{
		printf("Please specify the CSV file as an input.\n");
		exit(0);
	}

	int row     = atoi(argv[1]);
	int col     = atoi(argv[2]);
	char fname[256];	strcpy(fname, argv[3]);

	double **data;
	data = (double **)malloc(row * sizeof(double *));
	for (int i = 0; i < row; ++i)
	{
		data[i] = (double *)malloc(col * sizeof(double));
	}

	read_csv(row, col, fname, data);

	return 0;	//return statement
}
