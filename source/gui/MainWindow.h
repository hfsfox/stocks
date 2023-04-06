#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <Window.h>
#include "stocksPanel/StocksPanelView.h"
#include "utils/DelayedQueryTimer.h"

class MainWindow : public BWindow {
public:
    MainWindow();

    ~MainWindow() override;

    void SetWindowSizes();

    void Init();

    void Show() override;

    void MessageReceived(BMessage *message) override;

    /**
     * Handles the completed api request
     * @param requestId
     */
    void ResultHandler(int requestId);

    /**
     * Handles a change in the search field. Starts a new search for shares.
     * @param searchTerm
     */
    void RequestForSearch(BString &searchTerm);

    bool QuitRequested() override;

private:
    StocksPanelView *stocksPanelView;
    BView *chartView;
    DelayedQueryTimer *delayedQueryTimer;
};

#endif