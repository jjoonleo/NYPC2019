#include <stdio.h>
int traficlight(int time, int light){
	return (light + time % 4) % 4; 
}
int main(){
	int N, M, k, r, c, h;
	int load[400][400]={0,};
	char s1[800];
	printf("첫줄\n");
	scanf("%d%d%d%d%d",&N,&M,&k,&r,&c);
	scanf("%*c", &h);
	
	for(int i = 0; i < N; i++){
		printf("입력\n");
		scanf("%[^\n]s",s1);
		scanf("%*c", &h);
		for(int j = 0; j < M * 2; j+=2){
			printf("i %d\tj %d\n",i,j);
			load[i][j/2] = traficlight(k,(int)s1[j] - 48);
			printf("(int)s1[%d] - 48  %d\n",j,(int)s1[j] - 48);
			printf("load[%d][%d]%d\n",i,j/2,load[i][j/2]);
		}
	}
	for(int i =0;i<N;i++){
		for(int j =0; j< M; j++){
			printf("%d\t", load[i][j]);
		}
		printf("\n");
	}
}
