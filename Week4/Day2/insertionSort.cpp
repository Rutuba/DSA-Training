//insertion sort

#include <iostream>
using namespace std;

void sort(int a[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
 int a[100],n;
 cin>>n;

 for(int i=0;i<n;i++)
 {	cin>>a[i];
 }
 sort(a,n);
 
 cout << "After Sorting : ";
 for(int i=0;i<n;i++)
 {
	cout << a[i] <<" ";
 }
return 0;
}
