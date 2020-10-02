#include <stdio.h>

	int now =1; // 현재 건 물 
	int going =2 ; // 이동대상건물
	int time =5; // 이동회수 
	int  N =2 ; // 건물수 
	int umflag ; //우산필요여부  0: false 1 : true
	int buyCT =0  ;  // 우산 구매회수  
	
int main(){

	int bArr[10];  // 건물의 우산 개수  
	scanf("%d%d%d", &N, &time, &now);
	
	for(int i = 0; i < N; i++){
		//bArr[i].number = i+1;
		bArr[i] = 0;
	}
	
	for(int i = 0; i< time; i++){
		scanf("%d%d", &going, &umflag);
		if(umflag == 1){     // 우산필요  
			if(bArr[now-1] == 0){  //없으면  
				bArr[going-1] += 1;
				buyCT = buyCT+1;
			}
			else if(bArr[now-1] > 0){  // 있으면  
				bArr[now-1] -= 1;
				bArr[going - 1] += 1;
			}
		}
		now = going;
		//printf("buy%d", buy);
	}
	printf("%d", buyCT);
}
