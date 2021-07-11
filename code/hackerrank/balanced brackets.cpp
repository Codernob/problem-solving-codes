#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
if(s.size()%2 != 0) return "NO";
stack<char> stck;
for(auto i=0;i<s.size();i++) {
if(s[i]=='[' || s[i]=='(' || s[i]=='{') stck.push(s[i]);
else {
if(stck.empty()) return "NO";
if(s[i]==']' && stck.top()!='[') return "NO";
else if(s[i]==']' && stck.top()=='[') stck.pop();
if(s[i]=='}' && stck.top()!='{') return "NO";
else if(s[i]=='}' && stck.top()=='{') stck.pop();
if(s[i]==')' && stck.top()!='(') return "NO";
else if(s[i]==')' && stck.top()=='(') stck.pop();
		}
    }
if(stck.empty()) return "YES";
else return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
