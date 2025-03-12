#include "Phonebook.hpp"
#include "Phonebook_utils.hpp"

Phonebook::Phonebook(void)
{
    this->_positionActuelle = 0;
    std::cout << "Bienvenue dans votre Répertoire! (peut contenir jusqu'à 8 fiches)" << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Fermeture du Répertoire, à bientôt!" << std::endl;
}

void    Phonebook::add(void)
{
    std::string str;

    str = "";
    if (this->_positionActuelle > 7)
        std::cout << "Warning: overwriting info about " << this->_fiches[this->_positionActuelle % 8].getPrenom() << std::endl;
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter a first name: ";
        if (std::getline(std::cin, str) && str != "")
            this->_fiches[this->_positionActuelle % 8].setPrenom(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_fiches[this->_positionActuelle % 8].getPrenom() << "'s last name: ";
        if (std::getline(std::cin, str) && str != "")
            this->_fiches[this->_positionActuelle % 8].setNom(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_fiches[this->_positionActuelle % 8].getPrenom() << "'s nickname: ";
        if (std::getline(std::cin, str) && str != "")
            this->_fiches[this->_positionActuelle % 8].setSurnom(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_fiches[this->_positionActuelle % 8].getPrenom() << "'s phone number: ";
        if (std::getline(std::cin, str) && str != "")
        {
            // Vérification du contenu numérique
            bool is_numeric = true;
            for (size_t i = 0; i < str.size(); i++)
            {
                if (!std::isdigit(static_cast<unsigned char>(str[i])))
                {
                    is_numeric = false;
                    break;
                }
            }
            if (!is_numeric)
            {
                std::cout << "Error: Phone number must contain only digits." << std::endl;
                str = ""; // On réinitialise str pour forcer une nouvelle saisie
            }
            else
            {
                this->_fiches[this->_positionActuelle % 8].setNumTel(str);
            }
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter " << this->_fiches[this->_positionActuelle % 8].getPrenom() << "'s darkest secret: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->_fiches[this->_positionActuelle % 8].setSecret(str);
            std::cout << this->_fiches[this->_positionActuelle % 8].getPrenom() 
                      << " successfully added to phonebook [" << this->_positionActuelle % 8 + 1 << "/8]" << std::endl;
        }
    }
    this->_positionActuelle++;
}

void    Phonebook::afficherFiche(FicheContact f) const
{
    std::cout << std::endl << "Récupération des informations..." << std::endl;
    if (!f.getPrenom().size())
    {
        std::cout << "Aucune info disponible pour cette fiche." << std::endl;
        return ;
    }
    std::cout << "Prénom: " << f.getPrenom() << std::endl;
    std::cout << "Nom: " << f.getNom() << std::endl;
    std::cout << "Surnom: " << f.getSurnom() << std::endl;
    std::cout << "Numéro de téléphone: " << f.getNumTel() << std::endl;
    std::cout << "Secret: " << f.getSecret() << std::endl;
}

FicheContact Phonebook::recupererFiche(int indice) const
{
    return (this->_fiches[indice % 8]);
}

void    Phonebook::rechercher(void)
{
    std::string saisie;

    if (!afficherInterfaceRecherche(this->_fiches))
    {
        std::cout << std::endl << "Le répertoire est vide!" << std::endl;
        return ;
    }
    while (!std::cin.eof())
    {
        std::cout << "Sélectionnez un index: ";
        if (std::getline(std::cin, saisie) && saisie != "")
        {
            if (saisie.size() == 1 && saisie[0] >= '1' && saisie[0] <= '8' && 
                this->_fiches[saisie[0] - '1'].getPrenom().size())
                break ;
        }
        if (saisie != "")
            std::cout << "Index invalide!" << std::endl;
    }
    if (!std::cin.eof())
        this->afficherFiche(this->_fiches[saisie[0] - '1']);
}
