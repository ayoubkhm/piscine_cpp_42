#include "Contact.hpp"

FicheContact::FicheContact(void)
{
}

FicheContact::~FicheContact(void)
{
}

std::string	FicheContact::getPrenom(void) const
{
	return (this->_prenom);
}

std::string	FicheContact::getNom(void) const
{
	return (this->_nom);
}

std::string	FicheContact::getSurnom(void) const
{
	return (this->_surnom);
}

std::string	FicheContact::getNumTel(void) const
{
	return (this->_numTel);
}

std::string	FicheContact::getSecret(void) const
{
	return (this->_secret);
}

void	FicheContact::setPrenom(std::string val)
{
	this->_prenom = val;
}

void	FicheContact::setNom(std::string val)
{
	this->_nom = val;
}

void	FicheContact::setSurnom(std::string val)
{
	this->_surnom = val;
}

void	FicheContact::setNumTel(std::string val)
{
	this->_numTel = val;
}

void	FicheContact::setSecret(std::string val)
{
	this->_secret = val;
}
