#include<iostream>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int r=0,c=0;
bool draw=false;
char board_2[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn_2 = 'X';
bool dra=false;
void display_board()
{
    system("cls");
    cout<<"\n";
    cout<<"                                      TIC-TAC-TOE-GAME                                      ";
    cout<<"\n";
    cout<<"        Player 1 = [X]          \n"<<endl;
    cout<<"        Player 2 = [O]          \n"<<endl;
    cout<<"\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board[0][0]<<"   |   "<<board[0][1]<<"   |   "<<board[0][2]<<"  \n";
    cout<<"                                   _______|_______|_______\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<"   \n";
    cout<<"                                   _______|_______|_______\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<"   \n";
    cout<<"                                          |       |       \n";
}
void player_turn()
{
    int num;
    if(turn =='X')
    {
        cout<<"\n      Player 1 [X]  turn : ";
    }
    if(turn=='O')
    {
        cout<<"\n      Player 2 [O]  turn : ";
    }
    cin>>num;
    switch(num)
    {
        
        case 1:
            r=0;
            c=0;
            break;
        case 2:
            r=0;
            c=1;
            break;
        case 3:
            r=0;
            c=2;
            break;
        case 4:
            r=1;
            c=0;
            break;
        case 5:
            r=1;
            c=1;
            break;
        case 6:
            r=1;
            c=2;
            break;
        case 7:
            r=2;
            c=0;
            break;
        case 8:
            r=2;
            c=1;
            break;
        case 9:
            r=2;
            c=2;
            break;
        default:
            cout<<"Invalid Option";
            break;
    }
    if(turn == 'X' && board[r][c]!='X' && board[r][c]!='O')
    {
        board[r][c]='X';
        turn='O';
    }
    else if(turn == 'O' && board[r][c]!='X' && board[r][c]!='O')
    {
        board[r][c]='O';
        turn='X';
    }
    else
    {
        cout<<"BOX IS ALREADY FILLED!!!!!!!!\nTry Again";
        player_turn();
    }
    display_board();
}
bool over()
{
    for(int i=0; i<3; i++)
    {
        if(board[i][0]==board[i][1]&& board[i][0]==board[i][2])
        {
            return false;
        }
    }
    for(int i=0; i<3; i++)
    {
        if(board[0][i]==board[1][i]&& board[0][i]==board[2][i])
        {
            return false;
        }
    }
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
    {
        return false;
    }
    if(board[0][2]==board[1][1] && board[0][2]==board[2][0])
    {
        return false;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board[i][j]!='X' && board[i][j]!='O')
            {
                return true;
            }
        }
    }
    draw=true;
    return false;
}
void display_board_2()
{
    system("cls");
    cout<<"\n";
    cout<<"                                      TIC-TAC-TOE-GAME                                      ";
    cout<<"\n";
    cout<<"        Player 1 = [X]          \n"<<endl;
    cout<<"        Player 2 = [O]          \n"<<endl;
    cout<<"\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board_2[0][0]<<"   |   "<<board_2[0][1]<<"   |   "<<board_2[0][2]<<"  \n";
    cout<<"                                   _______|_______|_______\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board_2[1][0]<<"   |   "<<board_2[1][1]<<"   |   "<<board_2[1][2]<<"   \n";
    cout<<"                                   _______|_______|_______\n";
    cout<<"                                          |       |       \n";
    cout<<"                                      "<<board_2[2][0]<<"   |   "<<board_2[2][1]<<"   |   "<<board_2[2][2]<<"   \n";
    cout<<"                                          |       |       \n";
}
void player_turn_2()
{
    int num_2;
    if(turn_2 =='X')
    {
        cout<<"\n      Player 1 [X]  turn : ";
    }
    if(turn_2=='O')
    {
        cout<<"\n      Player 2 [O]  turn : ";
    }
    cin>>num_2;
    switch(num_2)
    {
        
        case 1:
            r=0;
            c=0;
            break;
        case 2:
            r=0;
            c=1;
            break;
        case 3:
            r=0;
            c=2;
            break;
        case 4:
            r=1;
            c=0;
            break;
        case 5:
            r=1;
            c=1;
            break;
        case 6:
            r=1;
            c=2;
            break;
        case 7:
            r=2;
            c=0;
            break;
        case 8:
            r=2;
            c=1;
            break;
        case 9:
            r=2;
            c=2;
            break;
        default:
            cout<<"Invalid Option";
            break;
    }
    if(turn_2 == 'X' && board_2[r][c]!='X' && board_2[r][c]!='O')
    {
        board_2[r][c]='X';
        turn_2='O';
    }
    else if(turn_2 == 'O' && board_2[r][c]!='X' && board_2[r][c]!='O')
    {
        board_2[r][c]='O';
        turn_2='X';
    }
    else
    {
        cout<<"BOX IS ALREADY FILLED!!!!!!!!\nTry Again";
        player_turn_2();
    }
    display_board_2();
}
bool over_2()
{
    for(int i=0; i<3; i++)
    {
        if(board_2[i][0]==board_2[i][1]&& board_2[i][0]==board_2[i][2])
        {
            return false;
        }
    }
    for(int i=0; i<3; i++)
    {
        if(board_2[0][i]==board_2[1][i]&& board_2[0][i]==board_2[2][i])
        {
            return false;
        }
    }
    if(board_2[0][0]==board_2[1][1] && board_2[0][0]==board_2[2][2])
    {
        return false;
    }
    if(board_2[0][2]==board_2[1][1] && board_2[0][2]==board_2[2][0])
    {
        return false;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(board_2[i][j]!='X' && board_2[i][j]!='O')
            {
                return true;
            }
        }
    }
    dra=true;
    return false;
}
int main()
{
    while(over())
    {
        display_board();
        player_turn();
        over();
    }
    if(turn=='X' && draw==false)
    {
        cout<<"\n                                      Player 2 [O] win                                      \n                                      CONGRATULATION !!!!!!\n\n";
    }
    else if(turn=='O' && draw==false)
    {
        cout<<"\n                                      Player 1 [X] win                                      \n                                      CONGRATULATION !!!!!!\n\n";
    }
    else
    {
        cout<<"\n                                      GAME IS DRAW                                      \n\n";
    }
    char con;
    cout<<"ENTER 'C' IF YOU WANT TO COMPETE WITH YOUR OPPONENT AGAIN, otherwise enter any character to quit = ";
    cin>>con;
    if(con=='C')
    {
        while(over_2())
        {
        display_board_2();
        player_turn_2();
        over_2();
        }
        if(turn_2=='X' && dra==false)
        {
        cout<<"\n                                      Player 2 [O] win                                      \n                                      CONGRATULATION !!!!!!\n\n";
        }
        else if(turn_2=='O' && dra==false)
        {
        cout<<"\n                                      Player 1 [X] win                                      \n                                      CONGRATULATION !!!!!!\n\n";
        }
        else
        {
        cout<<"\n                                      GAME IS DRAW                                      \n\n";
        }
    }
    return 0;
}