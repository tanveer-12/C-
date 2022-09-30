#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10] = {1,99,4,37,88,3,19,45,62,87};
    int i,num, *ptr;
    /*Assigning the base address of array arr to ptr"*/
    ptr=arr;

    cout<<"Enter the element to be searched: ";
    cin>>num;

    for(i=0;i<10;i++)
    {
        if(*ptr==num)
        {
            cout<<"\n"<<num<<" is present in the array";
            break;
        }
        else if(i==9)
        cout<<"\n"<<num<<" is not present in the array";
        ptr++;
    }
    getch();
}
