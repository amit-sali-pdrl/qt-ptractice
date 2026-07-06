#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)


public:
    explicit Person(QObject *parent = nullptr);
    QString name() const;  //getter
    void setName(const QString &newName); //setter
    Q_INVOKABLE void changeName();
signals:
    void nameChanged();

private:
    QString m_name;

};

#endif // PERSON_H
