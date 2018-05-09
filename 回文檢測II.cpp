#include <iostream>
#include <math.h>
#include <ctype.h>
#include <string.h>


using namespace std;

int main(){
	char input[1001];
	int count[26];

	
	while(cin>>input){
		int check=0;
		for(int i=0;i<strlen(input);i++)
			input[i]=tolower(input[i]);
		
		for(int i=0;i<26;i++)
			count[i]=0;
				
		for(int i=0;i<strlen(input);i++)
			{
				int temp=input[i]-'a';
				count[temp]++;
			}

		for(int i=0;i<26;i++)
			{
				if(count[i]%2!=0&&count!=0)
					check=check+1;
			}	
		
		if(check>=2)
			cout<<"no..."<<endl;
		else
			cout<<"yes !"<<endl;		
				
		
	}
			
	return 0;

}
