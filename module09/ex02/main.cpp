/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2023/11/02 21:47:34 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        PmergeMe p(argc, argv);
        
        std::vector<int> v = p.getVector();
        std::list<int> l = p.getList();
        
        
        std::cout << "Vector: ";
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
        std::cout << "List: ";
        for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}

// Étape 1 : Division en sous-tableaux et tri avec Insertion Sort

// Division initiale : Diviser le tableau de N éléments en (N/K) groupes, 
// chaque groupe étant de taille K.

// Tri de chaque sous-tableau : Trier chaque sous-tableau de taille K 
// avec l'algorithme de tri par insertion.

// Étape 2 : Fusion des sous-tableaux triés

// Fusion des sous-tableaux triés : Après avoir trié chaque sous-tableau 
// individuellement, fusionner ces sous-tableaux triés 
// (comme dans l'algorithme du tri fusion) pour obtenir le tableau entièrement 
// trié.

// Cette méthode combine l'efficacité du tri par insertion pour les petits 
// ensembles avec la puissance de la fusion pour fusionner ces ensembles triés.

// Les performances des différentes étapes sont discutées dans le texte, 
// notant que le tri par insertion a une complexité de temps de O(N) pour 
// le meilleur des cas et O(K^2) pour le pire des cas, tandis que la fusion 
// des sous-tableaux triés suit une approche similaire à celle du tri fusion.

// Cette stratégie est souvent utilisée pour améliorer les performances des 
// algorithmes de tri en prenant avantage des meilleures caractéristiques de 
// différents algorithmes pour des ensembles de données de tailles différentes.