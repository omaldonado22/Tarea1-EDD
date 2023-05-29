#include <iostream>
using namespace std;

const int NUM_CANDIDATOS = 12;

void calcularResultados(const int* votos, int totalVotos) {
    int resultados[NUM_CANDIDATOS + 1] = {0};

    // Contar los votos para cada candidato
    for (int i = 0; i < totalVotos; i++) {
        int voto = votos[i];
        resultados[voto]++;
    }

    // Encontrar el candidato ganador
    int ganador = 0;
    int votosGanador = 0;

    for (int candidato = 1; candidato <= NUM_CANDIDATOS; candidato++) {
        int votos = resultados[candidato];

        if (votos > votosGanador) {
            ganador = candidato;
            votosGanador = votos;
        }
    }

    // Calcular el porcentaje de votos del ganador
    double porcentajeGanador = (votosGanador / static_cast<double>(totalVotos)) * 100.0;

    // Imprimir los resultados
    cout << "a) Número de votos de cada candidato al final de la elección:\n";
    for (int candidato = 1; candidato <= NUM_CANDIDATOS; candidato++) {
        int votos = resultados[candidato];
       cout << "Candidato " << candidato << ": " << votos << " votos\n";
    }

    cout << "\nb) Resultados finales:\n";
    cout << "Ganador: Candidato " << ganador <<endl;
   cout << "Número de votos obtenidos: " << votosGanador <<endl;
    cout << "Porcentaje de votos obtenidos: " << porcentajeGanador << "%" <<endl;
}

int main() {
    // Ejemplo de votos
    int votos[] = {1, 2, 3, 1, 4, 5, 3, 7, 3, 8, 9, 1, 10, 12, 12};
    int totalVotos = sizeof(votos) / sizeof(votos[0]);

    // Calcular los resultados
    calcularResultados(votos, totalVotos);

    return 0;
}
