#include <Geode/Geode.hpp>
#include <Geode/modify/RewardUnlockLayer.hpp>

using namespace geode::prelude;

class $modify(RewardUnlockLayer) {
	bool canUnlockChest(int p0) {
		// Log to the console so we know the hack is active
		log::info("OpenChests: Bypassing key check for chest ID {}", p0);
		return true; 
	}
};
