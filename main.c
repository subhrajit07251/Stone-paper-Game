#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int stonepaperscissors(char me,char lapi){
if(me==lapi){
    return 0;
}
/*
stone paper= paper wins
stone scissors=scissors win
paper scissors=scissors win 
paper stone= paper win
scissors stone=stone win 
scissors paper= paper win
*/
if(me=='s'&&lapi=='p'){
    return -1;
}else if(me=='s' && lapi=='c'){
    return 1;
}else if(me=='p' && lapi=='c'){
    return -1;
}else if(me=='p' && lapi=='s'){
    return 1;
}else if(me=='c' && lapi=='s'){
    return -1;
}else if(me=='c' && lapi=='p'){
    return 1;
}
}
int main(){
char me,lapi;
char s[100];
printf("Enter your name:\n");
gets(s);
    srand(time(0));
    int number=rand()%10+1;
    // printf("%d\n",number);
    if(number<3){
        lapi='s';
    }else if(number>3&&number<6){
        lapi='p';
    }else{
        lapi='c';
    }
    printf("choose a choice from stone,paper,scissors:\n");
    scanf("%c",&me);
    int result=stonepaperscissors( me, lapi);
    printf("You choose %c and lapi choose %c\n",me,lapi);
    if (result==0){
        printf("Draw\n");
    }else if(result==1){
        printf("You won\n");
    }else{
      printf("You lost\n");   
    }   
}
