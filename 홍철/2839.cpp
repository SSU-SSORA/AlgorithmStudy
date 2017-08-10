/*
 * 2839.cpp
 *
 *  Created on: 2017. 8. 9.
 *      Author: chal405
 */
#include <iostream>
#include <algorithm>
#define MAX 5000;
using namespace std;

int main(){
	int N;
	int fk,tk;
	int total=MAX;
	int cnt=0;
	cin>>N;

	for(int i=0; i<=(N/5);i++){
		if((N-5*i)%3==0){
			cnt++;
			fk=i;
			tk=(N-5*i)/3;

			if(total>fk+tk){
				total=fk+tk;
				//cout<<fk<<" "<<tk<<" "<<total<<endl;
			}

		}
	}

	switch(cnt){
	case 0:
		cout<<"-1";
		break;
	default:
		cout<<total;
	}

	cin.get();
	cin.get();

}



