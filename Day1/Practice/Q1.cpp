#include <iostream>
using namespace std;

int* reverse(int p[] , int q){
    int s=0,e=q-1;
    while(s<=e){
        int tmp=p[s];
        p[s]=p[e];
        p[e]=tmp;
        s++;e--;
    }
    return p;
}

int main() {
	int q;
	cin>>q;
	int p[q];
	for(int i=0;i<q;i++){
	    cin>>p[i];
	}
	auto arr=reverse(p,q);
	for(int a=0;a<q;a++)
	    cout<<arr[a]<<" ";
	return 0;
}
