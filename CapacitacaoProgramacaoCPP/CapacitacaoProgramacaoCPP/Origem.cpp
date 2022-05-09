#include <iostream> // abeçalho do cout e cin
#include <tchar.h> //cabeçalho da linguagem do console

using namespace std;// poupa tempo de escrever o std::

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Botz;

	cout << "Escreva quantos robôs têm: ";

	cin >> Botz;

	cout << "Então você tem " << Botz << " robôs!" << "\n";
	
	//Outros exemplos que podemos usar no console
	cout << "Tamanho da Variável Botz: " << sizeof(Botz) << " bytes" "\n"; //Mostra o quanto de bytes ocupana sua memória
	cout << "Endereço que Variável Botz ocupa na Memória RAM: " << &Botz << "\n"; // Mostra onde está a sua variavel na memoria RAM

	cout << "Esqueceu um robô na chuva" << "\n"; //Frase para mostrar que passou um tempo
	cout << "Two hours later..." << "\n"; 
	Botz = Botz - 1; // Botz -= 1; // O número de robos inicial - o robo que ficou na chuva.
	cout << "Depois da chuva, temos " << Botz << " robôs!" << "\n";

	return 0;
}