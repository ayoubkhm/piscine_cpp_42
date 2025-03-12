#include "Phonebook.hpp"

int	main(void)
{
	Phonebook 	rep;
	std::string	commande;

	while (commande != "EXIT")
	{
		std::cout << "Entrez une commande (ADD, SEARCH, EXIT) > ";
		std::getline(std::cin, commande);
		if (commande == "ADD")
			rep.add();
		else if (commande == "SEARCH")
			rep.rechercher();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
