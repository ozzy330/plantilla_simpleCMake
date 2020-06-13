#include "gtest/gtest.h"
#include "Formula.h"

TEST(ConjuntoPruebas, prueba1) {

    //Que sean iguales
    EXPECT_EQ (Formula::hablar(std::string("Hola")),  std::string("Hola"));
}
