#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:

        MateriaSource( void );
        ~MateriaSource( void );
        MateriaSource( MateriaSource const &other );
        MateriaSource   &operator=( MateriaSource const &other );

        void        learnMateria( AMateria *mx );
        AMateria    *createMateria( std::string const &type );

    private:

        AMateria    *_knownMaterias[4];

};

#endif
