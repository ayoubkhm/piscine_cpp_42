#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

# include <iostream>
# include "Contact.hpp"

std::string	ajouterEspaces(int n);

std::string	ajusterLargeur(std::string str, long unsigned max);

int			afficherInterfaceRecherche(FicheContact tabFiches[8]);

#endif
