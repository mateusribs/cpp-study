#include "Content.hpp"
#include <string>

unsigned int Content::nextId{0};

Content::Content(std::string description, unsigned short workloadContent)
    :description{description}, workloadContent{workloadContent}, id{Content::nextId} {
        Content::nextId++;
};

std::string& Content::getDescription() {
    return description;
}

unsigned short Content::getWorkloadContent() {
    return workloadContent;
}

unsigned int Content::getId() {
    return id;
}
