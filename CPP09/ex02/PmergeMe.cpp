/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:39:57 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/15 17:40:09 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sorting(std::vector<std::pair<int, int> > &v, size_t i) { // vector
    for (size_t j = 0; j + 1 < v.size(); j++)
    {
        if (v[j].first > v[j + 1].first)
        {
            std::swap(v[j], v[j + 1]);
            if (j > 0)
                j = j - 1;
        }
    }
    i++;
    int r = 0;
    for (size_t i = 0; i + 1 < v.size() - 1; i++)
    {
        if (v[i].first > v[i + 1].first)
            r = 1;
    }
    if (!r)
        return ;
    sorting(v, i);
}

void sorting(std::deque<std::pair<int, int> > &v, size_t i) { // deque
    for (size_t j = 0; j + 1 < v.size(); j++)
    {
        if (v[j].first > v[j + 1].first)
        {
            std::swap(v[j], v[j + 1]);
            if (j > 0)
                j = j - 1;
        }
    }
    i++;
    int r = 0;
    for (size_t i = 0; i + 1 < v.size() - 1; i++)
    {
        if (v[i].first > v[i + 1].first)
            r = 1;
    }
    if (!r)
        return ;
    sorting(v, i);
}

void parse(char **str, std::vector<int> &v) { // vector
    std::string string;
    std::string pars;
    int value;

    for (size_t i = 0; str[i]; i++)
    {
        string = str[i];
        std::stringstream ss(string);
        while (ss >> pars)
        {
            for (size_t j = 0; j < pars.size(); j++)
                if (!isdigit(pars[j]))
                    throw std::runtime_error("is no digit");
            value = atoi(pars.c_str());
            if (value < 0)
                throw std::runtime_error("Error:");
            v.push_back(value);
        }
        ss.clear();
    }
}

void parse(char **str, std::deque<int> &v) { //deque
    std::string string;
    std::string pars;
    int value;

    for (size_t i = 0; str[i]; i++)
    {
        string = str[i];
        std::stringstream ss(string);
        while (ss >> pars)
        {
            for (size_t j = 0; j < pars.size(); j++)
                if (!isdigit(pars[j]))
                    throw std::runtime_error("is no digit");
            value = atoi(pars.c_str());
            if (value < 0)
                throw std::runtime_error("Error:");
            v.push_back(value);
        }
        ss.clear();
    }
}

void Pmergeme(std::deque<int> &v) { // deque
    std::deque<int>::iterator it;
    std::deque<int> struggler;
    std::deque<int> mainChain;
    std::deque<int> pend;
    std::deque<std::pair<int, int> > pairdeque;
    size_t i = 0;
    int j = 0;
    
    if (v.size() % 2 != 0)
    {
        struggler.push_back(*(v.end() - 1));
        v.erase(v.end() - 1);
    }
    if (!v.empty())
    {
        while ((i + 1) < v.size())
        {
            pairdeque.push_back(std::make_pair(v[i], v[i + 1]));
            if (v[i] < v[i + 1])
                std::swap(pairdeque.back().first, pairdeque.back().second);
            i += 2;
        }
        sorting(pairdeque, 0);
        for (size_t i = 0; i < pairdeque.size(); i++)
        {
            mainChain.push_back(pairdeque[i].first);
            pend.push_back(pairdeque[i].second);
        }
        mainChain.insert(mainChain.begin(), pend[0]);

        std::deque<int> jacobsthal;
        jacobsthal.push_back(0);
        jacobsthal.push_back(1);
        i = 1;
        j = pend.size();
        while (1)
        {
            if ((jacobsthal[i] + (2 * jacobsthal[i - 1])) > j)
                break ;
            jacobsthal.push_back(jacobsthal[i] + (2 * jacobsthal[i - 1]));
            i++;
        }
        while (j >= 0)
        {
            if (std::find(jacobsthal.begin(), jacobsthal.end(), j) == jacobsthal.end())
                jacobsthal.push_back(j);
            j--;
        }
        for (size_t i = 3; i < jacobsthal.size(); i++)
        {
            it = std::lower_bound(mainChain.begin(), mainChain.end(), pend[jacobsthal[i]-1]);
            mainChain.insert(it, pend[jacobsthal[i]-1]);
        }
    }
    if (!struggler.empty())
    {
        it = std::lower_bound(mainChain.begin(), mainChain.end(), struggler[0]);
        mainChain.insert(it, struggler[0]);
    }
    v = mainChain;
}

void Pmergeme(std::vector<int> &v) { // vector
    std::vector<int> struggler;
    std::vector<int> mainChain;
    std::vector<int> pend;
    std::vector<std::pair<int, int> > pairVector;
    std::vector<int>::iterator it;
    size_t i = 0;
    int j = 0;
    
    if (v.size() % 2 != 0)
    {
        struggler.push_back(*(v.end() - 1));
        v.erase(v.end() - 1);
    }
    if (!v.empty())
    {
        while ((i + 1) < v.size())
        {
            pairVector.push_back(std::make_pair(v[i], v[i + 1]));
            if (v[i] < v[i + 1])
                std::swap(pairVector.back().first, pairVector.back().second);
            i += 2;
        }
        sorting(pairVector, 0);
        for (size_t i = 0; i < pairVector.size(); i++)
        {
            mainChain.push_back(pairVector[i].first);
            pend.push_back(pairVector[i].second);
        }
        mainChain.insert(mainChain.begin(), pend[0]);

        std::vector<int> jacobsthal;
        jacobsthal.push_back(0);
        jacobsthal.push_back(1);
        i = 1;
        j = pend.size();
        while (1)
        {
            if ((jacobsthal[i] + (2 * jacobsthal[i - 1])) > j)
                break ;
            jacobsthal.push_back(jacobsthal[i] + (2 * jacobsthal[i - 1]));
            i++;
        }
        while (j >= 0)
        {
            if (std::find(jacobsthal.begin(), jacobsthal.end(), j) == jacobsthal.end())
                jacobsthal.push_back(j);
            j--;
        }
        for (size_t i = 3; i < jacobsthal.size(); i++)
        {
            it = std::lower_bound(mainChain.begin(), mainChain.end(), pend[jacobsthal[i]-1]);
            mainChain.insert(it, pend[jacobsthal[i]-1]);
        }
    }
    if (!struggler.empty())
    {
        it = std::lower_bound(mainChain.begin(), mainChain.end(), struggler[0]);
        mainChain.insert(it, struggler[0]);
    }
    v = mainChain;
}