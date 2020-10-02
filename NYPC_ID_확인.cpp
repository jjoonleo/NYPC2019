#include <stdio.h>
#include <string.h>

int find(int min, int max, char arr[]){
	for(int i = 0; i< 15; i++){
		if((int)arr[i] >= min && (int)arr[i] <= max){
			return 0;
		}
	}
	return 1;
}

int main(){
	int time, boundary = 0, gol;
	int yesno[101] = {0,};
	char s1[101];
	scanf("%d", &time);
	for (int i = 0; i < time; i++){
		scanf("%s", s1);
		
		for(int j = 0; j < strlen(s1); j++){
			if((int)s1[j] == 64){
				boundary+=1;
				gol = j;
			}	
			//printf("boundary%d\n",boundary);
		}
		
		if(gol == 0 || gol == strlen(s1) - 1|| boundary > 1 || boundary == 0){
			yesno[i] = 1;
		}
		else if (find(33, 44, s1) == 0||find (58, 63, s1) == 0||find(91, 96, s1)==0||find(123, 126, s1)==0||find(447,47,s1)==0){
			yesno[i] = 1;
		}
		else if(strlen(s1) > 100 || strlen(s1) < 3){
			yesno[i] = 1;
		}
		boundary = 0;
		gol = 0;
	}
	
	for (int i = 0; i < time; i++){
		if(yesno[i] == 1)
			printf("No\n");
		else if(yesno[i] == 0)
			printf("Yes\n");
	}
	
}
