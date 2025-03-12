#include "Phonebook_utils.hpp"

std::string	ajouterEspaces(int n)
{
	std::string	espace;
	while (n--)
		espace.append(" ");
	return (espace);
}

std::string	ajusterLargeur(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	afficherInterfaceRecherche(FicheContact tabFiches[8])
{
	char		indice;
	int			count;
	std::string	tmp;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|    Prenom|       Nom|    Surnom|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	indice = '0';
	count = 0;
	while (++indice <= '8')
	{
		if (tabFiches[indice - 1 - '0'].getPrenom().size() && ++count)
		{
			tmp = indice;
			tmp = ajusterLargeur(tmp, 10);
			std::cout << "|" << ajouterEspaces(10 - tmp.size()) << tmp;

			tmp = ajusterLargeur(tabFiches[indice - 1 - '0'].getPrenom(), 10);
			std::cout << "|" << ajouterEspaces(10 - tmp.size()) << tmp;

			tmp = ajusterLargeur(tabFiches[indice - 1 - '0'].getNom(), 10);
			std::cout << "|" << ajouterEspaces(10 - tmp.size()) << tmp;

			tmp = ajusterLargeur(tabFiches[indice - 1 - '0'].getSurnom(), 10);
			std::cout << "|" << ajouterEspaces(10 - tmp.size()) << tmp;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (count);
}
