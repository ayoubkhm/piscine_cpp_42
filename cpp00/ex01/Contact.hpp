#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	FicheContact
{
	private:
		std::string	_prenom;
		std::string	_nom;
		std::string	_surnom;
		std::string	_numTel;
		std::string	_secret;
	public:
		FicheContact(void);
		~FicheContact(void);

		std::string	getPrenom(void) const;
		std::string	getNom(void) const;
		std::string	getSurnom(void) const;
		std::string	getNumTel(void) const;
		std::string	getSecret(void) const;

		void		setPrenom(std::string val);
		void		setNom(std::string val);
		void		setSurnom(std::string val);
		void		setNumTel(std::string val);
		void		setSecret(std::string val);
};

#endif
