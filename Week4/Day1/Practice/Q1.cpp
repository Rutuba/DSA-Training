// Find whether the string contains duplicate elements or not
/* Input :
    1st line "n" : no of input strings
    each line the string to reinterpret_cast
   Output:
     print yes or no for each input in new line
     "YES" if contains duplicate character else "NO"
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int isDuplicateChar(string str){
    map<char,int> smap;
    for(char c : str){
        if(smap.find(c) != smap.end())
            return 1;
        smap[c]++;
    }
    return 0;
}

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s;
	    cin>>s;
	    if(isDuplicateChar(s))
	        cout<< "YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	}
	return 0;
}