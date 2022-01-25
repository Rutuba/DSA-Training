#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


vector<int> getMax(vector<string> operations) {
    vector<int> maxs;
    stack<int> st;
    stack<int> maxst;
    int max;
    for(string s : operations){
        if(s.at(0) == '1'){
            int no = stoi(s.substr(2));
            //cout<<"Push : "<<no<<endl;
            max=no;
            st.push(no);
            if(!maxst.empty() && max < maxst.top()) {
                max = maxst.top();
            }  
            
            maxst.push(max); 
        }
        else if(s.at(0) == '2'){
            //cout << "Pop : "<<st.top() << endl ;
            st.pop();maxst.pop();
        }
        else{
            maxs.push_back(maxst.top());
        }
    }
    return maxs;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}