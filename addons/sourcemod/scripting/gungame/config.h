/**
 * Config Setting
 */

new State:ConfigState;
new bool:ConfigReset;

new MapStatus;
new MaxLevelPerRound = 3;
new MinKillsPerLevel = 1;
new bool:TurboMode;
new bool:StripDeadPlayersWeapon;
new bool:AllowLevelUpAfterRoundEnd;
new bool:RemoveBonusWeaponAmmo;
new bool:ReloadWeapon;
new bool:MultiKillChat;
new bool:JoinMessage;
// TODO: Enable after fix for: https://bugs.alliedmods.net/show_bug.cgi?id=3817
// new bool:IntermissionCalcWinner;
new bool:CanStealFirstLevel;
new bool:CanLevelDownOnGrenade;
new VoteLevelLessWeaponCount;
new ObjectiveBonus;
new WorldspawnSuicide = 1;
new Weapons:NadeBonusWeaponId;
new bool:NadeSmoke;
new bool:NadeFlash;
new bool:ExtraNade;
new bool:UnlimitedNades;
new bool:WarmupNades;
new bool:KnifePro;
new KnifeProMinLevel;
new bool:KnifeElite;
new bool:AutoFriendlyFire;
new bool:BotCanWin;
new TotalLevel;
new bool:WarmupEnabled = true;
new bool:DisableWarmupOnRoundEnd = false;
new bool:WarmupInitialized;
new WarmupStartup = 1;
new Warmup_TimeLength = 30;
new WarmupKnifeOnly = 1;
new WarmupReset = 1;
new WarmupCounter;
new bool:IsVotingCalled = false;
new bool:TripleLevelBonus = false;
new bool:KnifeProHE = false;
new bool:ObjectiveBonusWin = false;
new bool:InternalIsActive = true;
new CommitSuicide = 1;
new bool:AlltalkOnWin = false;
new bool:RestoreLevelOnReconnect;
new bool:TripleLevelBonusGodMode;
new HandicapMode;
new bool:Top10Handicap;
new bool:StatsEnabled;
new WarmupRandomWeaponMode = 0;
new WarmupRandomWeaponLevel = 0;
new UnlimitedNadesMinPlayers = 0;
new FFA = 0;
new NumberOfNades = 0;
new g_Cfg_LevelsInScoreboard = 0;
new g_Cfg_HandicapLevelSubstract = 0;
new g_Cfg_ArmorKevlar = 1;
new g_Cfg_ArmorHelmet = 1;
new Float:g_Cfg_TripleLevelBonusGravity = 0.5;
new Float:g_Cfg_TripleLevelBonusSpeed = 1.5;
new g_Cfg_KnifeSmoke = 0;
new g_Cfg_KnifeFlash = 0;
new g_Cfg_ObjectiveBonusExplode = 0;
new g_Cfg_ShowLeaderWeapon = 0;

