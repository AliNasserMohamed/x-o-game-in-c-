#include <iostream>
#include <windows.h>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';
void print(){system ("cls");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){ cout<<matrix[i][j]<<"  ";}
		cout<<endl;}
}
void play(){ char pos;
cout<<"enter the position of player "<<player;
cin>>pos;
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		if (matrix[i][j]==pos){
			matrix[i][j]=player;}}}
	if (player=='x')
		player='o';
	else player='x';}
char whowin(){int xco=0,oco=0,counter=0;
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){if (matrix[i][j]!='x'&&matrix[i][j]!='o')counter++;
		if (matrix[i][j]=='x') xco++;
	else if (matrix[i][j]=='o') oco++;
	if (xco==3||oco==3){ return xco>oco?'x':'o';}
	}xco=0;oco=0;}
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){if (matrix[j][i]=='x') xco++;
	else if (matrix[j][i]=='o') oco++;
	if (xco==3||oco==3){ return xco>oco?'x':'o';}
}xco=0;oco=0;
}
if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')return 'x';
if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')return 'o';
if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')return 'x';
if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o')return 'o';
if(counter==0)return 'z';
	return '.';}
int  main(){
	while (whowin()=='.'){
	print();
	play();
	}
	if(whowin()=='z'){
	cout<<"there is no winner";
	}else {cout<<"the winner is player("<<whowin() <<")";}
	system ("pause");
	return 0;
}