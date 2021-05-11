#ifndef GPIOACCESS_H
#define GPIOACCESS_H

#include <QObject>

class QProcess;


class gpioAccess : public QObject
{
    Q_OBJECT
public:
    explicit gpioAccess(QObject *parent = nullptr);

public slots:
    void executeGPIO15ON();
     void executeGPIO15off();
      void executeGPIO50ON();
       void executeGPIO50off();

signals:

private:
    QProcess *process;
    const int led1   = 15; // Red LED

};

#endif // GPIOACCESS_H
