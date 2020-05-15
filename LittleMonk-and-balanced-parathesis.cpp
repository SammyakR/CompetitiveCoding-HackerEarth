#include<iostraem>
#include<vector>

int main(){
	int n, count=0,temp_cnt=0,var,ptr;
	std::vector<int> st;
	scanf("%d",&n);
	int a[n+1];
	st.push_back(0);
	a[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&var);
		if(st.back()>0 && var<0 && var+st.back()==0){
			a[i]=0;
			ptr=i;
			while(a[ptr]==0 && ptr>0){
				ptr--;
			}
			a[ptr]=0;
			st.pop_back();

		}
		else{
			st.push_back(var);
			a[i]=var;
		}

	}
	for(int i=1;i<=n;i++){
		if(a[i]==0){temp_cnt++;}
		else{
			 if(count<temp_cnt)
			 {count=temp_cnt;}
			 temp_cnt=0;
		}
	}
	if(count<temp_cnt){count=temp_cnt;}

	printf("%d",count);

}
