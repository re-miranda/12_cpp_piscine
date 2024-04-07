#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    // std::cout << "MateriaSource Default Constructor Called" << std::endl;
    for(int i = 0; i < 4; i++) {
        this->_knownMaterias[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
    for(int i = 0; i < 4; i++) {
        this->_knownMaterias[i] = other._knownMaterias[i]->clone();
    }
    return ;
}

MateriaSource   &MateriaSource::operator=( MateriaSource const &other ) {
    AMateria    *swap;
    for(int i = 0; i < 4; i++) {
        swap = this->_knownMaterias[i];
        this->_knownMaterias[i] = other._knownMaterias[i]->clone();
        if (swap)
            delete(swap);
    }
    return (*this);
}

void        MateriaSource::learnMateria( AMateria *mx ) {
    for(int i = 0; i < 4; i++) {
        if (this->_knownMaterias[i] != NULL)
            continue ;
        this->_knownMaterias[i] = mx;
        return ;
    }
    return ;
}

AMateria    *MateriaSource::createMateria( std::string const &type ) {
    // std::cout << "MateriaSource CreateMateria Called" << std::endl;
    for(int i = 3; i >= 0; i--) {
        // std::cout << "MateriaSource loop:" << i << std::endl;
        if (this->_knownMaterias[i] == NULL)
            continue ;
        // std::cout << "MateriaSource type at pos:" << this->_knownMaterias[i]->getType() << " vs type:" << type << std::endl;
        if (this->_knownMaterias[i]->getType() == type)
            return (this->_knownMaterias[i]->clone());
    }
    return (0);
}

MateriaSource::~MateriaSource( void ) {
    for(int i = 0; i < 4; i++) {
        if (this->_knownMaterias[i])
            delete(this->_knownMaterias[i]);
    }
    return ;
}
