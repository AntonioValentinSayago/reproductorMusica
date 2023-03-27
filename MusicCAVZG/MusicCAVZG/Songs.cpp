#include "Songs.h"

Songs::Songs() {
	IDMusica = 0;
	SNombre = "";
	SArtista = "";
	SDuracion = "";
	SGenero = "";
	SRutaMusica = "";
	SFlag = false;
};

Songs::~Songs() {
	
};

int Songs::getIdMusica() {
	return IDMusica;
}

void Songs::setIdMusica(int IdMusica) {
	this->IDMusica = IdMusica;
}

std::string Songs::getSNombre() {
	return SNombre;
}

void Songs::setSNombre(std::string SNombre) {
	this->SNombre = SNombre;
}

std::string Songs::getSArtista() {
	return SArtista;
}

void Songs::setSArtista(std::string SArtista) {
	this->SArtista = SArtista;
}

std::string Songs::getSDuracion() {
	return SDuracion;
}

void Songs::setSDuracion(std::string SDuracion) {
	this->SDuracion = SDuracion;
}

std::string Songs::getSGenero() {
	return SGenero;
}

void Songs::setSGenero(std::string SGenero) {
	this->SGenero = SGenero;
}

std::string Songs::getSRutaMusica() {
	return SRutaMusica;
}

void Songs::setSRutaMusica(std::string SRutaMusica) {
	this->SRutaMusica = SRutaMusica;
}

bool Songs::getSFlag() {
	return SFlag;
}

void Songs::setSFlag(bool SFlag) {
	this->SFlag = SFlag;
}