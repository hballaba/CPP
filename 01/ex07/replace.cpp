/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:29:22 by hballaba          #+#    #+#             */
/*   Updated: 2020/12/17 16:29:28 by hballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main(int argc, char **argv)
{
    std::string rep = ".repleace";
    int         index = 0;
    std::string text;
      
    if (argc != 4)
    {
        std::cout << "Not valid argument" << std::endl;
        return (1);
    }
    std::ifstream nameFile(argv[1]);
    if (!nameFile)
    {
        std::cout << "Not valid file" << std::endl;
        return (1);
    }
    std::string toReplace = argv[2];
    std::string replaceWith = argv[3];
    std::getline(nameFile, text, '\0');
    while ((index = text.find(toReplace)) > 0)
        text.replace(text.find(toReplace),toReplace.length(),replaceWith);
    std::ofstream outf(argv[1] + rep);
    outf << text;
    return (0);
}
