#include<stdio.h>
//storing students name's And thire Marks using 2D Arrey Another Task given by darson sir
#define Student_ROWS 5
#define Student_COLS 5
#define marks_ROWS 5
#define marks_COLS 5
 
char name[Student_ROWS][Student_COLS];
int marks[marks_ROWS][marks_COLS];
int Total[5];
int NuM=0;
 
int GetStudentmarks(int I){
	for(NuM;NuM<I;NuM++){
		for(int j=0;j<marks_COLS;j++){
			printf("Add marks of subject %d = ",j+1);
			fflush(stdin);
			scanf("%d",&marks[NuM][j]);
			Total[NuM] += marks[NuM][j];
			fflush(stdin);
		}
	};
}

int main()
{
//giving students their total marks 
	for(int i=0;i<Student_ROWS;){
		printf("Your Name Shoude Not Be more then 5 Carector's also not less then 5  Carector's\n");
		printf("Student Add name = \n");
		fflush(stdin);
			for(int j=0;j<Student_COLS;j++){
				scanf("%s",&name[i][j]);
				fflush(stdin);
				break;
			};
			i++;
			GetStudentmarks(i);
		fflush(stdin);
    };
	
	fflush(stdin);
		
	//Displaying Students Name 
	for(int i=0;i<Student_ROWS;i++){
		fflush(stdin);
			for(int j=0;j<Student_COLS;j++){
				fflush(stdin);
				printf("%c", name[i][j]);
				fflush(stdin);
			};
		printf("\nYour Total is = %d \n",Total[i]);
		fflush(stdin);
	}; 
}
