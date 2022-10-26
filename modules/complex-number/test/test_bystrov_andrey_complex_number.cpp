// Copyright 2022 Bystrov Andrey

#include <gtest/gtest.h>

#include <string>

#include "include/complex_number.h"

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, DefaultConstructor) {
  ASSERT_NO_THROW(ComplexNumber());
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, ParameterizedConstructor) {
  ASSERT_NO_THROW(ComplexNumber(1.0, 2.0));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, CopyConstructor) {
  ASSERT_NO_THROW(ComplexNumber(ComplexNumber()));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, AssignmentOperator) {
  auto origin = ComplexNumber(1.0, 2.0);
  auto copy = ComplexNumber();
  ASSERT_NO_THROW(copy = origin);
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, EqualityOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(1.0, 2.0);
  ASSERT_EQ(first, second);
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, CopyEqualsToOrigin) {
  auto origin = ComplexNumber(1.0, 2.0);
  auto copy = origin;
  ASSERT_EQ(origin, copy);
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, InequalityOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  ASSERT_NE(first, second);
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, AdditionOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  auto product = first + second;
  ASSERT_EQ(product, ComplexNumber(4.0, 6.0));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, SubtractionOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  auto product = first - second;
  ASSERT_EQ(product, ComplexNumber(-2.0, -2.0));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, MultiplicationOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  auto product = first * second;
  ASSERT_EQ(product, ComplexNumber(-5.0, 10.0));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, DivisionOperator) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber(3.0, 4.0);
  auto product = first / second;
  ASSERT_EQ(product, ComplexNumber(0.44, 0.08));
}

TEST(BYSTROV_ANDREY_COMPLEX_NUMBER_TEST, DivisionByZeroError) {
  auto first = ComplexNumber(1.0, 2.0);
  auto second = ComplexNumber();
  ASSERT_THROW(first / second, std::string);
}
