#include<iostream>
using namespace std:
int Quick(int a[],int l,int r)
{
    int left,right,loc,temp;
    left=l;
    right=r;
    loc=l;
    while(left<right)
    {

        while(a[loc]>a[right] && a[left]<a[right])
            right--;
        if(left<right)
            break:
        else
        {
            temp=a[loc];
            a[loc]=a[right];
            a[right]=temp;
            loc=right;
        }
       while(a[loc]<a[left] && a[left]<a[right])
            left++;
        if(left<right)
            break:
        else
        {
            temp=a[loc];
            a[loc]=a[left];
            a[left]=temp;
            loc=left;
        }
    }
    return loc;
}
void Qucik_sort(int a[],int l,int r)
{
    int loc;
    loc=Quick(a,l,r);
    if(loc<loc-1)
        Quick(a,0,loc-1);
    if(loc>loc+1)
        Quick(a,loc+1,9);
}
void Display (int a[],int n)
{
    for(int i;i<=n-1;i++)
        cout<<a[i];
}
int main()
{
    int a[10]={20,10,30,40,100,60,50,9,8,15};
    Quick_sort(a,0,9);
    Display(a,10);
}
