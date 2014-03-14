#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct student
{
	int id;
	int score;
};

void findmax(struct student *stu, int *score, int *index)
{
	int max=0;
	for(int i=0;i<10;i++)
	{
		if((*(stu+max)).score<(*(stu+i)).score) max=i;
	}
	printf("%d %d\n", (*(stu+max)).id, (*(stu+max)).score);
}

void findmin(struct student *stu, int *score, int *index)
{
	int max=0;
	for(int i=0;i<10;i++)
	{
		if((*(stu+max)).score>(*(stu+i)).score) max=i;
	}
	printf("%d %d\n", (*(stu+max)).id, (*(stu+max)).score);
}

void findaver(struct student *stu, int *score, int *index)
{
	double pre=0;
	for(int i=0;i<10;i++) pre+=(*(stu+i)).score;
	pre/=10;
	int min=0;
	for(int i=0;i<10;i++)
	{
		if(fabs((*(stu+min)).score-pre)>abs(((*(stu+i)).score)-pre)) min=i;
	}
	printf("%d %d\n", (*(stu+min)).id, (*(stu+min)).score);
}

int main()
{
	struct student *students;
	students=(struct student *)malloc(sizeof(struct student)*100);
	for (int i = 0; i < 10; i++)

		scanf("%d%d", &(*(students+i)).id, &(*(students+i)).score);

	findmax(students,NULL,NULL);
	findmin(students,NULL,NULL);
	findaver(students,NULL,NULL);
	return 0;
}