/**
 * @file Individu.h
 * @author Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @details Ce fichier implante un Individu défini par un nom prénom.
 * 
 * La classe définit également la voiture conduite par l'individu.
 * @version 1.0
 * @date 12/08/22
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*
  Spécifie une classe Individu en relation réciproque avec sa Voiture
  Auteur : Lopistéguy
  Version : 0.1
  Date : 12/08/2022
*/

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Représente un Individu.
 * @warning Actuellement, un Individu n'est associé qu'à une Voiture 
 * @deprecated A la place, utiliser la classe Personne
 */

class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;       
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;     
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet Individu à partir de son nom et prénom
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit l'objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Retourne l'identité de l'Individu.
     * 
     * @return une chaîne sous la forme "nom prénom" 
     * @bug Une espace de trop entre le nom et le prénom
     * @todo ajouter un attribut pour savoir si on retourne une chaine de type "nom prenom" ou "prenom nom"
     */
    string toString();      
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la voiture conduite par l'Individu.
     * 
     * @param [in] voiture un pointeur ves l'objet Voiture conduit par l'Individu.
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H