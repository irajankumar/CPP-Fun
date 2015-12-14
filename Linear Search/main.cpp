//C++ Proram for linear search by Recursive Method
#include<iostream>
using namespace std;
int recursiveLinearSearchByRk(int array[],int SearchElement,int size)
{
	size=size-1;
	if(size <0)
	{
      return -1;
    }
      else if(array[size]==SearchElement)
	  {
      return 1;
      }
      else
	  {
      return recursiveLinearSearchByRk(array,SearchElement,size);
      }

}
int main() {
    int size;
      cout<<"Enter The Size Of Array:   ";

    cin>>size;
    int array[size], SearchElement,i;
    for(int j=0;j<size;j++){
    cout<<"Enter "<<j<<"th Element : ";
    cin>>array[j];
    }
    for(int a=0;a<size;a++){
       cout<<"array[ "<<a<<" ]  =  ";
       cout<<array[a]<<"\n";
    }
    cout<<"Enter Element To Search  in Array ";
    cin>>SearchElement;
    int result;
    result=recursiveLinearSearchByRk(array,SearchElement,size--);
    if(result==1){
    cout<<"Element Found in Array ";
    }
    else{
    cout<<"Element NOT Found in Array  ";
    }
    return 0;
}
