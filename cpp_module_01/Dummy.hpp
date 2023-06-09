/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:14:28 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:18:50 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ATarget.hpp"
class Dummy : public ATarget
{   
    public:
    Dummy();
    ~Dummy();

    ATarget *clone() const;
};