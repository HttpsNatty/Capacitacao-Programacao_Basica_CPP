#include <iostream> // abe�alho do cout e cin
#include <tchar.h> //cabe�alho da linguagem do console

using namespace std;// poupa tempo de escrever o std::

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Botz;

	cout << "Escreva quantos rob�s t�m: ";

	cin >> Botz;

	cout << "Ent�o voc� tem " << Botz << " rob�s!" << "\n";
	
	//Outros exemplos que podemos usar no console
	cout << "Tamanho da Vari�vel Botz: " << sizeof(Botz) << " bytes" "\n"; //Mostra o quanto de bytes ocupana sua mem�ria
	cout << "Endere�o que Vari�vel Botz ocupa na Mem�ria RAM: " << &Botz << "\n"; // Mostra onde est� a sua variavel na memoria RAM

	cout << "Esqueceu um rob� na chuva" << "\n"; //Frase para mostrar que passou um tempo
	cout << "Two hours later..." << "\n"; 
	Botz = Botz - 1; // Botz -= 1; // O n�mero de robos inicial - o robo que ficou na chuva.
	cout << "Depois da chuva, temos " << Botz << " rob�s!" << "\n";

	return 0;
}