/******************************************
* AUTHOR : ASHWANI PONIA *
* NICK : PRIME *
* INSTITUTION : AIT *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
typedef pair<int,int>pii;
typedef vector<int>vi;
typedef vector<float>vf;

string fx(string num1, string num2) 
{ 
    int n1 = num1.size(); 
    int n2 = num2.size(); 
    if (n1 == 0 || n2 == 0) 
    return "0"; 
   
    vector<int> result(n1 + n2, 0); 
    int i_n1 = 0;  
    int i_n2 = 0;  
      
    for (int i=n1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
        i_n2 = 0;  
                       
        for (int j=n2-1; j>=0; j--) 
        { 
            int n2 = num2[j] - '0';  
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
            carry = sum/10; 
            result[i_n1 + i_n2] = sum % 10; 
   
            i_n2++; 
        } 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry;  
        i_n1++; 
    } 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 

    if (i == -1) 
    return "0"; 
    string s = ""; 
       
    while (i >= 0) 
        s += std::to_string(result[i--]); 
   
    return s; 
} 

string binpow(string a, int b) {
    string res="1";
    while(b>0){
    	if(b&1)
    		res=fx(res,a);
    	a=fx(a,a);
    	b>>=1;
    }
    return res;
}

int main() {

/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/

ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
/*
int cnt=0;
for(int i=0;i<10;i++){
	if(fx(i,10-i-1)){
		cout<<i<<" "<<10-i-1<<endl;
		cnt++;
	}
}

cout<<cnt<<endl;
*/
int t;
cin>>t;
while(t--)
{int k;
cin>>k;
string temp;
temp=binpow("2",k-1);
cout<<temp<<endl;
}

return 0;
}


