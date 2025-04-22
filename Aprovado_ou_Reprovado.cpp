#include <bits/stdc++.h>
using namespace std;

int main(){
	double p1,p2,m;
	cin >> p1 >> p2;
	m = (p1 + p2) / 2;

	if(m >= 7){
		cout << "Aprovado" << endl;
	}else if(m >= 4){
		cout << "Recuperacao" << endl;
	}else{
		cout << "Reprovado" << endl;
	}
}
