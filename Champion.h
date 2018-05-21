#pragma once
#include "Player.h"


class Champion: public Player {
public:
	const string name() const override { return "Inbar&Meytal"; }
	const Coordinate play(const Board& board) override;
};