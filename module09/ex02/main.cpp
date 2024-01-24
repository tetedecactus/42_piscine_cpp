/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/24 09:08:26 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        
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


// 1.
// Random Number Generation The function generate_random_numbers 
// produces a vector of random integers within a specified range.

// 2.
// Sorting Inside Pairs The function sort_inside_pairs sorts 
// the elements inside pairs. It iterates through the array 
// and swaps elements if they are out of order within their 
// respective pairs.

// 3.
// Pair Array Merging The function merge_pair_arrays merges 
// pair arrays during the sorting process. It combines two 
// sub-arrays into a single sorted array.

// 4.
// Merge Sort Pairs The function merge_sort_pairs performs a 
// merge sort algorithm on the pairs in the array.

// 5.
// Creating Main Chain and Pend Elements Functions create_main_chain 
// and create_pend_elements extract the main chain (larger elements 
//     of pairs) and pend elements (smaller elements of pairs) from 
//     the sorted array.

// 6.
// Jacobsthal Number Calculation The function jacobsthal calculates 
// the nth Jacobsthal number using a mathematical formula.

// 7.
// Binary Insertion The function binary_insert inserts an element 
// into a sorted array using a binary insertion algorithm.

// 8.
// Merge Insertion Sort The function merge_insertion_sort combines 
// the sorting steps outlined above to implement the custom 
// merge-insertion sort algorithm.

// 9.
// Main Function In the main function, a usage message is 
// printed if the program is not provided the correct 
// command-line arguments. It then generates a set of 
// random numbers, sorts them using the custom merge-insertion 
// sort, and prints the sorted array along with a confirmation 
// of whether it is sorted.

// https://github.com/Mikastiv/FordJohnsonSort/blob/main/main.cpp