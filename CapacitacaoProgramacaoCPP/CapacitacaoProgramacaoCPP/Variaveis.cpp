#include <iostream>

int main()// Fun��o principal
{
	int Jogo; //N�mero inteiro

	char Qualidade; //char

	float Player; //N�mero reais

	//Determinando as variaveis

	Jogo = 4;

	Qualidade = 'S';

	Player = 2674;

		std::cout << "Aqui na Byte existem " << Jogo << " jogos de qualidade " << Qualidade << " com " << Player << "de jogadores no total." << std::endl;

		std::cout << "Em cada, temos " << Player / Jogo << " Jogadores." << std::endl;

		/* Op��o 2
		std::cout << "Aqui na Byte existem " << Jogo << " jogos de qualidade " << Qualidade << " com " << Players << " de jogadores em cada." << std::endl;
		std::cout << "No total, temos " << Players * Jogo << " jogadores."<< std::endl; */
}