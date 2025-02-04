#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"
#include "semafaro.h"

int main()
{
    stdio_init_all();
    ativar_semaforo();
    
    while (true) {
        printf("Semafaro acionado...\n");
        sleep_ms(1000);
    }
    return 0;
}
