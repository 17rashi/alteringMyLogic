//https://www.codingninjas.com/codestudio/problems/encode-the-message_699836

#include<bits/stdc++.h>
using namespace std;
void encode(string str,int count){
   if(str.length()==0){
      return;
   }
   char ch=str[0];
   if(str[0]==str[1]){
      count++;
      encode(str.substr(1),count);
   }
   else{
      cout<<ch<<count;
      count=1;
      encode(str.substr(1),count);
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      string str;
      cin>>str;
      encode(str,1);
      cout<<endl;
   }
  return 0;
}
/*
Test Cases 
1. Input
10
jwfueqdyrtcznnwkyooc
rwpiifbwdamwbubvawbm
menrbpvywannqcohijrb
mxfdakkhgqiifrhsiszt
ewzaawwxrjguemaxvgmf
lfryopxisbmmfoorodul
yevhrgenealrqntzyssl
fwunwelfgcstyeynklcb
dpzvwxdmpxldxtgxziyd
usmgdirpntqrrojcrdmk

OUTPUT:
j1w1f1u1e1q1d1y1r1t1c1z1n2w1k1y1o2c1
r1w1p1i2f1b1w1d1a1m1w1b1u1b1v1a1w1b1m1
m1e1n1r1b1p1v1y1w1a1n2q1c1o1h1i1j1r1b1
m1x1f1d1a1k2h1g1q1i2f1r1h1s1i1s1z1t1
e1w1z1a2w2x1r1j1g1u1e1m1a1x1v1g1m1f1
l1f1r1y1o1p1x1i1s1b1m2f1o2r1o1d1u1l1
y1e1v1h1r1g1e1n1e1a1l1r1q1n1t1z1y1s2l1
f1w1u1n1w1e1l1f1g1c1s1t1y1e1y1n1k1l1c1b1
d1p1z1v1w1x1d1m1p1x1l1d1x1t1g1x1z1i1y1d1
u1s1m1g1d1i1r1p1n1t1q1r2o1j1c1r1d1m1k1

2. INPUT
10
wwevffvszs
ssssssssss
oxtljfhgqm
jgovknriyw
vvaabaavvv
achbhmiqui
zdonowfxkc
kaycfbopsn
ilkmmbjucd
y

OUTPUT:
w2e1v1f2v1s1z1s1
s10
o1x1t1l1j1f1h1g1q1m1
j1g1o1v1k1n1r1i1y1w1
v2a2b1a2v3
a1c1h1b1h1m1i1q1u1i1
z1d1o1n1o1w1f1x1k1c1
k1a1y1c1f1b1o1p1s1n1
i1l1k1m2b1j1u1c1d1
y1
*/