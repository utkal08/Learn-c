#include <stdio.h>
struct TIME{
     int hours ;
      int minutes;
      int second;
       };
struct TRAIN_INFO{
    int  Train_no;
     char Train_name[50];
     struct TIME Departure_time;
        
     
     struct TIME Arival_time;

     
     
     char start_station[50];
     char End_station[50];
};
int main(){
    struct Time D;
    sturct TRAIN_INFO T;
    printf("Enter the train no  ");
    scanf("%d",&T.Train_no);
    printf("Enter the name of  the train  ");
    scanf("%s",&T.Train_name);


    

return 0;
}