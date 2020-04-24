#include<iostream>


using namespace std;


int main()
{
    string s = "010";

    char arr[3],temp_array[3];
    int i=0;

    while(s[i])
    {
        arr[i] = s[i];
        i++;
    }
    
    arr[i] = '\0';
    for(int i=0;arr[i]!='\0';i++)
    {
        cout<<arr[i]<<endl;
        temp_array[i] = arr[i];
    }




    int m = sizeof(arr)/sizeof(arr[0]);
    cout<<"ACTUAL"<<endl;



    for(int i=0;i<m;i++)
    {
        // arr


        for(int j=i;j<m;j++)
        {
            if(arr[j] == '0')
            {
                arr[j] = '1';
            }else if(arr[j] == '1'){
                arr[j] = '0';
            }

            for(int k=0;k<m;k++)
            {
                cout<<arr[k];
            }
            cout<<endl;
        }

        for(int i=0;i<m;i++)
        {
            arr[i] = temp_array[i];
        }


        cout<<endl;


    }



    return 0;
}