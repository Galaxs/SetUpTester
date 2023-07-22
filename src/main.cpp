#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML VertexArray Example");

    // Create a vertex array
    sf::VertexArray triangle(sf::Triangles, 3);

    // Set the position and color of each vertex
    triangle[0].position = sf::Vector2f(200.f, 200.f);
    triangle[0].color = sf::Color::Red;

    triangle[1].position = sf::Vector2f(400.f, 200.f);
    triangle[1].color = sf::Color::Green;

    triangle[2].position = sf::Vector2f(300.f, 400.f);
    triangle[2].color = sf::Color::Blue;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(triangle);
        window.display();
    }

    return 0;
}
