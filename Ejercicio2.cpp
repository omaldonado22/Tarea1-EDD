#include <iostream>
using namespace std;
int main() {
    int culo;
    int culo2;
    const int numCandidatos = 12;
    int votos[numCandidatos] = {0};

    cout << "Ingrese los votos (terminar con un número negativo):" <<endl;
    int voto;
    while (cin >> voto && voto >= 0) {
        if (voto >= 1 && voto <= numCandidatos) {
            votos[voto - 1]++;
        }
    }

    int candidatoGanador = 0;
    int maxVotos = 0;
    for (int i = 0; i < numCandidatos; i++) {
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
            candidatoGanador = i + 1;
        }
    }

    int totalVotos = 0;
    for (int i = 0; i < numCandidatos; i++) {
        totalVotos += votos[i];
    }
    double porcentajeGanador = static_cast<double>(maxVotos) / totalVotos * 100.0;

   cout << "Número de votos de cada candidato:" << endl;
    for (int i = 0; i < numCandidatos; i++) {
       cout << "Candidato " << i + 1 << ": " << votos[i] << " votos" <<endl;
    }

    cout << "Candidato ganador: Candidato " << candidatoGanador <<endl;
    cout << "Número de votos: " << maxVotos <<endl;
    cout << "Porcentaje del total de la elección: " << porcentajeGanador << "%" <<endl;

    return 0;
}
