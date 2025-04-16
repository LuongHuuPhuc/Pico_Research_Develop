#include <stdio.h>
#include "pico/stdio_usb.h"
#include "pico/stdlib.h"
#include "pico/types.h"
#include "pico/time.h"

/**
 * @brief Do thoi gian giua 2 su kien 
 */

int main(void){
  stdio_init_all(); //Khoi tao giao tiep USB serial

  while(!stdio_usb_connected()){
    sleep_ms(100); //Doi may tinh nhan cong USB
  }

  printf("Time starting...!\n");

  absolute_time_t start_time = get_absolute_time();

  //Gia lap mot doan code mat thoi gian o day
  for(int i = 0; i < 1000; i++){
    printf("%d\n", i);
    sleep_ms(100);
  }

  absolute_time_t end_time = get_absolute_time();

  double elasped_time = (double)(absolute_time_diff_us(start_time, end_time)) / 1000.0f; //Tinh tgian chenh lech

  printf("Passed time: %.10f s\n", elasped_time);

  while(true){
    sleep_ms(1000);
    printf("Completed ! Cosuming time: %.10f s\n", elasped_time);
  }
} 


