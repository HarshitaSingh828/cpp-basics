// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
//   pair<int,int> p = {1,3};
//   cout<<p.first<<endl;
//   cout<<p.second<<endl;
  
//   pair<int, pair<int,int>>p= {1,{2,3}};
//   cout<<p.first<<endl;
//   cout<<p.second.first <<endl;
//   cout<<p.second.second;

pair<pair<int,pair<int,int>>,pair<int, pair<int,int>>>p= {{1,{2,3}},{4,{7,8}}};
  cout<<p.first.first<<endl;
  cout<<p.first.second.first <<endl;
  cout<<p.first.second.second;

}

// pair<int,int>arr[]={{1,2},{3,4},{5,6}};
// cout<<arr[1].second<<endl;
// cout<<arr[2].first;



// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
//   vector<int>v;
//   v.push_back(1);
//   v.push_back(2);
//   cout<<v[0]<<endl;
//   cout<<v[1] << endl;
  
//   vector<pair<int,int>>p;
//   p.push_back({1,2});
//   p.push_back({4,5});
//   cout<<p[0].second<<endl;
//   cout<<p[1].first<<endl; 

// vector<int>v(5);
// for(int i = 0; i < 5; i++) cout<< v[i];
// }

// vector<int>v(5,20);
// for(int i = 0; i < 5; i++) cout<< v[i];
// }

// vector<int>v1(5,10);
// vector<int>v2(v1);
//  for(int i = 0; i < 5; i++) cout<< v2[i];
// }
// vector<int>p;
// p.push_back(1);
// p.push_back(12);
// int s = p.size();
// for(int i = 0;i < s; i++){
//     cout<<p[i]<<endl;
// }

// vector<int>p;
// p.push_back(1);
// p.push_back(12);
// p.push_back(19);
// p.push_back(20);
// cout<<p.size();
// p.pop_back();


// cout<< *p.begin();
// cout<<  p.end();
// cout<< p.back();
// p.erase(p.begin());
// p.erase(p.begin()+2);
// p.erase(p.begin()+1,p.begin()+3);
// for(int i = 0; i <p.size();i++){
//     cout<<p[i]<<endl;
// }

//insert
// p.insert(pos,value);
// p.insert(p.begin(),10);
// p.insert(p.begin()+1,2);
// for(int i = 0; i <p.size();i++){
//     cout<<p[i]<<endl;
// }

// p.insert(p.begin()+1,2,10);
// for(int i = 0; i <p.size();i++){
//     cout<<p[i]<<endl;
// }

// p.clear();
// cout<<p.size();
// cout<<p.empty();
vector<int>p;
p.push_back(10);
p.push_back(20);
p.push_back(30);
p.push_back(40);

vector<int>q;
q.push_back(50);
q.push_back(60);
q.push_back(70);
q.push_back(80);

p.swap(q);
for(int i = 0; i <p.size();i++){
    cout<<p[i]<<endl;
}
}







// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
   list<int>ls;
   ls.push_back(1);
   ls.push_back(2);
   ls.push_back(3);
   for(auto it:ls){
       cout << it << endl;
   }
   
}




// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

vector<int> func(string &s){
    int n = s.size();
    vector<int>arr(n);
     for(int i = 0; i < n; i++){
      for(int k = 1; k <= i; k++){
         string pref = s.substr(0,k); 
         string suffix = s.substr(i-k+1,k);
          if(pref == suffix){
              arr[i] =k;
          }
      }
     }
     return arr;
}
int main() {
    string s;
    cin>>s;
    vector<int>arr = func(s);
    for(int i = 0; i < arr.size(); i++){
     cout<<arr[i];   
    }
}







#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
   // list<int>ls;
   // ls.push_back(1);
   // ls.push_back(2);
   // ls.push_back(3);
   // ls.push_front(4);  
   // for(auto it:ls){
   //     cout << it << endl;
   // }
   // cout<<*ls.begin();
   // cout<< *ls.end(); 
    // cout<< ls.back();
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    // while(st.size()!=0){
    //     cout<< st.top()<< endl;
    //     st.pop();
    // }
    // cout<<st.top();
    // cout<<st.size();
    cout<<st.empty();
}
