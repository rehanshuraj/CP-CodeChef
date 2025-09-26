#include <iostream>
using namespace std;

int main() {
	// your code goes here  
	   int T;
	   cin>>T;
	   while(T--)
	   {
	      int N;
	      cin>>N;
	      int n=N/2+1;
	      int m=N/2;
	      for(int i=0;i<N;i+=2)
	      {
	          cout<<n<<" ";  
	          if(i+1<N)
	          {
	             cout<<m<<" ";  
	          }
	          n+=1;
	          m-=1;
	      }
	      cout<<endl;
	   }
	return 0;
}