#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Player 1: X\n";
    cout<<"Player 2: O\n";
    cout<<"Instructions : You have to give a number (i.e) position where the X or O to be placed.\n"; 
    char name[3][3]={'1','2','3','4','5','6','7','8','9'};
    cout<<"To Start the Game. Enter Start: ";
    string st;
    getline(cin,st);
    int y=0,z=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<name[i][j]<<"| ";
        }
        cout<<"\n";
    }
    while(st=="Start" || st=="START" || st=="start")
    {
        for(int i=0;i<9;)
        {
            cout<<"Player 1: ";
            char no_1;
            cin>>no_1;
            i++;
            if(name[0][0] == no_1)
            {
                name[0][0]='X';
            }
            else if(name[0][1] == no_1)
            {
                name[0][1]='X';
            }
            else if(name[0][2] == no_1)
            {
                name[0][2]='X';
            }
            else if(name[1][0] == no_1)
            {
                name[1][0]='X';
            }
            else if(name[1][1] == no_1)
            {
                name[1][1]='X';
            }
            else if(name[1][2] == no_1)
            {
                name[1][2]='X';
            }
            else if(name[2][0] == no_1)
            {
                name[2][0]='X';
            }
            else if(name[2][1] == no_1)
            {
                name[2][1]='X';
            }
            else if(name[2][2] == no_1)
            {
                name[2][2]='X';
            }
            for(int k=0;k<3;k++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<name[k][j]<<"| ";
                }
                cout<<"\n";
            }
            if(name[0][0]==name[0][1] && name[0][1]==name[0][2])
            {
                if(name[0][0]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[0][0]==name[1][1] && name[1][1]==name[2][2])
            {
                if(name[0][0]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[0][0]==name[1][0] && name[1][0]==name[2][0])
            {
                if(name[0][0]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[0][2]==name[1][1] && name[1][1]==name[2][0])
            {
                if(name[0][2]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[0][1]==name[1][1] && name[1][1]==name[2][1])
            {
                if(name[0][1]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[0][2]==name[1][2] && name[1][2]==name[2][2])
            {
                if(name[0][2]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[1][0]==name[1][1] && name[1][1]==name[1][2])
            {
                if(name[0][1]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            else if(name[2][0]==name[2][1] && name[2][1]==name[2][2])
            {
                if(name[2][0]=='X')
                {
                    cout<<"Player 1 Wins..!!\n";
                    y++;
                    break;
                }
            }
            if(i==9)
            {
                break;
            }
            cout<<"Player 2: ";
            char no_2;
            cin>>no_2;
            i++;
            if(name[0][0] == no_2)
            {
                name[0][0]='O';
            }
            else if(name[0][1] == no_2)
            {
                name[0][1]='O';
            }
            else if(name[0][2] == no_2)
            {
                name[0][2]='O';
            }
            else if(name[1][0] == no_2)
            {
                name[1][0]='O';
            }
            else if(name[1][1] == no_2)
            {
                name[1][1]='O';
            }
            else if(name[1][2] == no_2)
            {
                name[1][2]='O';
            }
            else if(name[2][0] == no_2)
            {
                name[2][0]='O';
            }
            else if(name[2][1] == no_2)
            {
                name[2][1]='O';
            }
            else if(name[2][2] == no_2)
            {
                name[2][2]='O';
            }
            for(int m=0;m<3;m++)
            {
                for(int h=0;h<3;h++)
                {
                    cout<<name[m][h]<<"| ";
                }
                cout<<"\n";
            }
            if(name[0][0]==name[0][1] && name[0][1]==name[0][2])
            {
                if(name[0][0]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[0][0]==name[1][1] && name[1][1]==name[2][2])
            {
                if(name[0][0]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[0][0]==name[1][0] && name[1][0]==name[2][0])
            {
                if(name[0][0]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[0][2]==name[1][1] && name[1][1]==name[2][0])
            {
                if(name[0][2]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[0][1]==name[1][1] && name[1][1]==name[2][1])
            {
                if(name[0][1]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[0][2]==name[1][2] && name[1][2]==name[2][2])
            {
                if(name[0][2]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[1][0]==name[1][1] && name[1][1]==name[1][2])
            {
                if(name[0][1]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
            else if(name[2][0]==name[2][1] && name[2][1]==name[2][2])
            {
                if(name[2][0]=='O')
                {
                    cout<<"Player 2 Wins..!!\n";
                    z++;
                    break;
                }
            }
        }
        if(y==0 && z==0)
        {
            cout<<"Match Drawn.\n";
        }

        cout<<"Enter Start to Restart the Game: ";
        cin>>st;
    }
}