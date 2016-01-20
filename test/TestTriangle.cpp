#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Triangle.h"
#include "float.h"

using shapes::Triangle;

int getPerimeter(int side1, int side2, int side3){

    return side1 + side2 + side3 ;
}
double
getArea(int side1, int side2, int side3)  {
    // Here we use Heron's formula to compute the area
    int halfPerimeter = (side1 + side2 + side3)/2;
    double radicand = halfPerimeter
                      * (halfPerimeter - side1)
                      * (halfPerimeter - side2)
                      * (halfPerimeter - side3);
    return sqrt(radicand);
}


TEST(TriangleTests, testEquilateralPerimeter){

    Triangle tri(10, 10, 10);
    int perimeterExpected = tri.getPerimeter();
    int actualPerimeter = getPerimeter(10, 10, 10);
    EXPECT_EQ(perimeterExpected, actualPerimeter);
}

TEST(TriangleTests, testIsoscelesPerimeter){
    Triangle tri ( 10, 6, 6);
    int perimeterExpected = tri.getPerimeter();
    int perimeterActual = getPerimeter(10, 6, 6);
    EXPECT_EQ(perimeterExpected, perimeterActual);
}
TEST(TriangleTests, testScalenePerimeter){
    Triangle tri( 5, 4, 3 );
    int perimeterExpected = tri.getPerimeter();
    int acutualPerimeter = getPerimeter(5, 4, 3);
    EXPECT_EQ(perimeterExpected, acutualPerimeter);
}

TEST(TriangleTests, testEquilateralTriangleArea){

    //Equilateral
     Triangle tri(10,10,10);
    double areaTest = tri.getArea();
    double equilArea = getArea(10, 10, 10);
//    std::cout << "areaTest: " << areaTest <<std::endl;
//    std::cout << "equilArea: " << equilArea << std::endl;
    EXPECT_NEAR(areaTest, equilArea, DBL_EPSILON);
}

TEST(TriangleTests, testIsosocelesTriangleArea){
    //ISOSCELES
    Triangle tri(10, 6, 6);
    double areaTest = tri.getArea();
    double areaIsoseles = getArea(10, 6, 6);
//    std::cout << "areaTest: "<< areaTest << std::endl;
//    std::cout << "areaIsosoceles: "<< areaIsoseles <<std::endl;
    EXPECT_NEAR(areaTest, areaIsoseles, DBL_EPSILON);
}

TEST(TriangleTests, testScaleneTriangleArea){
    //SCALENE
    Triangle tri(5, 4 ,3 );
    double areaTest = tri.getArea();
    double areaSCALENE = getArea(3,4,5);
//    std::cout<< "areaTest: " << areaTest << std::endl;
//    std::cout<< "areaScalene: "<< areaSCALENE << std::endl;
    EXPECT_NEAR(areaTest, areaSCALENE, DBL_EPSILON);
}


TEST(TriangleTests, testEquilateralGetKind){
    //Equilateral
    Triangle tri ( 6, 6, 6);
    const enum Triangle::Kind kindActual = Triangle::Kind::EQUILATERAL;
    EXPECT_EQ(tri.getKind(), kindActual);
}

TEST(TriangleTests, testIsoscelesGetKind){
    Triangle tri (10, 6, 6);
    const enum Triangle::Kind kindActual = Triangle::Kind::ISOSCELES;
    EXPECT_EQ(tri.getKind(), kindActual);
}

TEST(TriangleTests, testScaleneGetKind){
    Triangle tri ( 5,4,3);
    const enum Triangle::Kind kindActual = Triangle::Kind::SCALENE;
    EXPECT_EQ(tri.getKind(), kindActual);
}
