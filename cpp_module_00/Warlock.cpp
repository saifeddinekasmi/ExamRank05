/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:05:55 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:06:17 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(std::string const &_name, std::string const &_title) : name(_name) , title(_title){
    std::cout << this->name <<  ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
   std::cout << this->name << ": My job here is done!" << std::endl;
}
std::string const & Warlock::getName() const{
    return this->name;
}
std::string const & Warlock::getTitle() const{
    return this->title;
}
void Warlock::setTitle(std::string const &_title){
    this->title = _title;
}
void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}