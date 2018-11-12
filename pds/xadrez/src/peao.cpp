#include "peao.h"

Peao::Peao(int x, int y) : Peca("♟", x, y) {}

bool Peao::pode_mover(int x, int y, Tabuleiro* t){
  return x == x && y == 1 && this->valida_movimento(x, y, t);
}