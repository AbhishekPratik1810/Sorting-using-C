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

    int* marker=p2+1;

    for (int i=0;i<no-1;i++)
    {
        int pos=0,flag=0;
        printf("\n");
        for (;pos<=i;pos++)
        {
            if (*(p2+pos) <=*marker && *marker<=*(p2+pos+1))
            {
                flag=1;
                pos++;
                break;
            }
        }

        if (flag==0)
            pos=0;

        int j=i, tmp=*marker;
        while(j!=pos-1)
        {
            *(p2+j+1)=*(p2+j);
            j--;
        }
        *(p2+pos)=tmp;

        marker++;
    }
}

void display(int* p1,int* p2,int no)
{
    printf("\n\n  THE ORIGINAL ARRAY ELEMENTS\t\t    THE SORTED ARRAY ELEMENTS\n");
    for (int i=0;i<no;i++)
        printf("\t\t%d\t\t\t\t\t%d\n",*(p1+i),*(p2+i));
    printf("\n");
}
