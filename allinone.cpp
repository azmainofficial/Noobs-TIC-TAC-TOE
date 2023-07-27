#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
using namespace std;

char BOX[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool current_player;
char currentSymbol; 
char random1='X';
char random2='O';
int  win1=0;
int  win2=0;


class TicTacToe 
{
    public:
    void Reset();
    void start_page();
    void instruction();
    void credit();
    void MainMenu();
    void inGame(int move);
    void winingTemplate();
    void single_play();
    void multi_play();
    void cpu();
    bool INPUT(char x);
    bool check_win();
    void cpu_move_template();
    void player_move_template();
    void cpu_winingTemplate();
    void player_winingTemplate();
    void DrawTemplate();

};

void TicTacToe :: start_page()
{                    
  cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||   _____ _ ___  _____  _  ___  _____ ___  ___    |||\n";
  cout<<"\t\t\t\t\t\t|||     |   ||       |   /_||       |  |   ||__     |||\n";
  cout<<"\t\t\t\t\t\t|||     |   ||___    |  /  ||___    |  |___||___    |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||       PRESS ANY KEY TO MOVE TO MAIN MENU        |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                    All copyrights reserved by   |||\n";
  cout<<"\t\t\t\t\t\t|||                         azmain sheikh rubayed   |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
  getch();
  system("CLS");
}

void TicTacToe :: MainMenu()
{
  cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||   INPUT THE NUMBER TO COMMAND FOLLOWING LIST    |||\n";
  cout<<"\t\t\t\t\t\t|||              _                  ___             |||\n";
  cout<<"\t\t\t\t\t\t|||        /|/| /_| //| /     /|/| /__ /| //  /     |||\n";
  cout<<"\t\t\t\t\t\t|||       /   |/  |// |/     /   |/__ / |//__/      |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||            (1) SINGLE PLAYER MOOD               |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||          (2) MULTIPLAYER PLAYER MOOD            |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                 (3) CREDIT                      |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||               (4)INSTRUCTIONS                   |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                    (5)EXIT                      |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||                                                 |||\n";
  cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
  cout<<"\t\t\t\t\t\t|||         Give your command to take action        |||\n";
  cout<<"\t\t\t\t\t\t         >>>";}

void TicTacToe :: cpu()
{
    bool cpu_move = 0;
    char cpu_pick;
    while(cpu_move!=1)
    {
        int Rand_pickTM = rand() % 10;
        if(Rand_pickTM>0 && Rand_pickTM<10)
        {
            Rand_pickTM = Rand_pickTM+48;
            cpu_pick = (char)Rand_pickTM;
            for(int i = 0 ; i < 3 ; i++ )
            {
                for (int j = 0 ; j < 3 ; j++)
                {
                    if(BOX[i][j]==cpu_pick)
                    {
                        BOX[i][j]=currentSymbol;
                        cpu_move=1;
                    }
                }
            }

            
        }
    }
}

bool TicTacToe :: check_win()
{
    for( int i = 0 ; i < 3 ; i++ )
    {
        if(BOX[0][i]==BOX[1][i] && BOX[2][i]==BOX[1][i])
        {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(BOX[i][0]==BOX[i][1] && BOX[i][2]==BOX[i][1])
        {
            return 1;
        }
    }
    if( BOX[0][0] == BOX[1][1] && BOX[2][2] == BOX[1][1] )
    {
        return 1;
    }
    if( BOX[0][2] == BOX[1][1] && BOX[2][0] == BOX[1][1] )
    {
        return 1;
    }

}

void TicTacToe :: single_play()
{
    int move = 0;
    bool END = 0;
    char input;
    while(move<9)
    {
        if(current_player  == 1 && END == 0 && move<9)
        {
            current_player = 1;
            currentSymbol  = random1;
            player_move_template();
            cin>>input;
            INPUT(input);
            win1=check_win();
            if(win1==1)
            {
                END=1;
            }
            else
            {
                current_player = 0;
                currentSymbol  = random2;
                move++;
            }
            system("CLS");
        }

        if(current_player  == 0 && END == 0 && move<9)
        {
            current_player = 0;
            currentSymbol  = random2;
            cpu_move_template();
            cpu();
            win2=check_win();
            if(win2==1)
            {
                END=1;
            }
            else
            {
                current_player = 1;
                currentSymbol  = random1;
                move++;
            }
            system("CLS");
        }
        if(END == 1)
        {
            if(win1==1)
            {
                player_winingTemplate();
                Reset();
                move=9;
            }
            else if(win2==1)
            {
                cpu_winingTemplate();
                Reset();
                move=9;
            }
        }
        if (END==0 && move==9)
        {
            DrawTemplate();
            Reset();
        }
    }
}

void TicTacToe :: multi_play()
{
    int move = 0;
    bool END = 0;
    bool valid = 0;
    char input;
    while(move<9)
    {
        if(current_player  == 0 && END == 0 && move<9 )
        {
            current_player = 0;
            currentSymbol  = random2;
            inGame(move);
            cin>>input;
            valid=INPUT(input);
            win1=check_win();
            if(win1==1)
            {
                END=1;
            }
            else
            {
                current_player = 1;
                currentSymbol  = random1;
                move++;
            }
            system("CLS");
        }

        if(current_player  == 1 && END == 0 && move<9 )
        {
            current_player = 1;
            currentSymbol  = random1;
            inGame(move);
            cin>>input;
            INPUT(input);
            win2=check_win();
            if(win2==1)
            {
                END=1;
            }
            else
            {
                current_player = 0;
                currentSymbol  = random2;
                move++;
            }
            system("CLS");
        }
        if(END == 1)
        {
            if(win1==1)
            {
                winingTemplate();
                Reset();
                move=9;
            }
            else if(win2==1)
            {
                winingTemplate();
                Reset();
                move=9;
            }
        }
        if (END==0 && move==9)
        {
            DrawTemplate();
            Reset();
        }
    }
}

void TicTacToe :: credit()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                     CREDIT                      |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||              AZMAIN SHEIKH RUBAYED              |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||        PRESS ENTER TO BACK TO MAIN MENU         |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS"); 
}

void TicTacToe :: instruction()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  INSTRUCTIONS                   |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||  Objective :                                    |||\n";
    cout<<"\t\t\t\t\t\t|||       The objective of Tic Tac Toe is to get    |||\n";
    cout<<"\t\t\t\t\t\t|||  three in a row.                                |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||  Rules :                                        |||\n";
    cout<<"\t\t\t\t\t\t|||       You play on a three by three game board.  |||\n";
    cout<<"\t\t\t\t\t\t|||  The first player is known as X and the second  |||\n";
    cout<<"\t\t\t\t\t\t|||  is O. Players alternate placing Xs and Os on   |||\n";
    cout<<"\t\t\t\t\t\t|||  the game board until either opponent has three |||\n";
    cout<<"\t\t\t\t\t\t|||  in a row or all nine squares are filled. X     |||\n";
    cout<<"\t\t\t\t\t\t|||  always goes first, and if no one has three in  |||\n";
    cout<<"\t\t\t\t\t\t|||  a row, the stalemate is called a cat game.     |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||        PRESS ENTER TO BACK TO MAIN MENU         |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS");

}

