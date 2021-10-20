#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int ind=0,eng=0,draw=0;
	    vector<int>v;
	    for(int i=0; i<5; i++)
	    {
	        int p;
	        cin>>p;
	        v.push_back(p);
	    }
	    for(int i=0; i<v.size(); i++)
	    {
	        if(v[i]==1)
	        {
	            ind=ind+1;
	        }
	        else if(v[i]==2)
	        {
	            eng=eng+1;
	        }
	        else
	        {
	            draw=draw+1;
	        }
	    }
	    if(ind>eng)
	    {
	        cout<<"INDIA"<<endl;
	    }
	    else if(eng>ind)
	    {
	        cout<<"ENGLAND"<<endl;
	    }
	    else 
	    {
	        cout<<"DRAW"<<endl;
	    }
	}

}
