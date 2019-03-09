//BATTLESHIP

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i=0,j=0,k=0,x=0,y=0,m,n,flag=0,flag2=0;
	
	char a[3][3],b[3][3],c[3][3];
	
	srand(time(0));

		x=rand()%3;
		y=rand()%3;
	
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a[i][j] = '*';
			}
		}
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%c\t",a[i][j]);
			}
			printf("\n");
		}
		printf("_______________________________________________________________________________\n");
	for(k=0;k<3;k++)
	{	
		printf("\n There is a battle ship under! Please Select a Coordinate(i.e. 0 1) to Bombard: \n");
		scanf("%d%d",&m,&n);
		printf("\n");
		if(m >2 || n >2)
		{
			printf("\nPlease enter correct values betn 0 to 2 \n ");
			scanf("%d%d",&m,&n);
		}
		 if(m==x && n==y)
		 {		 	
		 	a[m][n]='B';
		 	flag = 1;
		 }else
		 {
		 a[m][n]='M';
		 flag2++;
		 
			}
		 
		 	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%c\t",a[i][j]);
			}
			printf("\n");
		}
		
				
		 
		 if(flag == 1)
		 {
		 	printf("\nTHe target was succesfully hit!!\n mission Accomplished ");
		 	exit(0);
		 }
		 else if (flag2 == 3)
		{
		 printf("\nYou are a shame!!\n you have failed\n");	
		 }else if(flag2<3)
		 printf("\nYou have missed!! You only have %d chance left\n\n",3-flag2);
		
		
		printf("_______________________________________________________________________________\n");
		getch();
		 system("cls");	
	}
}

