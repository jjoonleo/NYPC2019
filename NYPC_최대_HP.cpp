#include <stdio.h>

int main(){
	int time;
	int Hp, crtHp, log, maxHp;
	scanf("%d%d", &crtHp, &time);
	for(int i = 0; i<time; time++){
		scanf("%d%d", &log, &Hp);
		if(log == 1){
			crtHp = crtHp-Hp;
		}
		else if(log == 2){
			crtHp = crtHp + Hp;
		}
		else if(log == 3){
			maxHp = crtHp + Hp;
			break;
		}
	}
	printf("%d", maxHp);
	
}
