#include<bits/stdc++.h>
using namespace std;

int main() {
    int m;
     cin>>m;
    
    while(m--){
         string str;
        cin >> str;
        vector<char> stay;
        for (int i=0; i<str.size(); i++){
            if ( isalpha(str[i]) ){
                cout << str[i];
            }else if (str[i] == ')'){
                while (stay.back() != '(')
                {
                    cout << stay.back();
                    stay.pop_back();
                }stay.pop_back();
            }else {
                
                stay.push_back(str[i]);
            }
        }
        cout<<endl;
        
    }
	return 0;
}
