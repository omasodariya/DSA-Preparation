#include<bits/stdc++.h>
using namespace std;

int main()
{
// unordered_map<string,int> mp;
map<string,int> mp;

pair<string,int> p=make_pair("meera",1);
// pair<string,int> p={"meera",1};
mp.insert(p);
pair<string,int> q("love",2);
mp.insert(q);

mp["babbar"]=3;

cout<<mp["meera"]<<endl;
cout<<mp.at("meera")<<endl;

// cout<<mp.at("om")<<endl; //here it will give error 
cout<<mp["om"]<<endl;//this will map om to 0
cout<<mp.at("om")<<endl; 

//size
cout<<mp.size()<<endl;

//check
cout<<mp.count("bro")<<endl;//absent-0
cout<<mp.count("om")<<endl;//presant-1

mp.erase("om"); 
cout<<mp.size()<<endl;

// map print 
// for(auto i:mp){
//     cout<<i.first<<" "<<i.second<<endl;
// }

//iterator
// unordered_map<string,int> :: iterator it=mp.begin();
map<string,int> :: iterator it=mp.begin();
while(it!=mp.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}


return 0;
}