#include<stdio.h>
#include<string.h>
#define N 5
#define M 4
struct student 
	{
		int num;
		char name[50];
		int score[M];
		int sum_score;
		char mark;
	};/*最后加分号！*/
void Cal_Mark (struct student *stu)
{	
	int i,j;
	for(i=0;i<N;i++,stu++)/*直接stu++，从而用stu代替了(stu+i)*/
	{	
		stu->mark='P';
		stu->sum_score=0;
		for(j=0;j<2;j++)
		{	
			stu->sum_score+=stu->score[j];
			if(stu->score[j]<45)
				stu->mark='F';
		}
		for(j=2;j<M;j++)
		{	
			stu->sum_score+=stu->score[j];
			if(stu->score[j]<75)
				stu->mark='F';
		}
		if(stu->sum_score<320)
			stu->mark='F';
	}
}
void SelectionSort(struct student *stu)
{
	struct student temp;
	int i,j,k;
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
			if((stu+i)->sum_score<(stu+j)->sum_score)
			{/*结构体变量只能使用其元素*/
				temp.num=(stu+i)->num;
				for(k=0;k<N;k++)
				{
					temp.score[k]=(stu+i)->score[k];
					(stu+i)->score[k]=(stu+j)->score[k];
					(stu+j)->score[k]=temp.score[k];
				}
				temp.sum_score=(stu+i)->sum_score;
				(stu+i)->sum_score=(stu+j)->sum_score;
				(stu+j)->sum_score=temp.sum_score;

				temp.num=(stu+i)->num;
				(stu+i)->num=(stu+j)->num;
				(stu+j)->num=temp.num;

				temp.mark=(stu+i)->mark;
				(stu+i)->mark=(stu+j)->mark;
				(stu+j)->mark=temp.mark;

				strcpy(temp.name,(stu+i)->name);
				strcpy((stu+i)->name,(stu+j)->name);
				strcpy((stu+j)->name,temp.name);


				/*strcpy(temp.score,(stu+i)->score);
				(stu+i)->num=(stu+j)->num;
				strcpy((stu+i)->score,(stu+j)->score);
				(stu+i)->num=temp.num;
				strcpy((stu+j)->score,temp.score);这种能跨行注释*///这种注释只能注一行。。//
			}
}
void main()
{
	struct student stu[N];
	/*struct student stu1,stu2,stu3,stu4,stu5;*/
	int i,j;
	printf("Please input like this:\n1（回车） 郭子同（回车） 100（回车） 100（回车） 150（回车） 149（回车）");
	for(i=0;i<N;i++)
	{
		printf("\nInput the information of student%d:\n",i+1);
		scanf("%d",&stu[i].num);
		fflush(stdin);
		gets(stu[i].name);
		for(j=0;j<M;j++)
			scanf("%d",&stu[i].score[j]);
	}

	Cal_Mark(stu);
	SelectionSort(stu);
	for(i=0;i<N;i++)
		printf("The resulet is:\n%-3d%-7s%-4d%-4d%-4d%-4d%-4d%-5c\n",
		stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],
		stu[i].score[2],stu[i].score[3],stu[i].sum_score,stu[i].mark);
}

//版权所有，翻版必究（^-.-^）//










