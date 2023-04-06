#ifndef MENU_H
#define MENU_H

#include "Animation.h"
#include "Cursor.h"
#include "Box.h"

class Menu : public UIElement {
    public:
        Menu();

        Menu(int x, int y, int width, int height, int menuSize);
        

        Menu(int x, int y, int width, int height, int menuSize, std::vector <UIElement*> subElements, std::vector <UIElement*> linkElements);
        
        void init();
        void activate();
        void deactivate();

        void insertElement(UIElement* targetElement, UIElement* linkElement);

        bool moveCursorUp();
        bool moveCursorDown();

        bool moveMenuUp();
        bool moveMenuDown();

        int getMenuPos();

        void scrollUp();

        void scrollDown();

        void drawScrollBar();

        void clear(); 

        void enter();

        void draw();


        //void showMenu(uint8_t dir); // 0 up 1 right 2 down 3 left


        void update();

    private:
        int cursorPos, menuPos;
        int menuSize;
        Cursor cursor;
        Box scrollBar;
        std::vector <UIElement*> linkElements;
        
};

#endif