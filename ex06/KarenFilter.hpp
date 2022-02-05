/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenFilter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:02:55 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:28:23 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_FILTER
#define  KAREN_FILTER
#include <string>
#include <iostream>


class KarenFilter
{
public:
	typedef	void(KarenFilter::*complains)(void);
	KarenFilter(void);
	~KarenFilter(void);
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
#endif