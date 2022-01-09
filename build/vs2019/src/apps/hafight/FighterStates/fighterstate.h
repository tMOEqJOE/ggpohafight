#pragma once
#ifndef _FIGHTERSTATES_H_
#define _FIGHTERSTATES_H_

#include "../Fighter/basefighter.h"
#include "../Fighter/inputinterpreter.h"

namespace Player {

    class BaseFighter;

    class FighterState {
    public:
        FighterState();
        virtual ~FighterState();
        virtual FighterState* HandleInput(BaseFighter& fighter, InputAction input) = 0;
        virtual void Enter(BaseFighter& fighter);
        virtual void Update(BaseFighter& fighter);
        virtual void LoadState(int frame);

    protected:
        int _frame = 0; // Which frame in this state are we in? count from 0 to x
    };
}

#endif