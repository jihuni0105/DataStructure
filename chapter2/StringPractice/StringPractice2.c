/*
This program is for studying string function.
Name : 박지훈
ID : 202010653
Date : 2025.03.18
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct student {
	int id;
	char name[20];	
	double score;
};
typedef struct student Student;
void printf_Student(Student s);
Student Max_student(Student s[], int n);
Student find_student(Student s[], int n, char name[]);
int main(void) {
	Student s[3], max;
	int i;	

	for (i = 0; i < 3; i++) {
		printf("ID, name, score >> ");
		scanf("%d %s %lf", &s[i].id, s[i].name, &s[i].score);
	}
	for(i=0; i<3; i++)
		printf_Student(s[i]);
	max = Max_student(s, 3);
	printf("The max score student is : \n");
	printf_Student(max);
	return 0;
}
void printf_student(student s)
{
	printf("ID = %d, Name = %s score = %lf\n", s.id, s.name, s.score)
}
Student Max_student(Student s[], int n)
{
	int i;
	Student Max;

	Max = s[0];
	for(i=1; i<n ; i++)
		if(Max.score < s[i].score)
			Max = s[i];
	result Max;
}
