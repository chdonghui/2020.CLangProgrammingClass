#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char cmd[100] = {0, };
	char q[100] = {0, };
	
	printf("검색하고 싶은 이미지를 입력해 주세요:\n");
	
	scanf("%s", q);
	
	sprintf(cmd, "start https://www.google.com/search?q=%s^&tbm=isch", q);
	
	system(cmd);
	
	return 0;
}
