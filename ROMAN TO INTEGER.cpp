class Solution {
public:
int romanToInt(string s) {
map<char,int>m;
m['I']=1;
m['V']=5;
m['X']=10;
m['L']=50;
m['C']=100;
m['D']=500;
m['M']=1000;
stackn;
int fi,se,su=0;
for(int i=0;i<s.size();i++){
n.push(m[s[i]]);
if(n.size()==2){
fi=n.top();
n.pop();
se=n.top();
n.pop();
if(se<fi) su+=(fi-se);
else{
su+=se;
n.push(fi);
}
}
}
if(!n.empty()) su+=n.top();
return su;
}
};

