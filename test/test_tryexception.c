#include "unity.h"
#include "tryexception.h"
#include "CException.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryexception_expect(void)
{
    tryException(2,5);
}

void test_tryexception_area(void)
{
    tryException_Area(5);
}

void test_tryexception_area_neg_radius(void)
{
    tryException_Area(-5);
}