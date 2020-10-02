#include<stdio.h>

int main(){
	int n, k;
	int num = 1;
	int first = 0, second, third, fourth = 0;
	int arr[100][100];
	scanf("%d%d", &n, &k);
	second = n-1;
	third = n-1;
	fflush(stdin);
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			//printf("%d\t", arr[j][i]);
		}
		//printf("\n");
	}
	
	for(int i = 0; i < n/2 + 1; i++){
		//printf("루프 들어옴%d\n", num);
	
		for(int f = 0; f < n; f++){
			//printf("first\n");
			if(arr[f][first] == 0){
				arr[f][first] = num;
				num++;
				//printf("first숫자%d, %d\n", f, first);
			}			
		}
		first++;
		
		for(int s = 0; s < n; s++){
			//printf("second\n");
			if(arr[second][s]==0){
				arr[second][s] = num;
				num++;
				//printf("second숫자%d, %d\n", second, s);
			}
		}
		second--;
		
		for(int t = n -1; t >= 0; t-- ){
			//printf("third\n");
			if(arr[t][third] == 0){
				arr[t][third] = num;
				num++;
				//printf("third숫자%d, %d\n", t, third);
			}
		}
		third--;
		
		for(int f = n - 1; f >= 0; f-- ){
			//printf("fourth%d\n",num);
			if(arr[fourth][f] == 0){
				arr[fourth][f] = num;
				num++;
				//printf("fourth숫자%d, %d\n", fourth, f);
			}
		}
		fourth++;
	}

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			//printf("%d\t", arr[j][i]);
		}
		//printf("\n");
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			if(arr[i][j] == k){
				n = i;
				k = j;
				break;
			}
		}
	}
	printf("%d %d", n + 1, k + 1);
}
