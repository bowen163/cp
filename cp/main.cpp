//
//  main.cpp
//  cp
//
//  Created by s20181102936 on 2019/6/19.
//  Copyright © 2019 s20181102936. All rights reserved.
//

//
//  main.cpp
//  caipan
//
//  Created by s20181102936 on 2019/6/19.
//  Copyright © 2019 s20181102936. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    struct stu{
        char num[4];
        char name[20];
        float a[8]={0};
        float s[10]={0};
    }st[10];
    int n,t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>st[k].num>>st[k].name;
        for (int i=0;i<7;i++)
        {
            cin>>st[k].a[i];
        }
        
        
        for (int i=0;i<7;i++)
        {
            for(int j=1;j<7;j++)
                if(st[k].a[j-1]>st[k].a[j]){
                    n=st[k].a[j-1];
                    st[k].a[j-1]=st[k].a[j];
                    st[k].a[j]=n;
                }
        }
        st[k].s[t]=0;
        for (int i=1;i<6;i++)
        {
            cout<<st[k].a[i]<<" ";
            st[k].s[t]+=st[k].a[i];
        }
        cout<<st[k].s[t]/5<<endl;
        
    }
    return 0;
}

