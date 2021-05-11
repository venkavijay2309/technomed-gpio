#include "gpioaccess.h"
#include "QProcess"
#include <QDebug>
#include "libsoc_gpio.h"
#include "libsoc_debug.h"
#include "libsoc_board.h"
gpioAccess::gpioAccess(QObject *parent) : QObject(parent)
{
    process = new QProcess(this);
    process->waitForFinished();



}

void gpioAccess::executeGPIO15ON()
{
    gpio *gpio_led1 = libsoc_gpio_request(led1, LS_GPIO_SHARED);

    if (gpio_led1 == NULL) {
        printf("Failed gpio_led1 request.\n");
        exit(EXIT_FAILURE);
    }
    libsoc_gpio_set_direction(gpio_led1, OUTPUT);
    if (libsoc_gpio_get_direction(gpio_led1) != OUTPUT) {
        printf("Failed to set direction of gpio_led1\n");
        exit(EXIT_FAILURE);
    }
    libsoc_gpio_set_level(gpio_led1, HIGH);
}

void gpioAccess::executeGPIO15off()
{
    gpio *gpio_led1 = libsoc_gpio_request(led1, LS_GPIO_SHARED);

    if (gpio_led1 == NULL) {
        printf("Failed gpio_led1 request.\n");
        exit(EXIT_FAILURE);
    }
    libsoc_gpio_set_direction(gpio_led1, OUTPUT);
    if (libsoc_gpio_get_direction(gpio_led1) != OUTPUT) {
        printf("Failed to set direction of gpio_led1\n");
        exit(EXIT_FAILURE);
    }
    libsoc_gpio_set_level(gpio_led1, LOW);
}

void gpioAccess::executeGPIO50ON()
{
    process->start();

    connect(process,
            static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(
                &QProcess::finished),
            [=](int exitCode) {
                qDebug() << "Fusion Dependency Checker Script Exit Code"
                         << exitCode;
                if (exitCode == 0) {
                    qDebug() <<"success";
                } else{
                    qDebug() <<"falied";
                }
            });
}

void gpioAccess::executeGPIO50off()
{
    process->start();

    connect(process,
            static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(
                &QProcess::finished),
            [=](int exitCode) {
                qDebug() << "Fusion Dependency Checker Script Exit Code"
                         << exitCode;
                if (exitCode == 0) {
                    qDebug() <<"success";
                } else{
                    qDebug() <<"falied";
                }
            });
}
