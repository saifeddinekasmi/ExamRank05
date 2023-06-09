/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:29 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:06:31 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
    public:
        Warlock();
        Warlock(std::string const &_name, std::string const &_title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const &_title);

        void introduce() const;
};