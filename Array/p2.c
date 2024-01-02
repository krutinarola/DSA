/* Writr 5 student 3 subject marks,total marks, percentage and grade.*/

#include<stdio.h>
#include<conio.h>
int main()

{

   int eng[5],guj[5],stat[5],total[5],per[5];
   int i;
   char grade[5];

	for(i=0; i < 5; i++)99
	{
		printf("\nEnter %d students marks ---->\n",i+1);
		printf("\nEnter English marks : ");
		scanf("%d",&eng[i]);
		printf("\nEnter Gujrati marks : ");
		scanf("%d",&guj[i]);
		printf("\nEnter stat marks : ");
		scanf("%d",&stat[i]);
		total[i]=eng[i] + guj[i] + stat[i];
		per[i]=(total[i]*100)/300;
	}
	
	printf("\nNo.\teng\tguj\tstat\ttotal\tper\tgrade\t\n");

	for(i=0; i < 5; i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i+1,eng[i],guj[i],stat[i],total[i],per[i],grade[i]);


		if(per[i]<=35)
		{
			printf("fail");
		}
		else if(per[i]>=90)

		{
			printf(" Grade A ");
		}
		else if(80<=per[i]<90)
		{
			printf(" Grade B ");
		}
		else if(per[i]>=70 && per[i]<80)
		{
			printf(" Grade C ");
		}
		else if(60<=per[i]<70)
		{
			printf(" Grade D ");
		}
		else
		{
			printf(" Grade E ");
		}

	}

		return 0;	
}