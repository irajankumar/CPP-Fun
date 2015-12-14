//Linear search by RK non-recursive method
#include<iostream>
using namespace std;
int LinearSearchByRk(int array[],int size,int searchValue)
{
    for(int i=0; i<size;i++)
    {
        if(searchValue==array[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
         {
             int size;
             cout<<"Enter the size of array: ";
             cin>>size;
             int array[size],searchValue,result;
             for(int i=0; i<size;i++)
             {cout<<"\nEnter the " <<i<<"th Element of array: ";
             cin>>array[i];
             }
             cout<<"Enter the Value to search ";
             cin>>searchValue;
             result=LinearSearchByRk(array,size,searchValue);

             if(result>0)
             {
                 cout<<"\nElement found at "<<result<<"th position";
             }
             else
             {
                 cout<<"Element not found";
             }
          return 0;
         }