void TicTacToe :: inGame(int move)
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ******* ******* *******             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                Current Player ("<<current_player<<")               |||\n";
    cout<<"\t\t\t\t\t\t|||                Current Symbol ("<<currentSymbol<<")               |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||    INPUT :";
    
}

bool TicTacToe :: INPUT(char x)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(BOX[i][j]==x)
            {
                BOX[i][j]=currentSymbol;
                return 1;
            }
        }
    }
}

void TicTacToe :: winingTemplate()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||               CONGRATULATIONS!!!!               |||\n";
    cout<<"\t\t\t\t\t\t|||                     PLAYER "<<current_player<<"                    |||\n";
    cout<<"\t\t\t\t\t\t|||                   WIN THE GAME                  |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||       Press any key to return to main menu      |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS");
    
}

void TicTacToe :: Reset()
{
    char x = '1';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            BOX[i][j]=x;
            x++;
        }
    }
}

void TicTacToe :: cpu_move_template()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||       CPU IS MAKING HIS MOVE PLEASE WAIT!       |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    sleep(3);
    system("CLS");
    
}

void TicTacToe :: player_move_template()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||        MAKE YOUR MOVE YOUR SYMBOL IS ("<<currentSymbol<<")        |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||         INPUT :";
    
}

void TicTacToe :: cpu_winingTemplate()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                   OOPS PLAYER!                  |||\n";
    cout<<"\t\t\t\t\t\t|||                 CPU WIN THE GAME                |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||       Press any key to return to main menu      |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS");
    
}

void TicTacToe :: player_winingTemplate()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||              CONGRATULATIONS PLAYER!            |||\n";
    cout<<"\t\t\t\t\t\t|||                 YOU WIN THE GAME                |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||       Press any key to return to main menu      |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS");
    
}

void TicTacToe :: DrawTemplate()
{
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                  Tic Tac Toe                    |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||             _______ _______ _______             |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[0][0]<<"   |   "<<BOX[0][1]<<"   |   "<<BOX[0][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[1][0]<<"   |   "<<BOX[1][1]<<"   |   "<<BOX[1][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |_______|_______|_______|            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |   "<<BOX[2][0]<<"   |   "<<BOX[2][1]<<"   |   "<<BOX[2][2]<<"   |            |||\n";
    cout<<"\t\t\t\t\t\t|||            |       |       |       |            |||\n";
    cout<<"\t\t\t\t\t\t|||             ^^^^^^^ ^^^^^^^ ^^^^^^^             |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                   IT'S A DRAW!!!                |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||       Press any key to return to main menu      |||\n";
    cout<<"\t\t\t\t\t\t|||                                                 |||\n";
    cout<<"\t\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    getch();
    system("CLS");
    
}

int main()
{
    TicTacToe o1;
    int Push_command;
    bool exit = 0 ;
    o1.start_page();
    while (exit != 1)
    {
        o1.MainMenu();
        cin>>Push_command;
        system("CLS");
        switch (Push_command)
        {
        case 1:
            o1.single_play();
            break;
        case 2:
            o1.multi_play();
            break;
        case 3:
            o1.credit();
            break;
        case 4:
            o1.instruction();
            break;
        
        case 5:
            exit = 1;
            break;   
        
        default:
            system("CLS");
            cout<<"Wrong COmmand key pressed";
            break;
        }
        
    }
    
   
}


