#include <stdio.h>
#include <stdlib.h>

void Merge(int *P,int *job,int *DL, int left,int mid, int right){
	int n1, n2,i,j, k;
	float *P_L, *P_R, *job_L, *job_R, *DL_L, *DL_R;
	n1=mid-left +1;
	n2= right-mid;
	// dynamic space allocation
	//for profit
	P_L= (float *)malloc(n1*sizeof(float));
	P_R= (float *)malloc(n2*sizeof(float));
	//for job number
	job_L=(float *)malloc(n2*sizeof(float));
	job_R=(float *)malloc(n2*sizeof(float));
	//for dead line
	DL_L=(float *)malloc(n2*sizeof(float));
	DL_R=(float *)malloc(n2*sizeof(float));
	for (i=0;i<n1;i++){
		P_L[i]=P[left+i];
		job_L[i]=job[left+i];
		DL_L[i]=DL[left+i];
		//printf("L[i] %d\n",L[i]);
	}
	
	for (j=0;j<n2;j++){
		P_R[j]=P[mid+1+j];
		job_R[j]=job[mid+1+j];
		DL_R[j]=DL[mid+1+j];
		//printf("R[j] %d\n",R[j]);
	}
	i=0,j=0,k=left;
	while(i<n1 && j<n2){
		if (P_L[i]<=P_R[j]){
			P[k]=P_L[i];
			job[k]=job_L[i];
			DL[k]=DL_L[i];
			k++;
			i++;
		}
		else {
			P[k]=P_R[j];
			job[k]=job_R[j];
			DL[k]=DL_R[j];
			k++;
			j++;
		}
	}
	while (i<n1){
		P[k]=P_L[i];
		job[k]=job_L[i];
		DL[k]=DL_L[i];
		k++;
		i++;
	}
	while (j<n2){
		P[k]=P_R[j];
		job[k]=job_R[j];
		DL[k]=DL_R[j];
		k++;
		j++;
	}
	//printf("done\n");
}

void MergeSort(int *P,int *job,int *DL,int left,int right){
	if (left<right){
		int mid=(right+left)/2;
		//printf("%d\n",mid);
		MergeSort(P,job,DL,left,mid);
		//printf("out 1 \n");
		MergeSort(P,job,DL,mid+1,right);
		//printf("out 2 \n");
		Merge(P,job,DL,left,mid,right);
		//printf("in\n");
	}
}

int max_profit_job(int *job,int *DL,int *P,int *position,int n,int max_time){
	int i,total=0,j,temp; 
	MergeSort(P,job,DL,0,n-1); //sort P and arrange job and DeadLine
	
	for(i=0;i<n;i++){
		printf("J%d - DL %d P %d\n",job[i],DL[i],P[i]);
	}
	
	i=n-1;
	while(i>=0 && max_time>0){ //until max_time gets exhausted
		temp=DL[i]-1; //max position where job can be entered, -1 to get index
		
		while(temp>=0){ //check empty place before i to enter job
			if(position[temp]==-1) { 
				//printf("in\n");
				position[temp]=job[i];
				printf("%d %d \n",position[temp],temp);
				total+=P[i];
				max_time--;
				break;
			}
			temp--;
	    }
	    i--;
	}
	
	return total;
}

int main(){
	int *deadline, *profit, *job,*position, i, size, result,max_time=-1,temp1;
	printf("Enter number of jobs:");
	scanf("%d",&size);
	
	deadline=(int *)malloc(sizeof(int)*size);
	profit=(int *)malloc(sizeof(int)*size);
	job=(int *)malloc(sizeof(int)*size);
	
	printf("Enter data: Profit and Deadline:\n");
	for(i=0;i<size;i++){
		printf("J%d:",i+1);
		scanf("%d %d",profit+i,deadline+i);
		if (deadline[i]>max_time) max_time=deadline[i];
		job[i]=i+1;
	}
	
	printf("Enter total deadline to complete job:    --- to skip enter -1: ");
	scanf("%d",&temp1);
	if (temp1!=-1) max_time=temp1;
	
	printf("Calculated total deadline:%d\n",max_time);
	position=(int *)malloc(sizeof(int)*max_time);
	
	for(i=0;i<max_time;i++){
		position[i]=-1; //initializing position to -1
	}
	
	result=max_profit_job(job,deadline,profit,position,size,max_time);
	printf("Job sequence:\n");
	for(i=0;i<max_time;i++){
		if (position[i]==-1) printf("Deadline %d - Nil\n",i+1);
		else printf("Deadline %d - J%d\n",i+1,position[i]);
	}
	printf("Total profit acquired:%d",result);
	return 1;
}
