// I thought this problem was way more complex than it really was. 
//I thought the first store was your parking spot. 
//And it worked with the first test case. But it turns out to not work that way. 

#include <stdio.h>
int main(){

        int cases;
        int total;
        scanf("%d", &cases);
        for (int x = 0 ; x < cases ; x++){
                int max = 0;
                unsigned int min = -1;
                int stores;
                scanf("%d", &stores);
                for (int y = 0 ; y < stores ; y++){
                        int loc;
                        scanf("%d", &loc);
                        if (loc < min)
                                min = loc;
                        if (loc > max)
                                max = loc;
                }
                total = 2*(max-min);
                printf("%d\n", total);

        }
        return 0;
}
