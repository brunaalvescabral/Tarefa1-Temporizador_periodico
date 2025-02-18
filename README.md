# Tarefa 2: Atividade 1 - Semáforo com Temporizador Periódico 

## Descrição

Este projeto utiliza o microcontrolador Raspberry Pi Pico para controlar três LEDs (vermelho, amarelo e verde), simulando o funcionamento de um semáforo. A troca dos sinais ocorre a cada 3 segundos, utilizando a função `add_repeating_timer_ms()` do Pico SDK para configurar o temporizador. A rotina principal imprime uma mensagem a cada segundo para indicar o status do semáforo.

## Funcionalidades

1. **Controle dos LEDs do Semáforo:**
   - O semáforo começa com o LED vermelho aceso.
   - Após 3 segundos, o LED amarelo acende, seguido pelo verde, e o ciclo se repete.
   
2. **Temporização de 3 segundos:**
   - O tempo de cada estado do semáforo (vermelho, amarelo e verde) é de 3 segundos, controlado por um temporizador periódico.
   
3. **Impressão de Status:**
   - A rotina principal imprime uma mensagem a cada segundo, informando que o semáforo está funcionando.

## Requisitos

- **Hardware:**
  - Raspberry Pi Pico
  - 3 LEDs (vermelho, amarelo e verde) conectados aos pinos GPIO 11, 12 e 13
  - 3 Resistores de 330 Ω para limitar a corrente dos LEDs
  - Fios de conexão para os LEDs
  - Fonte de alimentação para o Raspberry Pi Pico
  
- **Software:**
  - Raspberry Pi Pico SDK
  - Visual Studio Code com a extensão para Raspberry Pi Pico

## Configuração do Hardware

| Componente        | Conexão        |
|-------------------|----------------|
| LED Vermelho      | GPIO 11        |
| LED Amarelo       | GPIO 12        |
| LED Verde         | GPIO 13        |

## Como Executar

### 1. Configuração do Ambiente

- Certifique-se de que o SDK do Raspberry Pi Pico está corretamente configurado no seu ambiente de desenvolvimento.
- Instale o Visual Studio Code e a extensão **Raspberry Pi Pico Project**.

### 2. Compilação e Execução

1. Compile o programa no Visual Studio Code utilizando a extensão **Raspberry Pi Pico Project**.
2. Coloque o Raspberry Pi Pico em modo de boot e copie o arquivo `main.uf2` para o microcontrolador conectado via USB.

### 3. Emulação com Wokwi 

1. Para emular o projeto sem hardware físico, utilize o **Wokwi**.
2. Instale a extensão **Wokwi for VS Code** e inicie a emulação.
3. Teste o funcionamento do programa no ambiente emulado.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
