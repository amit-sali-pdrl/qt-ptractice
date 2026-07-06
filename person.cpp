#include "person.h"

Person::Person(QObject *parent): QObject(parent)
{
    m_name = "John Doe";
}

QString Person::name() const
{
    return m_name;
}

void Person::setName(const QString &newName){
    if(m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

void Person::changeName() {
    if (m_name == "John Doe") {
        setName("Jane Doe");
    } else {
        setName("John Doe");
    }
}
