#include <stdio.h>
int find(int min, int max, char arr[]){
	for(int i = 0; i< 15; i++){
		if((int)arr[i] >= min && (int)arr[i] <= max){
			return 0;
		}
	}
	return 1;
}

int main(){
	char arr[16];
	scanf("%s", &arr);
	
	
	
	if(arr[7] == 0 || arr[15] != 0){   // �� �� 
		printf("invalid\n");
	}
	else if(find(48, 57, arr) == 1){    // ����  
		printf("invalid\n");
	}
	else if(find(97, 122, arr) == 1){ // �ҹ���  
		printf("invalid\n");
	}
	else if(find(65, 90, arr) == 1){ // �빮��  
		printf("invalid\n");
	}
	else if(find(33, 47, arr) == 1 && find(58, 64, arr) == 1 && find(91, 96, arr) == 1 && find(123, 126, arr) == 1){  // Ư������  
		printf("invalid\n");
	}
	else {
		printf("valid\n");
	}
	
} 
