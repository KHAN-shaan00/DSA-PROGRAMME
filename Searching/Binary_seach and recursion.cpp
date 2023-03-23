#include<iostream>
using namespace std;
int binary_Search(int a[],int n,int num)
{
        int first,last,mid;
        first=0;
        last=n-1;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(a[mid]==num)
                return mid;
            else if(a[mid]<num)
                first=mid+1;
            else
                last=mid-1;
        }
        return -1;
}
int Re_binary_search(int a[],int first,int last,int num)
{   int mid;
    if(first<=last)
    {
      mid=(first+last)/2;
      if(a[mid]==num)
         return mid;
      else if(a[mid]>num)
         return Re_binary_search(a,first,mid-1,num);
      else
         return Re_binary_search(a,mid+1,last,num);
    }
    return -1;

}
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    cout<<binary_Search(a,10,40)<<endl;
    cout<<Re_binary_search(a,0,9,70)<<endl;
   return 0;
}
