#include<iostream>
using namespace std;
bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;

while(s<=e){
    if(a[s]!=a[e])
    {
        return 0;
    }
    else{
        s++;
        e--;
    }
}
    return 1;
}
void reverse(char name[], int n)
{
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    } 
    }
    int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main(){
        char name[10];
        cout<<"enter your name"<<endl;
        cin>>name;
        int len = getLength(name);
        reverse(name,len);
        cout<<name<<endl;
        cout<<"palindrome or not "<<endl<<checkPalindrome(name,len)<<endl;
    }