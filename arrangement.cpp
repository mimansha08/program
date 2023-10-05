#include<bits/stdc++.h>
using namespace std;
int func(string s){
int N=s.length();
int boy=0,girl=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='B'){
      boy++;
    }
    else{
     girl++;
    }
}
  if((boy>(girl+1)) || (girl>(boy+1))){
  cout<<-1<<endl;
    return 0;
  }
  else{
    if(N%2==0){
    int num=(N+1)/2;
      int boy_even=0;
      int girl_even=0;
      for(int i=0;i<N;i++){
       if(i%2==0){
       if(s[i]=='B'){
         boy_even+=1;
       }
       else{
       	girl_even+=1;
	   }
       }
      }
      if(boy>girl){
      	cout<< num-boy_even;
      	
	  }
	  else{
	  	cout<<num-girl_even;
	  	
	  }
    }
    else{
    	int boy_odd=0;
    	int boy_even=0;
    	for(int i=0;i<N;i++){
    		if(s[i]=='B'){
    			if(i%2==0){
    				boy_odd++;
				}
				else{
					boy_even++;
				}
			}
		}
		return min(N/2-boy_odd,N/2-boy_even);
	}
    
  }
}
int main(){
  string s;
  cin>>s;
  int ans=func(s);
  cout<<ans;
  
  return 0;
}
