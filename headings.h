#ifndef HEADINGS_H
#define HEADINGS_H

#include<QObject>
#include<QString>

class Headings : public QObject{
    Q_OBJECT

    Q_PROPERTY(QString message
               READ message
               WRITE setMessage
               NOTIFY messageChanged)

    public:
    explicit Headings(QObject *parent = nullptr);
    QString message() const;
    void setMessage(const QString &msg);
    Q_INVOKABLE void printMessage();

    signals:
    void messageChanged();

    private:
    QString m_message;

};

#endif // HEADINGS_H
