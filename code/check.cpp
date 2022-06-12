#include<bits/stdc++.h>
#include<time.h>
using namespace std;
string s,s1;char top='a',down='a';char num[15],name[40];
int ckec(int i){
	int f=0;
	while(i>0){
		i=i/10;
		f++;
	}
	return f;
}
int main(){
	freopen("user\\top.pk","r",stdin);
	cin>>top;fclose(stdin);cin.clear();
    for(char i='a';i<=top;i++){
    	int f=0;
    	num[2]='e';num[3]='r';num[4]='\\';
	    num[0]='u';num[1]='s';num[5]=i;
	    num[6]='.';num[7]='p';num[8]='k';
    	freopen("user.pk","r",stdin);
	    cin>>s;fclose(stdin);cin.clear();
		freopen(num,"r",stdin);
	    cin>>s1;fclose(stdin);cin.clear();
	    if(s==s1)f++;
	    else continue;
	    num[2]='e';num[3]='r';num[4]='\\';
		num[0]='u';num[1]='s';num[5]=i;
		num[6]='.';num[7]='p';num[8]='a';
	    freopen("password.pk","r",stdin);
	    cin>>s;fclose(stdin);cin.clear();
	    freopen(num,"r",stdin);
	    cin>>s1;fclose(stdin);cin.clear();
	    if(s==s1)f++;
	    else continue;
	    if(f==2){
		    freopen("res.pk","w",stdout);
	    	cout<<"pass!";cin.clear();
			return 0;
		}
	}
	freopen("res.pk","w",stdout);
	cout<<"fail!";
	return 0;
}