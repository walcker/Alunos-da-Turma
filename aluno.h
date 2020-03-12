#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>

using namespace std;

class Aluno
{
private:
	string matricula;
	short idade;
	string contato1;
	string endereco;
	string nome;
public:
	string getMatricula();
	void setMatricula(string var_matricula);

	short getIdade();
	void setIdade(short var_idade);

	string getContato1();
	void setContato1(string var_contato1);

	string getEndereco();
	void setEndereco(string var_enredeco);

	string getNome();
	void setNome(string var_nome);

	Aluno();
	Aluno(string mat, short idade1,string c1,string endereco1,string nome1);
	
};

#endif