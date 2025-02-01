#include <stdio.h>
#include "pico/stdlib.h"
#include "semafaro.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

// Função para inicializar os LEDs
void ativar_semaforo(void) {
    gpio_init(LED_VERMELHO);
    gpio_init(LED_AMARELO);
    gpio_init(LED_VERDE);

    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
}

// Função de teste simples
void testando_leds(void) {
    // Acende todos os LEDs por 1 segundo
    gpio_put(LED_VERMELHO, 1);
    gpio_put(LED_AMARELO, 1);
    gpio_put(LED_VERDE, 1);
    sleep_ms(1000);  // Espera 1 segundo

    // Apaga todos os LEDs
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);
}

int main()
{
    // stdio_init_all();
    ativar_semaforo();
    testando_leds();

    while (true) {
        printf("LEDs ligado\n");
        sleep_ms(1000);
    }
    return 0;
}