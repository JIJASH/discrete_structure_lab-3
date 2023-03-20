#include<iostream>
using namespace std;
int main(){
	int p[8]={1,1,1,1,0,0,0,0},
	q[8]={1,1,0,0,1,1,0,0},
	r[8]={1,0,1,0,1,0,1,0},
	m[8],n[8],a[8];
	for(int i=0;i<8;i++){
		m[i]=(p[i]&(!q[i]|r[i]));
	}
	for(int i=0;i<8;i++){
		n[i]=(!p[i]|r[i]);
	}
	for(int i=0;i<8;i++){
		if((m[i]==1&&n[i]==1)||(m[i]==0&&n[i]==0)){
			a[i]=1;
		}
		else{
			
			a[i]=0;
		}
	}
	cout<<"The required truth table for the given compound preposition is as given below : "<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"|p  |"<<"\t"<<"q  |"<<"\t"<<"r  |"<<"\t"<<"(P&!q|r)"<<"|"<<"(!p|r)"<<"  |"<<"(P&!q|r)<->(!p|r)|"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	for(int i=0;i<8;i++){
		cout<<"|"<<p[i]<<"  |"<<"\t"<<q[i]<<"  |"<<"\t"<<r[i]<<"  |"<<"\t"<<" "<<m[i]<<"\t|"<<" "<<n[i]<<"\t"<<" |"<<"\t"<<a[i]<<"\t"<<"   |"<<endl;
	}
		cout<<"------------------------------------------------------------";
	return 0;
}
