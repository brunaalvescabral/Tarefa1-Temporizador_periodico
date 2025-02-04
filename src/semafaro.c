#include <pico/stdlib.h>
#include <hardware/timer.h>
#include "semafaro.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

// Intervalo do temporizador em milissegundos (3 segundos)
#define TEMPORIZADOR_LED 3000


// Variável global para controlar o estado do semáforo
static int estado = 0;  // 0 = vermelho, 1 = amarelo, 2 = verde

// Função de callback para o temporizador repetido
bool repetir_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Array com os LEDs em ordem de acionamento
    int leds[3] = {LED_VERMELHO, LED_AMARELO, LED_VERDE};

    // Acende o LED correspondente ao estado atual
    gpio_put(leds[estado], 1);

    // Alterna o estado
    estado = (estado + 1) % 3;

    return true;  // Mantém o temporizador repetindo
}

// Função para inicializar os LEDs e temporizador
void ativar_semaforo(void) {
    gpio_init(LED_VERMELHO);
    gpio_init(LED_AMARELO);
    gpio_init(LED_VERDE);

    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Cria e adiciona o temporizador para repetir a cada TEMPORIZADOR_LED (3000 ms)
    static struct repeating_timer timer;
    add_repeating_timer_ms(TEMPORIZADOR_LED, repetir_timer_callback, NULL, &timer);
}