#include <stdio.h> 
struct Point { 
        int x; 
        int y; 
}; 
struct Point addPoints(struct Point p1, struct Point p2) { 
        struct Point result; 
        result.x = p1.x + p2.x; 
        result.y = p1.y + p2.y; 
        return result; 
} 
int main() { 
struct Point p1 = {10, 20}; 
struct Point p2 = {5, 15}; 
struct Point p3 = addPoints(p1, p2); 
printf("p3.x = %d, p3.y = %d\n", p3.x, p3.y);  
return 0; 
} 
