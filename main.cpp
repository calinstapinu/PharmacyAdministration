#include "UI/Ui.h"
#include "Controller/Controller.h"
#include "Repository/Repo.h"
#include "Tests/tests.h"

int main() {
    runTests();
    Repository repo;
    Controller ctrl(repo);
    UI ui(ctrl);
    ui.start();
    return 0;
}
