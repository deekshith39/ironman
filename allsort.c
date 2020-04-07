#include<stdio.h>
#include<stdlib.h>
int a[20],c[20],n;
void is();
void bs();
void ss();
void ms(int low,int high);
void merge(int low,int mid,int high);
void qs(int low,int high);
int partition(int low,int high);
void print();
void main()
{   int choice;
printf("enter the no. of elements\n");
scanf("%d",&n);
printf("enter the array : \n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
    printf("1.bubble sort\n2.insertion sort\n3.selection sort\n4.merge sort\n5.quick sort\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:bs();
        break;
        case 2:is();
        break;
        case 3:ss();
        break;
        case 4:ms(0,n-1);
        print();
        break;
        case 5:qs(0,n-1);
        print();
        break;

    }
}
void print()
{
    printf("the elements sorted \n");
for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}

void bs()
{int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
        }
    }
    print();


}

void ss()
{int temp;
    int small;
    for(int i=0;i<n;i++)
    {
        small=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                temp=a[j];
                a[j]=small;
                small=temp;
            }
        }
         a[i]=small;

    }
    print();
}

void is()
{int item,j;
    for(int i=1;i<n;i++)
    {
        item=a[i];
        j=i-1;
        while(j>=0&&a[j]>item)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    print();

}

void ms(int low,int high)
{int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        ms(low,mid);
        ms(mid+1,high);
        merge(low,mid,high);

    }
}

void merge(int low,int mid,int high)
{
    int i,j,k;
    k=0;
    i=low;j=mid+1;k=0;
    while(i<=mid&&j<=high)
    {
       if(a[i]<a[j])
       {
           c[k]=a[i];
           i++;
       }
       else
       {
           c[k]=a[j];
           j++;
       }
       k++;
    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;i++;
    }
    while(j<=high)
    {
        c[k]=a[j];
        k++;j++;
    }
    for(int i=low,j=0;i<=high;i++,j++)
        a[i]=c[j];
}
void qs(int low,int high)
{int pindex;
    if(low<high)
    {
        pindex=partition(low,high);
        qs(low,pindex-1);
        qs(pindex+1,high);
    }
}
int partition(int low,int high)
{int pivot,i,j,temp;
    pivot=a[low];
    i=low+1;
    j=high;
    while(1)
    {
        while(a[i]<=pivot&&i<=high)
            i=i+1;
        while(a[j]>pivot&&j>=low)
            j=j-1;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
             a[low]=a[j];
            a[j]=pivot;
            return j;
        }



    }

}
