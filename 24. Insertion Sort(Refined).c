#include<stdio.h>
#define MAX 1000

void store(int*,int);

void insertion_sort(int*,int*,int);

void display(int*,int*,int);

int main()
{
    int arr[MAX],num;
    printf("Enter How Many Elements You Want To Store: ");
    scanf("%d",&num);

    store(arr,num);

    int sortedarr[num];
    insertion_sort(arr,sortedarr,num);

    display(arr,sortedarr,num);

    system("pause");
    return 0;
}

void store(int* p, int no)
{
    for (int i=0;i<no;i++)
    {
        printf("Enter %dth element: ",i+1);
        scanf("%d",(p+i));
    }
}

void insertion_sort(int* p1,int* p2,int no)
{
    for (int i=0;i<no;i++)
        *(p2+i)=*(p1+i);

    int i, marker, j;
    for (i = 1; i < no; i++)
    {
       marker = *(p2+i);
       j = i-1;

       while (j >= 0 && *(p2+j) > marker)
       {
           *(p2+j+1) = *(p2+j);
           j = j-1;
       }
       *(p2+j+1) = marker;
    }
}

void display(int* p1,int* p2,int no)
{
    printf("\n\n  THE ORIGINAL ARRAY ELEMENTS\t\t    THE SORTED ARRAY ELEMENTS\n");
    for (int i=0;i<no;i++)
        printf("\t\t%d\t\t\t\t\t%d\n",*(p1+i),*(p2+i));
    printf("\n");
}
