#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>  // Incluir esta cabecera para usar sleep()

// Manejador de señal para SIGINT (CTRL+C)
void signal_handler(int signo) {
    if (signo == SIGINT) {
        time_t now;
        time(&now);
        printf("\nSeñal recibida. Hora actual: %s", ctime(&now));
        exit(0); // Finaliza el programa después de mostrar la hora
    }
}

int main() {
    // Registrar el manejador de señales
    signal(SIGINT, signal_handler);

    // Mensaje para el usuario
    printf("Presione CTRL+C para ver la hora del sistema...\n");

    // Bucle infinito hasta recibir la señal
    while (1) {
        sleep(1);  // Dormir durante 1 segundo
    }

    return 0;
}
