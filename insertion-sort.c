#include <stdio.h>
void insertionSort(int list[], int last)
{
	int hold;
	int walker;
	int current;
	for (current=1;current<=last;current++)
	{
		hold=list[current];
        /*CHIH: set walker to the end of sorted...*/
		for (walker = current-1;walker >= 0 && hold < list[walker];walker--)
		{
			/*CHIH: walker is bigger than hold, so move right*/
			list[walker+1]=list[walker];		
		}
		list[walker+1]=hold;
	}
}

int main(int argc,char* argv[])
{
	int mylist[]={11, 12, 13, 14, 15, 16, 7, 8, 9, 10, 23, 29, 31, 37, 1 ,99};
	int array_size=sizeof(mylist) / sizeof(int);
	int i;
	
	printf("before sorting: \n");
	for (i=0;i<array_size;i++)
	{
		printf("%d ",mylist[i]);
	}
	printf("\n");
	insertionSort(mylist,array_size-1);
	printf("after sorting: \n");
	for (i=0;i<array_size;i++)
	{
		printf("%d ",mylist[i]);
	}
	printf("\n");
	return 0;
}
//test result: 
//before sorting:
//11 12 13 14 15 16 7 8 9 10 23 29 31 37 1 99
//after sorting:
//1 7 8 9 10 11 12 13 14 15 16 23 29 31 37 99