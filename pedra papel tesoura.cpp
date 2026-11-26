#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));
    char u = 's';
    int jogada = 0;

    while (u == 's' or u == 'S') {
        int pc = 0, j = 0;
        system("cls");

        while (j < 3 and pc < 3) {
            int secreto = rand() % 3 + 1;

            cout << "Sua jogada (1=Pedra 2=Papel 3=Tesoura): ";
            cin >> jogada;
            cout << "\n";
            if (jogada < 1 or jogada > 3) {
                cout << "numero indisponivel\n";
                cout << "deseja tentar novamente [s/n]: ";
                cin >> u;
                cout << "\n";
                if (u == 's' or u == 'S') {
                    continue;
                }
                else {
                    return 0;
                }
            }

            cout << "Computador: " << secreto << endl;

            if (jogada == secreto) {
                cout << "empate\n";
            }
            else if ((jogada == 1 and secreto == 3) or
                     (jogada == 2 and secreto == 1) or
                     (jogada == 3 and secreto == 2)) {
                cout << "jogador ganhou\n";
                j++;
            }
            else {
                cout << "pc ganhou\n";
                pc++;
            }

            cout << "placar " << j << "x" << pc << endl;
            cout << "\n";
        }

        if (j == 3) {
            cout << "jogador venceu o jogo" << endl;
        }
        else {
            cout << "pc venceu o jogo" << endl;
        }

        cout << "deseja jogar de novo [s/n]: ";
        cin >> u;
    }

    return 0;

}
