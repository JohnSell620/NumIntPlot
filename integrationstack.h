/**
		integrationstack.h
		Description: Implements a linked list to store integrand history.

		@author Johnny Sellers
		@version 0.1 05/30/2017
*/
#ifndef INTEGRATIONSTACK_H
#define INTEGRATIONSTACK_H
#include <QList>
#include <QString>


struct Integration {

    Integration(QString integ, QString intOrd, QString a, QString b,
                QString g1, QString g2, QString h1, QString h2)
    {
        this->integrand = integ;
        this->integrationOrder = intOrd;
        this->ol = a;
        this->ou = b;
        this->ml = g1;
        this->mu = g2;
        this->il = h1;
        this->iu = h2;
    }

    Integration() {}

    QString integrand, integrationOrder, ol, ou, ml, mu, il, iu;

    QString expression() {
        return integrand;
    }
    QString diffOrder() {
        return integrationOrder;
    }
    QString outerLower() {
        return ol;
    }
    QString outerUpper() {
        return ou;
    }
    QString middleLower() {
        return ml;
    }
    QString middleUpper() {
        return mu;
    }
    QString innerLower() {
        return il;
    }
    QString innerUpper() {
        return iu;
    }

};


template<class Integration>
class IntegrationStack {
public:

    void prepend(Integration integ) { container.prepend(integ); }
    void append(Integration integ)  { container.append(integ); }
    Integration takeFirst() { return container.takeFirst(); }
    Integration takeLast()  { return container.takeLast(); }
    int size() { return container.size(); }

private:
    Integration *integObject;
    QList<Integration> container;
};

#endif // INTEGRATIONSTACK_H
