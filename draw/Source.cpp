#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(200, 200), "SFML Works!");
    CircleShape circle(50.f);
    circle.setFillColor(Color(255, 0, 255));
    RectangleShape rect(Vector2f(100, 10));
    rect.setFillColor(Color(255, 255, 25));
    rect.move(15, 15);
    rect.rotate(45);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
         if (event.type == Event::Closed)
            window.close();
        }
        window.display();
        window.draw(circle);
        window.draw(rect);
        }
    }