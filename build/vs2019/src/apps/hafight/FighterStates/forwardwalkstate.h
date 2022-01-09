#pragma once
#ifndef _FORWARDWALKSTATE_H_
#define _FORWARDWALKSTATE_H_

#include "fighterstate.h"

namespace Player {
    class ForwardWalkState : public FighterState {
    public:
        ForwardWalkState();
        ~ForwardWalkState();
        FighterState* HandleInput(BaseFighter& fighter, InputAction input) override;
        void Enter(BaseFighter& fighter) override;
        void Update(BaseFighter& fighter) override;
        void LoadState(int frame) override;
    protected:
        int _forwardWalkSpeed;
    };
}

#endif