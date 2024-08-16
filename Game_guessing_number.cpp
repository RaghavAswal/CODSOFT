#include<iostream>
using namespace std;
int main()
{
    int x, ans=30;
    while(x!=ans)
    {
        cout<<"Enter your number = ";
        cin>>x;
        if(x>=25 && x<=35)
        {
            if(x==ans)
            {
                break;
            }
            cout<<"YOU ARE VERY CLOSE TO THE ANSWER"<<endl;
            if(x>30)
            {
                cout<<"THE RIGHT NUMBER IS LOWER THAN THE NUMBER YOU ENTERD"<<endl;
            }
            else if(x<30)
            {
                cout<<"THE RIGHT NUMBER IS HIGHER THAN THE NUMBER YOU ENTERED"<<endl;
            }
        }
        else if(x<25 || x>35)
        {
            cout<<"YOU ARE FAR FROM THE ANSWER"<<endl;
            if(x>30)
            {
                cout<<"THE RIGHT NUMBER IS LOWER THAN THE NUMBER YOU ENTERED"<<endl;
            }
            else if(x<30)
            {
                cout<<"THE RIGHT NUMBER IS HIGHER THAN THE NUMBER YOU ENTERD"<<endl;
            }
        }
    }
    cout<<"YOU GUESSED THE RIGHT NUMBER"<<endl;
    cout<<"YOU WIN";
    return 0;
}