#include <stdio.h>

	int now =1; // ���� �� �� 
	int going =2 ; // �̵����ǹ�
	int time =5; // �̵�ȸ�� 
	int  N =2 ; // �ǹ��� 
	int umflag ; //����ʿ俩��  0: false 1 : true
	int buyCT =0  ;  // ��� ����ȸ��  
	
int main(){

	int bArr[10];  // �ǹ��� ��� ����  
	scanf("%d%d%d", &N, &time, &now);
	
	for(int i = 0; i < N; i++){
		//bArr[i].number = i+1;
		bArr[i] = 0;
	}
	
	for(int i = 0; i< time; i++){
		scanf("%d%d", &going, &umflag);
		if(umflag == 1){     // ����ʿ�  
			if(bArr[now-1] == 0){  //������  
				bArr[going-1] += 1;
				buyCT = buyCT+1;
			}
			else if(bArr[now-1] > 0){  // ������  
				bArr[now-1] -= 1;
				bArr[going - 1] += 1;
			}
		}
		now = going;
		//printf("buy%d", buy);
	}
	printf("%d", buyCT);
}
