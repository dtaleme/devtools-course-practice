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
