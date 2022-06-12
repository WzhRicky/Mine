#include<bits/stdc++.h>
using namespace std;
string s,s1;char top='a';char num[15];
int ckec(int i){
	int f=0;
	while(i>0){
		i=i/10;
		f++;
	}
	return f;
}
int main(){
	system("md user");
	freopen("luser.pk","r",stdin);
	getline(cin,s);fclose(stdin);cin.clear();
	freopen("lpassword.pk","r",stdin);
	getline(cin,s1);fclose(stdin);cin.clear();
	freopen("user\\top.pk","r",stdin);
	cin>>top;fclose(stdin);cin.clear();
	if(top=='\0')top=1;
	num[2]='e';num[3]='r';num[4]='\\';
	num[0]='u';num[1]='s';num[5]=top;
	num[6]='.';num[7]='p';num[8]='k';
	freopen(num,"w",stdout);
	cout<<s;fclose(stdout);cin.clear();
	num[2]='e';num[3]='r';num[4]='\\';
	num[0]='u';num[1]='s';num[5]=top;
	num[6]='.';num[7]='p';num[8]='a';
	freopen(num,"w",stdout);
	cout<<s1;fclose(stdout);cin.clear();
	top++;
	freopen("user\\top.pk","w",stdout);
	cout<<top;fclose(stdout);cin.clear();
	return 0;
}