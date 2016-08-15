#include<bits/stdc++.h>
using namespace std;

char board[10]={'0','1','2','3','4','5','6','7','8','9'};

int status_check(){
	if(board[1]==board[2]&&board[2]==board[3])
		return 1;
	else if(board[4]==board[5]&&board[5]==board[6])
		return 1;
	else if(board[7]==board[8]&&board[8]==board[9])
		return 1;
	else if(board[1]==board[5]&&board[5]==board[9])
		return 1;
	else if(board[3]==board[5]&&board[5]==board[7])
		return 1;
	else if(board[1]==board[4]&&board[4]==board[7])
		return 1;
	else if(board[2]==board[5]&&board[5]==board[8])
		return 1;
	else if(board[3]==board[6]&&board[6]==board[9])
		return 1;	
	else if(board[1]!='1'&&board[2]!='2'&&board[3]!='3'&&board[4]!='4'&&board[5]!='5'&&board[6]!='6'&&board[7]!='7'&&board[8]!='8'&&board[9]!='9')
		return 0;
	else return -1;
}

void draw_board(){
	system("cls");
	cout<<"\n\n\t\t\t\tTIC TAC TOE\n\n"<<endl;
	cout<<"\t\t\tPlayer 1 :: X vs Player 2 :: O\n\n"<<endl;
	
	cout<<"\t\t\t\t   |   |   "<<endl;
	cout<<"\t\t\t\t "<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<endl;
	cout<<"\t\t\t\t___|___|___"<< endl;
	cout<<"\t\t\t\t   |   |   "<< endl;
	cout<<"\t\t\t\t "<<board[4]<<" | "<<board[5]<<" | "<<board[6]<<endl;
	cout<<"\t\t\t\t___|___|___"<< endl;
	cout<<"\t\t\t\t   |   |   "<< endl;
	cout<<"\t\t\t\t "<<board[7]<<" | "<<board[8]<<" | "<<board[9]<<endl;
	cout<<"\t\t\t\t   |   |   "<<endl<<endl;
}

int main(){
	int curr_player=1;
	int st,val;
	char ch;
	draw_board();
	do{
		draw_board();
		if(curr_player%2==0)
			curr_player=2;
		else curr_player=1;
		cout<<"PLAYER "<<curr_player<<"'s turn: (Enter your choice)  ";
		cin>>val;
		if(curr_player==1)
			ch='X';
		else ch='O';
		if(val==1&&board[1]=='1')
			board[1]=ch;
		else if(val==2&&board[2]=='2')
			board[2]=ch;
		else if(val==3&&board[3]=='3')
			board[3]=ch;
		else if(val==4&&board[4]=='4')
			board[4]=ch;
		else if(val==5&&board[5]=='5')
			board[5]=ch;
		else if(val==6&&board[6]=='6')
			board[6]=ch;
		else if(val==7&&board[7]=='7')
			board[7]=ch;
		else if(val==8&&board[8]=='8')
			board[8]=ch;
		else if(val==9&&board[9]=='9')
			board[9]=ch;
		else{
			cout<<"Invalid Move. Please play again.\n";
			curr_player--;
		}
		st=status_check();
		curr_player++;
	}while(st==-1);
	draw_board();
	if(st==1)
		cout<<"\t\tCONGRATULATIONS Player "<<--curr_player<<" You Won :) \n";
	else cout<<"\t\tGAME DRAW:( \n";
	return 0;
}
