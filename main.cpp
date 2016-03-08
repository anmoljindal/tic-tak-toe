#include <iostream>
using namespace std;
int main()
{
    char board[3][3],mark;
    int xcount=0,ocount=0,x,y;
    bool flag;
    int turns=9,player;
    while(turns)
    {
        turns--;
        player=turns%2;
        mark=(player==1)?'x':'o';
        cout<<"Enter the coordinates to place "<<mark<<" :";
        cin>>x>>y;
        flag=(board[x][y]!='x'&&board[x][y]!='o');
        if(flag)
           board[x][y]=mark;
        else
           turns++;

    }
    for(int j=0;j<3;j++)
    {
        if(board[i][0]==board[i][1]&&board[i][0]==board[i][2])
           (board[i][0]=='x')?xcount++:ocount++;
        if(board[0][j]==board[1][j]&&board[0][j]==board[2][j])
           (board[0][j]=='x')?xcount++:ocount++;
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])
      (board[0][0]=='x')?xcount++:ocount++;
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
      (board[0][2]=='x')?xcount++:ocount++;
    if(xcount>ocount)
      cout<<"player 1 is the winner";
    if else(ocount<xcount)
      cout<<"player 2 is the winner";
    else
      cout<<"it's a tie";
    return 0;
}
