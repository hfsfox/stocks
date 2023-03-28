/*
 * Copyright 2023, Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef SEARCHFIELD_H
#define SEARCHFIELD_H

#include <SupportDefs.h>
#include <TextControl.h>

class SearchFieldControl : public BTextControl {
public:
    SearchFieldControl();

    void Init();

    void AttachedToWindow() override;

    void MessageReceived(BMessage *message) override;

private:
};

enum SearchFieldMessages {
    M_SET_STOCK = 'setS',
    M_START_SHARES_SEARCH = 'MSSS'
};

static const char *const SEARCH_TERM = "search terms";
#endif // SEARCHFIELD_H
