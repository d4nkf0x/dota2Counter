#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
	std::string heroes[] = {"abaddon",
					  "alchemist",
					  "ancient-apparition",
					  "anti-mage",
					  "arc-warden",
					  "axe",
					  "bane",
					  "batrider",
					  "beastmaster",
					  "bloodseeker",
					  "bounty-hunter",
					  "brewmaster",
					  "bristleback",
					  "broodmother",
					  "centaur-warrunner",
					  "chaos-knight",
					  "chen",
					  "clinkz",
					  "clockwerk",
					  "crystal-maiden",
					  "dark-seer",
					  "dark-willow",
					  "dawnbreaker",
					  "dazzle",
					  "death-prophet",
					  "disruptor",
					  "doom",
					  "dragon-knight",
					  "drow-ranger",
					  "earth-spirit",
					  "earthshaker",
					  "elder-titan",
					  "ember-spirit",
					  "enchantress",
					  "enigma",
					  "faceless-void",
					  "grimstroke",
					  "gyrocopter",
					  "huskar",
					  "invoker",
					  "io",
					  "jakiro",
					  "juggernaut",
					  "keeper-of-the-light",
					  "kunkka",
					  "legion-commander",
					  "leshrac",
					  "lich",
					  "lifestealer",
					  "lina",
					  "lion",
					  "lone-druid",
					  "luna",
					  "lycan",
					  "magnus",
					  "mars",
					  "medusa",
					  "meepo",
					  "mirana",
					  "monkey-king",
					  "morphling",
					  "naga-siren",
					  "natures-prophet",
					  "necrophos",
					  "night-stalker",
					  "nyx-assassin",
					  "ogre-magi",
					  "omniknight",
					  "oracle",
					  "outworld-devourer",
					  "pangolier",
					  "phantom-assassin",
					  "phantom-lancer",
					  "phoenix",
					  "puck",
					  "pudge",
					  "pugna",
					  "queen-of-pain",
					  "razor",
					  "riki",
					  "rubick",
					  "sand-king",
					  "shadow-demon",
					  "shadow-fiend",
					  "shadow-shaman",
					  "silencer",
					  "skywrath-mage",
					  "slardar",
					  "slark",
					  "snapfire",
					  "sniper",
					  "spectre",
					  "spirit-breaker",
					  "storm-spirit",
					  "sven",
					  "techies",
					  "templar-assassin",
					  "terrorblade",
					  "tidehunter",
					  "timbersaw",
					  "tinker",
					  "tiny",
					  "treant-protector",
					  "troll-warlord",
					  "tusk",
					  "underlord",
					  "undying",
					  "ursa",
					  "vengeful-spirit",
					  "venomancer",
					  "viper",
					  "visage",
					  "void-spirit",
					  "warlock",
					  "weaver",
					  "windranger",
					  "winter-wyvern",
					  "witch-doctor",
					  "wraith-king",
					  "zeus"};
	std::string counters[] = {"'Ancient Apparition', 'Axe', 'Brewmaster', 'Doom', 'Lina', 'Outworld Destroyer', 'Shadow Demon'","'Ancient Apparition', 'Enchantress', 'Invoker', 'Kunkka', 'Lifestealer', 'Necrophos', 'Slardar', 'Slark', 'Ursa', 'Ember Spirit', 'Razor'","'Anti-Mage', 'Brewmaster', 'Lycan', 'Mirana', 'Oracle', 'Phantom Lancer', 'Phoenix', 'Terrorblade', 'Viper', 'Void Spirit', 'Weaver'","'Axe', 'Bane', 'Terrorblade', 'Disruptor', 'Doom', 'Grimstroke', 'Legion Commander', 'Meepo', 'Night Stalker', 'Outworld Destroyer', 'Puck', 'Phantom Lancer'","'Broodmother', 'Anti-Mage', 'Axe', 'Bristleback', 'Chaos Knight', 'Meepo', 'Naga Siren', 'Riki', 'Phantom Lancer'","'Doom', 'Jakiro', 'Lifestealer', 'Necrophos', 'Outworld Destroyer', 'Phoenix', 'Pugna', 'Shadow Demon', 'Spectre', 'Timbersaw', 'Ursa', 'Undying'","'Abaddon', 'Pudge', 'Luna', 'Rubick', 'Slark'","'Abaddon', 'Kunkka', 'Legion Commander', 'Nyx Assassin', 'Oracle', 'Tidehunter', 'Ursa', 'Vengeful Spirit', 'Venomancer', 'Weaver', 'Slark'","'Abaddon', 'Crystal Maiden', 'Enchantress', 'Earthshaker', 'Keeper of the Light', 'Oracle', 'Timbersaw', 'Winter Wyvern'","'Abaddon', 'Dazzle', 'Ember Spirit', 'Faceless Void', 'Medusa', 'Morphling', 'Omniknight', 'Storm Spirit', 'Techies', 'Tinker', 'Troll Warlord', 'Underlord'","'Bloodseeker', 'Death Prophet', 'Luna', 'Rubick', 'Slardar', 'Spectre', 'Spirit Breaker', 'Venomancer', 'Viper', 'Zeus'","'Bane', 'Death Prophet', 'Lion', 'Outworld Destroyer', 'Shadow Shaman', 'Skywrath Mage'","'Anti-Mage', 'Doom', 'Faceless Void', 'Grimstroke', 'Hoodwink', 'Legion Commander', 'Lich', 'Lion', 'Necrophos', 'Outworld Destroyer', 'Razor', 'Silencer'","'Bristleback', 'Dark Seer', 'Dragon Knight', 'Legion Commander', 'Lina', 'Meepo', 'Necrophos', 'Pangolier', 'Sand King', 'Sven', 'Tidehunter', 'Timbersaw'","'Clockwerk', 'Disruptor', 'Kunkka', 'Lifestealer', 'Necrophos', 'Nyx Assassin', 'Templar Assassin'","'Anti-Mage', 'Abaddon', 'Tinker', 'Axe', 'Lion', 'Brewmaster', 'Dragon Knight', 'Earthshaker', 'Enigma', 'Jakiro', 'Lich', 'Magnus'","'Crystal Maiden', 'Enchantress', 'Earthshaker', 'Legion Commander', 'Sven', 'Lina', 'Luna', 'Monkey King', 'Venomancer', 'Jakiro', 'Sand King', 'Timbersaw'","'Bloodseeker', 'Bounty Hunter', 'Doom', 'Enchantress', 'Lion', 'Morphling', 'Slardar', 'Spectre', 'Spirit Breaker', 'Treant Protector', 'Winter Wyvern', 'Zeus'","'Anti-Mage', 'Chen', 'Clinkz', 'Dazzle', 'Disruptor', 'Ember Spirit', 'Huskar', 'Juggernaut', 'Lifestealer', 'Morphling', 'Omniknight', 'Phantom Lancer'","'Bounty Hunter', 'Bristleback', 'Clockwerk', 'Doom', 'Earth Spirit', 'Jakiro', 'Legion Commander', 'Luna', 'Naga Siren', 'Nyx Assassin', 'Tidehunter', 'Tusk'","'Anti-Mage', 'Bloodseeker', 'Ember Spirit', 'Kunkka', 'Oracle', 'Sniper'","'Anti-Mage', 'Axe', 'Bristleback', 'Drow Ranger', 'Ember Spirit', 'Juggernaut', 'Lifestealer', 'Nyx Assassin', 'Oracle', 'Puck', 'Pudge', 'Riki'","'Viper', 'Nyx Assassin', 'Disruptor', 'Faceless Void'","'Ancient Apparition', 'Axe', 'Naga Siren', 'Outworld Destroyer', 'Phantom Lancer', 'Silencer', 'Doom'","'Ancient Apparition', 'Anti-Mage', 'Doom', 'Legion Commander', 'Omniknight', 'Shadow Fiend'","'Abaddon', 'Kunkka', 'Juggernaut', 'Lifestealer', 'Omniknight', 'Phantom Lancer', 'Pugna', 'Sniper', 'Viper'","'Alchemist', 'Centaur Warrunner', 'Drow Ranger', 'Lifestealer', 'Lone Druid', 'Medusa', 'Necrophos', 'Phantom Lancer', 'Sniper', 'Viper', 'Wraith King'","'Ancient Apparition', 'Bristleback', 'Drow Ranger', 'Lich', 'Necrophos', 'Ursa', 'Outworld Destroyer', 'Razor', 'Timbersaw', 'Viper'","'Faceless Void', 'Tinker', 'Arc Warden', 'Tusk', 'Axe', 'Clockwerk', 'Chaos Knight', 'Huskar', 'Lycan', 'Nyx Assassin', 'Omniknight', 'Phantom Lancer'","'Abaddon', 'Lycan', 'Techies', 'Slark', 'Clockwerk'","'Clockwerk', 'Death Prophet', 'Disruptor', 'Earth Spirit', 'Jakiro', 'Lifestealer', 'Necrophos', 'Outworld Destroyer', 'Puck', 'Razor', 'Skywrath Mage', 'Sniper'","'Brewmaster', 'Clockwerk', 'Lich', 'Lion', 'Sven', 'Juggernaut', 'Enchantress', 'Earthshaker'","'Lion', 'Shadow Fiend', 'Silencer', 'Storm Spirit', 'Faceless Void', 'Omniknight', 'Outworld Destroyer', 'Nyx Assassin', 'Kunkka'","'Razor', 'Broodmother', 'Chen', 'Crystal Maiden', 'Juggernaut', 'Lina', 'Luna', 'Meepo', 'Nyx Assassin', 'Riki', 'Timbersaw', 'Troll Warlord'","'Abaddon', 'Anti-Mage', 'Bloodseeker', 'Bristleback', 'Clinkz', 'Clockwerk', 'Doom', 'Keeper of the Light', 'Luna', 'Medusa', 'Pudge', 'Pugna'","'Abaddon', 'Brewmaster', 'Earth Spirit', 'Monkey King', 'Kunkka', 'Grimstroke', 'Night Stalker', 'Phoenix', 'Pudge', 'Shadow Demon', 'Sven', 'Vengeful Spirit'","'Puck', 'Shadow Demon', 'Centaur Warrunner', 'Sniper', 'Vengeful Spirit'","'Anti-Mage', 'Arc Warden', 'Huskar', 'Faceless Void', 'Juggernaut', 'Lina', 'Lifestealer', 'Omniknight', 'Queen of Pain', 'Timbersaw'","'Abaddon', 'Alchemist', 'Ancient Apparition', 'Axe', 'Bristleback', 'Enchantress', 'Bloodseeker', 'Juggernaut', 'Lifestealer', 'Naga Siren', 'Slardar', 'Ursa'","'Anti-Mage', 'Broodmother', 'Doom', 'Faceless Void', 'Juggernaut', 'Kunkka', 'Lifestealer', 'Night Stalker', 'Nyx Assassin', 'Outworld Destroyer', 'Queen of Pain', 'Silencer'","'Ancient Apparition', 'Bloodseeker', 'Bristleback', 'Clinkz', 'Disruptor', 'Grimstroke', 'Legion Commander', 'Leshrac', 'Lich', 'Luna', 'Phantom Assassin', 'Sniper'","'Anti-Mage', 'Clockwerk', 'Lifestealer', 'Oracle', 'Rubick', 'Silencer', 'Skywrath Mage'","'Axe', 'Bane', 'Chaos Knight', 'Enigma', 'Mars', 'Pugna', 'Omniknight', 'Outworld Destroyer', 'Ursa', 'Pudge', 'Legion Commander', 'Windranger'","'Legion Commander', 'Lifestealer', 'Night Stalker', 'Nyx Assassin'","'Clinkz', 'Ursa', 'Silencer', 'Mirana', 'Phoenix', 'Omniknight', 'Huskar', 'Juggernaut', 'Lifestealer', 'Sniper', 'Outworld Destroyer'","'Abaddon', 'Arc Warden', 'Bane', 'Dazzle', 'Dragon Knight', 'Io', 'Luna', 'Mars', 'Medusa', 'Omniknight', 'Oracle', 'Pangolier'","'Pugna', 'Anti-Mage', 'Clockwerk', 'Lifestealer', 'Nyx Assassin', 'Oracle'","'Anti-Mage', 'Bloodseeker', 'Broodmother', 'Huskar', 'Lycan', 'Natures Prophet', 'Phantom Assassin', 'Queen of Pain', 'Weaver'","'Ancient Apparition', 'Bane', 'Beastmaster', 'Chaos Knight', 'Clinkz', 'Terrorblade', 'Phantom Lancer', 'Slark', 'Ursa', 'Weaver', 'Windranger'","'Anti-Mage', 'Faceless Void', 'Lifestealer', 'Nyx Assassin', 'Phantom Lancer', 'Silencer', 'Slark', 'Spectre', 'Sven', 'Viper', 'Razor'","'Abaddon', 'Lifestealer', 'Puck', 'Rubick', 'Slark', 'Nyx Assassin', 'Tidehunter'","'Phantom Assassin', 'Bristleback', 'Necrophos', 'Grimstroke', 'Outworld Destroyer', 'Underlord', 'Winter Wyvern', 'Lich', 'Tinker', 'Death Prophet', 'Phoenix'","'Bristleback', 'Broodmother', 'Juggernaut', 'Lina', 'Meepo', 'Phantom Lancer', 'Pudge', 'Sniper', 'Slark', 'Techies', 'Tinker', 'Zeus'","'Axe', 'Beastmaster', 'Bloodseeker', 'Bristleback', 'Earthshaker', 'Enigma', 'Enchantress', 'Grimstroke', 'Kunkka', 'Medusa', 'Omniknight', 'Phantom Assassin'","'Alchemist', 'Bloodseeker', 'Disruptor', 'Huskar', 'Jakiro', 'Night Stalker', 'Phoenix', 'Razor', 'Rubick', 'Sniper', 'Spectre', 'Treant Protector'","'Axe', 'Lifestealer', 'Riki', 'Batrider', 'Faceless Void', 'Huskar', 'Lina', 'Necrophos', 'Ogre Magi', 'Outworld Destroyer', 'Pugna', 'Shadow Fiend'","'Anti-Mage', 'Arc Warden', 'Bane', 'Broodmother', 'Invoker', 'Keeper of the Light', 'Nyx Assassin', 'Phantom Lancer', 'Pugna', 'Riki', 'Slark', 'Sniper'","'Axe', 'Earthshaker', 'Elder Titan', 'Ember Spirit', 'Kunkka', 'Lion', 'Mars', 'Monkey King', 'Pangolier', 'Phantom Assassin', 'Sven', 'Techies'","'Abaddon', 'Arc Warden', 'Bloodseeker', 'Lina', 'Lycan', 'Meepo', 'Night Stalker', 'Puck', 'Slark', 'Windranger'","'Batrider', 'Beastmaster', 'Bounty Hunter', 'Brewmaster', 'Clockwerk', 'Dark Willow', 'Disruptor', 'Drow Ranger', 'Earth Spirit', 'Enchantress', 'Enigma', 'Huskar'","'Ancient Apparition', 'Anti-Mage', 'Arc Warden', 'Earth Spirit', 'Elder Titan', 'Lion', 'Meepo', 'Mirana', 'Outworld Destroyer', 'Rubick', 'Skywrath Mage'","'Axe', 'Batrider', 'Earthshaker', 'Lion', 'Outworld Destroyer', 'Timbersaw', 'Zeus', 'Gyrocopter', 'Snapfire', 'Leshrac'","'Batrider', 'Broodmother', 'Clockwerk', 'Death Prophet', 'Doom', 'Earthshaker', 'Elder Titan', 'Ember Spirit', 'Jakiro', 'Lina', 'Luna', 'Meepo'","'Ancient Apparition', 'Silencer', 'Nyx Assassin', 'Dazzle', 'Lina', 'Lion', 'Meepo', 'Oracle', 'Phantom Lancer', 'Rubick', 'Shadow Demon', 'Wraith King'","'Chaos Knight', 'Lycan', 'Naga Siren', 'Phantom Lancer', 'Sven', 'Troll Warlord'","'Bounty Hunter', 'Bloodseeker', 'Brewmaster', 'Doom', 'Juggernaut', 'Visage', 'Lifestealer', 'Lycan', 'Slardar'","'Chaos Knight', 'Doom', 'Lifestealer', 'Meepo', 'Phantom Lancer', 'Omniknight', 'Oracle', 'Slark', 'Viper'","'Brewmaster', 'Doom', 'Invoker', 'Luna', 'Naga Siren', 'Oracle', 'Outworld Destroyer', 'Rubick', 'Silencer', 'Sven'","'Anti-Mage', 'Axe', 'Bristleback', 'Faceless Void', 'Shadow Demon', 'Spectre'","'Nyx Assassin', 'Rubick', 'Silencer', 'Sniper', 'Templar Assassin'","'Bloodseeker', 'Centaur Warrunner', 'Faceless Void', 'Grimstroke', 'Medusa', 'Outworld Destroyer', 'Puck', 'Slark', 'Spirit Breaker', 'Tusk'","'Axe', 'Bane', 'Broodmother', 'Centaur Warrunner', 'Dragon Knight', 'Lina', 'Lion', 'Morphling', 'Omniknight', 'Phoenix', 'Puck', 'Razor'","'Axe', 'Batrider', 'Bristleback', 'Centaur Warrunner', 'Dragon Knight', 'Earthshaker', 'Ember Spirit', 'Grimstroke', 'Gyrocopter', 'Hoodwink', 'Jakiro', 'Kunkka'","'Night Stalker', 'Arc Warden', 'Huskar', 'Ursa', 'Silencer', 'Meepo', 'Bloodseeker', 'Viper', 'Necrophos', 'Snapfire'","'Arc Warden', 'Faceless Void', 'Jakiro', 'Lycan', 'Night Stalker', 'Nyx Assassin', 'Silencer', 'Templar Assassin', 'Venomancer', 'Wraith King'","'Abaddon', 'Anti-Mage', 'Bristleback', 'Bounty Hunter', 'Dazzle', 'Doom', 'Legion Commander', 'Lifestealer', 'Mirana', 'Monkey King', 'Necrophos', 'Night Stalker'","'Nyx Assassin', 'Clockwerk', 'Sniper', 'Phantom Lancer', 'Anti-Mage', 'Luna', 'Oracle', 'Storm Spirit'","'Anti-Mage', 'Arc Warden', 'Axe', 'Bloodseeker', 'Centaur Warrunner', 'Death Prophet', 'Disruptor', 'Faceless Void', 'Legion Commander', 'Luna', 'Meepo', 'Night Stalker'","'Anti-Mage', 'Chaos Knight', 'Centaur Warrunner', 'Earth Spirit', 'Huskar', 'Necrophos', 'Outworld Destroyer', 'Queen of Pain', 'Slark', 'Sniper', 'Viper', 'Weaver'"
    ,"'Axe', 'Bounty Hunter', 'Bristleback', 'Legion Commander', 'Meepo', 'Omniknight', 'Razor', 'Slardar', 'Spectre', 'Underlord', 'Viper', 'Zeus'","'Bristleback', 'Broodmother', 'Clinkz', 'Legion Commander', 'Phantom Lancer', 'Riki', 'Shadow Fiend', 'Silencer', 'Slark', 'Wraith King'","'Earth Spirit', 'Phoenix', 'Rubick', 'Silencer', 'Tidehunter', 'Zeus'","'Ember Spirit', 'Leshrac', 'Lina', 'Lion', 'Puck', 'Pugna', 'Queen of Pain', 'Storm Spirit', 'Witch Doctor', 'Wraith King'","'Axe', 'Razor', 'Bane', 'Bounty Hunter', 'Disruptor', 'Doom', 'Dragon Knight', 'Luna', 'Night Stalker', 'Pugna', 'Sniper', 'Spirit Breaker'","'Dragon Knight', 'Mirana', 'Morphling', 'Riki', 'Wraith King', 'Visage'","'Broodmother', 'Dragon Knight', 'Lycan', 'Nyx Assassin', 'Phantom Assassin', 'Phantom Lancer', 'Slark', 'Sniper', 'Ursa'","'Anti-Mage', 'Huskar', 'Abaddon', 'Pugna', 'Nyx Assassin', 'Wraith King'","'Oracle', 'Abaddon', 'Phantom Lancer', 'Meepo', 'Phoenix'","'Ancient Apparition', 'Axe', 'Bloodseeker', 'Centaur Warrunner', 'Chaos Knight', 'Disruptor', 'Earthshaker', 'Meepo', 'Omniknight', 'Outworld Destroyer', 'Phantom Lancer', 'Puck'","'Anti-Mage', 'Silencer', 'Nyx Assassin', 'Ancient Apparition', 'Juggernaut', 'Abaddon', 'Pudge'","'Axe', 'Bloodseeker', 'Bounty Hunter', 'Centaur Warrunner', 'Clockwerk', 'Ember Spirit', 'Invoker', 'Lifestealer', 'Omniknight', 'Phantom Assassin', 'Phantom Lancer', 'Pudge'","'Anti-Mage', 'Doom', 'Juggernaut', 'Lion', 'Lycan', 'Meepo', 'Necrophos', 'Omniknight', 'Pugna', 'Riki', 'Shadow Shaman', 'Storm Spirit'","'Omniknight', 'Clockwerk', 'Ember Spirit', 'Outworld Destroyer', 'Enigma', 'Invoker', 'Medusa', 'Phoenix', 'Meepo', 'Razor', 'Treant Protector', 'Underlord'","'Anti-Mage', 'Doom', 'Ember Spirit', 'Night Stalker', 'Nyx Assassin', 'Riki', 'Silencer', 'Techies'","'Clockwerk', 'Lifestealer', 'Pugna', 'Razor', 'Omniknight', 'Spectre', 'Troll Warlord', 'Terrorblade', 'Templar Assassin', 'Venomancer', 'Winter Wyvern', 'Wraith King'","'Abaddon', 'Anti-Mage', 'Batrider', 'Beastmaster', 'Chen', 'Death Prophet', 'Juggernaut', 'Lifestealer', 'Night Stalker', 'Oracle', 'Templar Assassin', 'Visage'","'Arc Warden', 'Venomancer', 'Windranger', 'Viper', 'Dragon Knight', 'Pudge', 'Huskar', 'Razor', 'Pugna'","'Drow Ranger', 'Earth Spirit', 'Axe', 'Elder Titan', 'Ursa', 'Lina', 'Dark Seer', 'Shadow Shaman', 'Ember Spirit', 'Dazzle', 'Necrophos', 'Outworld Destroyer'","'Anti-Mage', 'Nyx Assassin', 'Razor', 'Rubick', 'Slark', 'Ursa'","'Bane', 'Doom', 'Ember Spirit', 'Faceless Void', 'Invoker', 'Lion', 'Necrophos', 'Outworld Destroyer', 'Pangolier', 'Pugna', 'Shadow Shaman', 'Skywrath Mage'","'Anti-Mage', 'Clockwerk', 'Dazzle', 'Doom', 'Legion Commander', 'Lifestealer', 'Luna', 'Night Stalker', 'Nyx Assassin', 'Pudge', 'Silencer', 'Slark'","'Bristleback', 'Juggernaut', 'Lifestealer', 'Lion', 'Necrophos', 'Slardar', 'Viper'","'Monkey King', 'Phantom Lancer', 'Rubick', 'Slardar', 'Timbersaw'","'Axe', 'Bane', 'Chaos Knight', 'Crystal Maiden', 'Lich', 'Oracle', 'Outworld Destroyer', 'Razor', 'Sniper', 'Timbersaw', 'Underlord', 'Winter Wyvern'","'Anti-Mage', 'Disruptor', 'Earth Spirit', 'Earthshaker', 'Phantom Lancer', 'Razor', 'Techies'","'Necrophos', 'Razor', 'Luna', 'Disruptor', 'Kunkka', 'Doom', 'Sniper', 'Outworld Destroyer', 'Winter Wyvern', 'Rubick', 'Shadow Fiend', 'Ursa'","'Alchemist', 'Earthshaker', 'Gyrocopter', 'Luna', 'Necrophos', 'Silencer'","'Anti-Mage', 'Bane', 'Doom', 'Lion', 'Riki', 'Slark', 'Storm Spirit', 'Templar Assassin', 'Viper', 'Weaver', 'Windranger'","'Anti-Mage', 'Lina', 'Nyx Assassin', 'Phantom Lancer', 'Rubick', 'Spirit Breaker', 'Tidehunter', 'Viper'","'Abaddon', 'Anti-Mage', 'Huskar', 'Legion Commander', 'Oracle', 'Rubick', 'Slark', 'Terrorblade', 'Underlord', 'Wraith King'","'Broodmother', 'Chaos Knight', 'Invoker', 'Lifestealer', 'Phantom Lancer', 'Pugna', 'Rubick', 'Terrorblade', 'Weaver', 'Windranger', 'Wraith King'","'Axe', 'Doom', 'Luna', 'Phoenix', 'Tidehunter', 'Timbersaw', 'Tiny', 'Venomancer', 'Viper'","'Bane', 'Bloodseeker', 'Death Prophet', 'Bounty Hunter', 'Doom', 'Ember Spirit', 'Meepo', 'Puck', 'Queen of Pain', 'Slardar', 'Templar Assassin', 'Viper'","'Weaver', 'Anti-Mage', 'Bloodseeker', 'Silencer', 'Dark Seer', 'Ember Spirit', 'Lycan', 'Ancient Apparition', 'Nyx Assassin', 'Sven'","'Axe', 'Bloodseeker', 'Drow Ranger', 'Faceless Void', 'Night Stalker', 'Nyx Assassin', 'Skywrath Mage', 'Slardar', 'Zeus'","'Axe', 'Bloodseeker', 'Centaur Warrunner', 'Nyx Assassin', 'Ember Spirit', 'Morphling', 'Razor', 'Spectre', 'Sven'","'Ancient Apparition', 'Invoker', 'Luna', 'Naga Siren', 'Omniknight', 'Outworld Destroyer', 'Pugna', 'Skywrath Mage', 'Slark', 'Timbersaw', 'Tinker', 'Undying'","'Faceless Void', 'Kunkka', 'Lina', 'Luna', 'Morphling', 'Omniknight', 'Oracle', 'Pudge', 'Riki', 'Rubick', 'Silencer', 'Tidehunter'","'Anti-Mage', 'Broodmother', 'Chaos Knight', 'Juggernaut', 'Invoker', 'Lion', 'Monkey King', 'Phantom Lancer', 'Riki', 'Slark', 'Terrorblade', 'Weaver'","'Anti-Mage', 'Faceless Void', 'Chaos Knight', 'Juggernaut', 'Lifestealer', 'Meepo', 'Pudge', 'Pugna', 'Silencer', 'Templar Assassin', 'Ursa', 'Viper'"};
	int n = sizeof(heroes)/sizeof(heroes[0]);
    std::string elem = argv[1];
    int i = 0;
    while (i < n)
    {
        if (heroes[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        std::cout << "Counters for hero " << elem << " is: "
             << "\n"<<counters[i]<<std::endl;
    }
    else {
        std::cout << "Element is not present in the given array";
    }
 
    return 0;
}