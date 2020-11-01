#include "about_window.h"

#include "widgets.h"
#include "containers.h"

#include <optional>
#include <sstream>

AboutWindow::AboutWindow() {
    std::stringstream text;

    text << "DataRefTool\nby Lee Baker\n\nhttps://datareftool.com";

    std::shared_ptr<Widget11Text> text_widget = std::make_shared<Widget11Text>();

    text_widget->setText(text.str());

    std::shared_ptr<SingleAxisLayoutContainer> window_vertical_container = std::make_shared<SingleAxisLayoutContainer>(SingleAxisLayoutContainer::LayoutAxis::VERTICAL);
    window_vertical_container->add(text_widget, true, true);

    setTitle("About DataRefTool");
    setTopLevelWidget(window_vertical_container);
    setWindowSize({200, 100});
    setWindowCentered();
}
