#include<iostream>
using namespace std;
int firstocc(int arr[],int size, int key)
{
    int start=0,end=size-1,mid=start+(end-start)/2,ans=-1;
    {
        while(start<=end){
    if(key==arr[mid])
    {
        ans= mid;
        end=mid-1;
    }
    else if(key>arr[mid])
    {
        start=mid+1;

    }
    else{
    end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
    }
}
int lastocc(int arr[],int size, int key)
{
    int start=0,end=size-1,mid=start+(end-start)/2,ans=-1;
     while(start<=end)
     {
    if(key==arr[mid])
    {
        ans= mid;
        start=mid+1;
    }
    else if(key>arr[mid])
    {
        start=mid+1;

    }
    else{
    end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}

int main()
    {
        int array[8]={1,2,3,3,3,3,3,5};
        cout<<"first occurence is at index "<<firstocc(array,8,3)<<endl;
         cout<<"last occurence is at index "<<lastocc(array,8,3)<<endl;

    return 0;
    }
