#include <stdio.h>
#include "pico/stdlib.h"

int main(void){
  stdio_init_all();
  const unsigned int LED_PIN = 25; //Led tich hop trong pico
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  while(1){ 
    gpio_put(LED_PIN, 1);
    sleep_ms(500);
    gpio_put(LED_PIN, 0);
    sleep_ms(500);
  }
}