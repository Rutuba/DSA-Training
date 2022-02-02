//Selection sort

#include <iostream>
using namespace std;

void sort(int a[],int n){
    int min_index,temp;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
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
