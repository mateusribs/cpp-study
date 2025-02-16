#ifndef CONTENT_HPP
#define CONTENT_HPP

#include <string>

class Content {
    public:
        Content(std::string description, unsigned short workloadContent);

        std::string& getDescription();
        unsigned short getWorkloadContent();
        unsigned int getId();
        
    private:
        static unsigned int nextId;
        std::string description;
        unsigned short workloadContent;
        unsigned int id;
};

#endif