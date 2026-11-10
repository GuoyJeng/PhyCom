#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
 
void playing_decision(struct Weather *Weather){
    if (strcmp(Weather->outlook,"overcast")==0){
        printf("yes\n");
    }else if(strcmp(Weather->outlook, "rain") == 0){
        if(Weather->wind == 'F'){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }else if(strcmp(Weather->outlook,"sunny")==0){
        if(Weather->humidity >= 77.5){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }else{
        printf("no\n");
    }
}
 
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct Weather w;
        scanf(" %8s %d %d %c",w.outlook,&w.temperature,&w.humidity,&w.wind);
        // printf("%s %d %d %c",w.outlook,w.temperature,w.humidity,w.wind);
         
        playing_decision(&w);
    }
}
