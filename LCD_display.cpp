#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    char str[100];
    do
    {
        int i=0;
        cin>>str;
        int len=strlen(str);
        char arr[2*s+3][len*(s+2)];
        for(int i=0;i<(2*s+3) ;++i)
            for(int j=0;j<len*(s+2);++j)
                arr[i][j]=' ';
        while(str[i]!='\0')
        {
            int col=i*(s+2);
            switch(str[i])
            {
                case '0':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]=arr[j][col]=arr[j+s+1][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]='-';
                        }
                        break;
                case '1':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]='|';
                        }
                        break;
                case '2':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
                case '3':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
                case '4':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]=arr[j][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[s+1][col+j]='-';
                        }
                        break;
                case '5':for(int j=1;j<=s;j++)
                        {
                            arr[j+s+1][col+s+1]=arr[j][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
                case '6':for(int j=1;j<=s;j++)
                        {
                            arr[j+s+1][col+s+1]=arr[j][col]=arr[j+s+1][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
                case '7':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]='-';
                        }
                        break;
                case '8':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]=arr[j][col]=arr[j+s+1][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
                case '9':for(int j=1;j<=s;j++)
                        {
                            arr[j][col+s+1]=arr[j+s+1][col+s+1]=arr[j][col]='|';
                        }
                        for(int j=1;j<=s;j++)
                        {
                            arr[0][col+j]=arr[2*s+2][col+j]=arr[s+1][col+j]='-';
                        }
                        break;
            }
            i++;
        }
        for(int i=0;i<(2*s+3) ;++i)
        {
            for(int j=0;j<len*(s+2);++j)
                cout<<arr[i][j];
            cout<<endl;
        }
        cin>>s;
    }while(s!=0);
    return 0;
}
