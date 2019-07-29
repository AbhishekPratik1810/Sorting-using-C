#include<stdio.h>
#define MAX 1000

void store(int*,int);

void bubble_sort(int*,int*,int);

void display(int*,int*,int);

int main()
{
    int arr[MAX],num;
    printf("Enter How Many Elements You Want To Store: ");
    scanf("%d",&num);

    store(arr,num);

    int sortedarr[num];
    bubble_sort(arr,sortedarr,num);

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

void bubble_sort(int* p1,int* p2,int no)
{
    for (int i=0;i<no;i++)
        *(p2+i)=*(p1+i);

    for (int i=no; i>1;i--)
    {
        int k=0;
        for(int j=1;j<no;j++)
        {
            if(*(p2+j)< *(p2+k))
            {
                int tmp=*(p2+k);
                *(p2+k)=*(p2+j);
                *(p2+j)=tmp;
            }
            k++;
        }
    }
}

void display(int* p1,int* p2,int no)
{
    printf("\n\n  THE ORIGINAL ARRAY ELEMENTS\t\t    THE SORTED ARRAY ELEMENTS\n");
    for (int i=0;i<no;i++)
        printf("\t\t%d\t\t\t\t\t%d\n",*(p1+i),*(p2+i));
    printf("\n");
}
