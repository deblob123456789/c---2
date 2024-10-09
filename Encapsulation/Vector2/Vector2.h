// correction exos 1
// 
// 
//  Vector2.h
//  point
//
//  Created by Maxine Constantinian on 09/10/2024.
//

#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <string>

class Vector2 {
    float x;
    float y;
    
public:
    Vector2();
    Vector2(float _x, float _y);
    
    float GetX() const;
    float GetY() const;
    
    void SetX(float _x);
    void SetX(std::string _xStr);
    
    void SetY(float _y);
    
    
    Vector2 operator+(const Vector2& _rigth);
};

#endif
