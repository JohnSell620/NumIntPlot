/*
 *  File: gaussquadrature.cpp
 *  Description: Contains function using a Gauss Quarature rule to
 *  evaluate single, double, and triple integrals.
 *
 *  This file uses the C++ Mathematical Expression Library (ExprTk)
 *  by Arash Partow. Visit https://github.com/ArashPartow/exprtk for
 *  documentation.
 *
 *  @version 0.1 09/20/2017
 */
#include "exprtk.hpp"
#include <string>
#include <iostream>


double gaussquadrature(std::string integrand, std::string integrationOrder,
                       std::string ol, std::string ou, std::string ml,
                       std::string mu, std::string il, std::string iu)
{

    std::string expression_string = integrand;
    std::string expression_string_a;
    std::string expression_string_b;
    std::string expression_string_g1;
    std::string expression_string_g2;
    std::string expression_string_h1;
    std::string expression_string_h2;
    std::string intOrd;


    if (!integrationOrder.compare("dxdydz")) {
        expression_string_a = il;
        expression_string_b = iu;
        expression_string_g1 = ml;
        expression_string_g2 = mu;
        expression_string_h1 = ol;
        expression_string_h2 = ou;
        intOrd = "dxdydz";
    }
    else if (!integrationOrder.compare("dxdzdy")) {
        expression_string_a = il;
        expression_string_b = iu;
        expression_string_g1 = ol;
        expression_string_g2 = ou;
        expression_string_h1 = ml;
        expression_string_h2 = mu;
        intOrd = "dxdzdy";
    }
    else if (!integrationOrder.compare("dydxdz")) {
        expression_string_a = ml;
        expression_string_b = mu;
        expression_string_g1 = il;
        expression_string_g2 = iu;
        expression_string_h1 = ol;
        expression_string_h2 = ou;
        intOrd = "dydxdz";
    }
    else if (!integrationOrder.compare("dydzdx")) {
        expression_string_a = ol;
        expression_string_b = ou;
        expression_string_g1 = il;
        expression_string_g2 = iu;
        expression_string_h1 = ml;
        expression_string_h2 = mu;
        intOrd = "dydzdx";
    }
    else if (!integrationOrder.compare("dzdxdy")) {
        expression_string_a = ml;
        expression_string_b = mu;
        expression_string_g1 = ol;
        expression_string_g2 = ou;
        expression_string_h1 = il;
        expression_string_h2 = iu;
        intOrd = "dzdxdy";
    }
    else if (!integrationOrder.compare("dzdydx")) {
        expression_string_a = ol;
        expression_string_b = ou;
        expression_string_g1 = ml;
        expression_string_g2 = mu;
        expression_string_h1 = il;
        expression_string_h2 = iu;
        intOrd = "dzdydx";
    }
    else {
        expression_string_a = il;
        expression_string_b = iu;
        expression_string_g1 = ml;
        expression_string_g2 = mu;
        expression_string_h1 = ol;
        expression_string_h2 = ou;
        intOrd = "dxdydz";
    }


    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double>     expression_t;
    typedef exprtk::parser<double>             parser_t;

    double a, b, g1, g2, h1, h2, x, y, z, f;

    symbol_table_t symbol_table;
    symbol_table.add_variable("a", a);
    symbol_table.add_variable("b", b);
    symbol_table.add_variable("g1", g1);
    symbol_table.add_variable("g2", g2);
    symbol_table.add_variable("h1", h1);
    symbol_table.add_variable("h2", h2);
    symbol_table.add_variable("x", x);
    symbol_table.add_variable("y", y);
    symbol_table.add_variable("z", z);
    symbol_table.add_constants();

    expression_t expression_a;
    expression_t expression_b;
    expression_t expression_g1;
    expression_t expression_g2;
    expression_t expression_h1;
    expression_t expression_h2;
    expression_t expression;

    expression_a.register_symbol_table(symbol_table);
    expression_b.register_symbol_table(symbol_table);
    expression_g1.register_symbol_table(symbol_table);
    expression_g2.register_symbol_table(symbol_table);
    expression_h1.register_symbol_table(symbol_table);
    expression_h2.register_symbol_table(symbol_table);
    expression.register_symbol_table(symbol_table);

    parser_t parser_a;
    parser_t parser_b;
    parser_t parser_g1;
    parser_t parser_g2;
    parser_t parser_h1;
    parser_t parser_h2;
    parser_t parser_ex;

    parser_a.compile(expression_string_a, expression_a);
    parser_b.compile(expression_string_b, expression_b);
    parser_g1.compile(expression_string_g1, expression_g1);
    parser_g2.compile(expression_string_g2, expression_g2);
    parser_h1.compile(expression_string_h1, expression_h1);
    parser_h2.compile(expression_string_h2, expression_h2);
    parser_ex.compile(expression_string, expression);


    //the roots of 1st six orthogonal legendre polynomials
    double roots[] = {-.906179845938664, -.5384693101056832, 0, .5384693101056832, .906179845938664};

    //Gaussian weights
    double weights[] = {.2369268850561887, .4786286704993670, .5688888888888889, .4786286704993670, .2369268850561887};

    a = expression_a.value();
    b = expression_b.value();
    double q1, q2, q3 = 0;

    for (int k = 0; k < 5; ++k) {
        x = (b - a) * (roots[k] + 1) / 2 + a;
        q2 = 0;
        g1 = expression_g1.value();
        g2 = expression_g2.value();

        for(int j = 0; j < 5; ++j) {
            y = (g2 - g1) * (roots[j] + 1) / 2 + g1;
            q1 = 0;
            h1 = expression_h1.value();
            h2 = expression_h2.value();

            for(int i = 0; i < 5; ++i) {
                z = (h2 - h1) * (roots[i] + 1) / 2 + h1;
                f = expression.value();
                q1 = q1 + weights[i] * f;
            }

            q2 = q2 + weights[j] * (h2 - h1) * q1 / 2;
        }

        q3 = q3 + weights[k] * (g2 - g1) * q2 / 2;
    }

    return q3 * (b - a) / 2;
}
