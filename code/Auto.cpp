#include<bits/stdc++.h>
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
using namespace std;
int top;string n;
int main(){
	freopen("AutoUserTop.pk","r",stdin);
	cin>>top;fclose(stdin);cin.clear();top++;
	freopen("AutoUserTop.pk","w",stdout);
	cout<<top;fclose(stdout);cin.clear();
	if(top%2==0){
		freopen("AutoUserStatus.pk","w",stdout);
		cout<<0;fclose(stdout);cin.clear();
		freopen("Autouser.pk","w",stdout);
		cout<<"Please input your name";fclose(stdout);cin.clear();
		freopen("Autoword.pk","w",stdout);
		cout<<"Please input your password";fclose(stdout);cin.clear();
	}
	if(top%2==1){
		freopen("AutoUserStatus.pk","w",stdout);
		cout<<1;fclose(stdout);cin.clear();
	}
		
	return 0;
}