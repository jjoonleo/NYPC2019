#include <stdio.h>

int main(){
	int end, p = 1, locate, i, add = 0,start, factor = 0,x =0;
	scanf("%d%d",&start, &end);
	if(start == 1 || start == 0){
		start+=1;
		factor+=1;
	}
	for(i = start; i <= end; i++){
		factor+=2;
		for(int j = 2; j<=i-1; j++){
			//printf("%d\n",i);
			if(i%j == 0){
				if(j == x){
					break;
				}
				if(j*j == i){
					factor+=1;
					break;}
				else
					factor+=2;
				x = i/j; 
			}
			//printf("i%d  j%d   factor%d   x%d\n",i,j,factor,x);
		}
		x=0;
		
	}
	printf("%d",factor);
	return 0;
	
}
