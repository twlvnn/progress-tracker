#include <gtkmm/application.h>
#include <app_info.h>
#include <iostream>
#include "app_window.h"


int main(int argc, char *argv[]) {
	std::cout << "Progress Tracker " << MAJOR_VERSION << "." << MINOR_VERSION << std::endl;
	auto app = Gtk::Application::create("com.moura.progress-tracker");
	return app->make_window_and_run<ApplicationWindow>(argc, argv);
}