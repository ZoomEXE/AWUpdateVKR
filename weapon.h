#ifndef WEAPON_H
#define WEAPON_H

#include <QObject>

class Weapon : public QObject
{
    Q_OBJECT
public:
    explicit Weapon(QObject *parent = nullptr);

signals:

};

#endif // WEAPON_H
