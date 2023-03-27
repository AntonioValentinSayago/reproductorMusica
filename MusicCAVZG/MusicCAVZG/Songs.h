#ifndef __Songs
#define __Songs

#include <iostream>
#include <string>

class Songs
{
private:
	int IDMusica;
	std::string SNombre;
	std::string SArtista;
	std::string SDuracion;
	std::string SGenero;
	std::string SRutaMusica;
	bool SFlag;

public:
	Songs();
	~Songs();

	int getIdMusica();

	void setIdMusica(int IdMusica);

	std::string getSNombre();

	void setSNombre(std::string SNombre);

	std::string getSArtista();

	void setSArtista(std::string SArtista);

	std::string getSDuracion();

	void setSDuracion(std::string SDuracion);

	std::string getSGenero();

	void setSGenero(std::string SGenero);

	std::string getSRutaMusica();

	void setSRutaMusica(std::string SRutaMusica);

	bool getSFlag();

	void setSFlag(bool SFlag);

};

#endif
