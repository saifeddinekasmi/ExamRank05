/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:20:52 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:20:54 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string , ASpell *> mymap;
    public:
        Warlock();
        Warlock(std::string const &_name, std::string const &_title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const &_title);

        void introduce() const;


        void learnSpell(ASpell *ptr);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &obj);
};