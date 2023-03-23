#include<iostream>
#include<conio.h>
using namespace std;
void Bubble_sort(int a[],int n)
{
    int i,j,temp,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        //cout<<flag;
        if(flag==0)
            break;
    }

}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int a[10]={22,10,15,18,40,17,30,50,80,90};
    Bubble_sort(a,10);
    display(a,10);
    getch();
}
