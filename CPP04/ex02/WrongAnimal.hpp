/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:47 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:25:17 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& Wronganimal);
        WrongAnimal& operator=(const WrongAnimal& Wronganimal);
        ~WrongAnimal();
                
        //****************************************//
        //                Methods                 //
        //****************************************//
        void makeSound(void) const;
        std::string getType() const;
};


#endif