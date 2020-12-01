#include <iostream>

#include "AbstractGraphicalComponent.h"
#include "WindowComponent.h"
#include "TextComponent.h"
#include "ButtonComponent.h"
#include "PanelComponent.h"
#include "LineComponent.h"

using namespace std;

int main(int argc, char *argv[]) {
    list <AbstractGraphicalComponent *> all;
    auto mainWindow = new WindowComponent("MainWindow", false, AbstractGraphicalComponent::Point(0,0)
                               , AbstractGraphicalComponent::Point(100,100));
    all.push_back(mainWindow);

    auto text = new TextComponent("Hello World", false, AbstractGraphicalComponent::Point(10,10)
                                            , AbstractGraphicalComponent::Point(15,15));
    all.push_back(text);
    mainWindow->addChild(text);
    text->setParent(mainWindow);

    auto line = new LineComponent(false, AbstractGraphicalComponent::Point(21, 0),
                                   AbstractGraphicalComponent::Point(50, 50));
    all.push_back(line);
    mainWindow->addChild(line);
    line->setParent(mainWindow);

    line->moveOn(1000, 1000);
    line->moveOn(15, 8);

    auto panel = new PanelComponent(true, AbstractGraphicalComponent::Point(10, 10),
                                     AbstractGraphicalComponent::Point(30, 90));
    all.push_back(panel);
    mainWindow->addChild(panel);
    panel->setParent(mainWindow);

    auto button = new ButtonComponent(false, AbstractGraphicalComponent::Point(15, 15),
                                       AbstractGraphicalComponent::Point(20, 79));
    all.push_back(button);
    panel->addChild(button);
    button->setParent(panel);

    mainWindow->print();

    for (auto it = all.begin(); it != all.end(); ++it) {
        delete *it;
    }
    all.clear();

	system("pause");
    return 0;
}
