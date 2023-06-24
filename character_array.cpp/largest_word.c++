#include<iostream>
#include<climits>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int curlen=0,maxlen=0,i=0;
    int maxst=0,st=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curlen>maxlen)
            {
                maxlen=curlen;
                maxst=st;
            }
            curlen=0;
            st=i+1;
        }
        else
        curlen++;
        if(arr[i]=='\0')
            break;

        i++;
    }
    cout<<"Maximum length="<<maxlen;
    for(i=0;i<maxlen;i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}