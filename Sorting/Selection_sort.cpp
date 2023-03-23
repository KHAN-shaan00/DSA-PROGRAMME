#include<iostream>
#include<conio.h>
using namespace std;
int max_index_elements(int a[],int n,int j)
{
    int min_num,index;
    min_num=a[j];
    index=j;
    for(j=j+1;j<=n-1;j++)
    {
        if(min_num>a[j])
        {
          min_num=a[j];
          index=j;
        }
    }
    return index;
}
void selection_sort(int a[],int n)
{
    int i,max_index,temp;
    for(i=0;i<=n-2;i++)
    {
        max_index=max_index_elements(a,n,i);
        temp=a[i];
        a[i]=a[max_index];
        a[max_index]=temp;
    }
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<endl;
}

int main()
{
    int a[10]={30,20,50,40,60,90,100,110,15,25};
    selection_sort(a,10);
    //Display();
    //cout<<max_index_elements(a,10,0);
    getch();

}
