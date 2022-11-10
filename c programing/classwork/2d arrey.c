#include<stdio.h>
void main()

{
	int arry1[3][3],arry2[3][3];
	int i,j;
	
	   printf("\n------enter arry1--------\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter index [%d][%d] :",i,j);
			scanf("%d",&arry1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n value at index [%d][%d] : %d",i,j,arry1[i][j]);
			
}
	
}
      printf("\n------enter arry2--------");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter index [%d][%d] :",i,j);
			scanf("%d",&arry2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n value at index [%d][%d] : %d",i,j,arry2[i][j]);
			
}
          printf("\n-----addition of 2 arry is=---\n");
}  
       
     for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n value at index [%d][%d] := %d",i,j,(arry1[i][j]+arry2[i][j]));
			
		
		

}
}
}

