#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Phonebook_utils.hpp"

class	Phonebook
{
	private:
		FicheContact	_fiches[8];
		int				_positionActuelle;
	public:
		Phonebook(void);
		~Phonebook(void);

		void	add(void);
		void	rechercher(void);
		void	afficherFiche(FicheContact f) const;
		FicheContact	recupererFiche(int indice) const;
};

#endif
