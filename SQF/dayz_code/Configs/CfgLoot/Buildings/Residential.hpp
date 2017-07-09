class Residential : Default
{
	zombieChance = 0.3;
	maxRoaming = 2;
	zombieClass[] =
	{
		"zZombie_Base",
		"z_hunter",
		"z_teacher",
		"z_villager1",
		"z_villager2",
		"z_villager3"
	};
	lootChance = 0.5;
	lootGroup = Residential;
};

/*
class Land_HouseV_1I4 : Residential
{
	zedPos[] = {{-0.400146,-3.87891,-2.7688},{-3.67651,-2.51758,-2.76544},{-0.472412,3.19824,-2.72028}};
	lootPos[] = {{0.53,-4.53,-2.77},{-3.83,-2.5,-2.77},{-0.51,3.92,-2.72},{-1.93,-5.12,-2.17},{0.57,-1.53,-2.76}};
};
*/

class Land_kulna : Residential
{
	zedPos[] = {{-0.498291,1.92871,-1.12811},{0.503174,0.217773,-1.11633}};
	lootPos[] = {{0.503174,0.217773,-1.11633},{-0.498291,1.92871,-1.12811}};
};

class Land_hut06 : Residential
{
	zedPos[] = {{0.337402,2.27051,-1.56116},{-0.637695,0.753906,-1.53836}};
	lootPos[] = {{0.337402,2.27051,-1.56116},{-0.637695,0.753906,-1.53836}};
};

class Land_Hlidac_budka : Residential
{
	zedPos[] = {{2.02051,0.444336,-0.81366},{-0.460938,1.75879,-0.78363},{-2.31836,1.5127,-0.78363}};
	lootPos[] = {{-2.31836,1.5127,-0.78363},{2.02051,0.444336,-0.81366},{-0.460938,1.75879,-0.78363}};
};

class Land_HouseV2_02_Interier : Residential
{
	zedPos[] = {{-3.62598,3.05273,-5.58072},{3.34814,1.9707,-5.57071},{5.20117,-1.54004,-5.57071},{-5.71094,5.49414,-5.57071},{7.23145,5.37109,-5.57071},{-7.57861,-1.01563,-5.57071},{8.5498,0.754883,-5.57071},{-6.52295,2.35547,-5.5607}};
	lootPos[] = {{7.23,5.37,-5.57},{8.55,0.75,-5.57},{5.2,-1.54,-5.57},{3.35,1.97,-5.57},{-3.63,3.05,-5.58},{-7.58,-1.02,-5.57},{-6.52,2.35,-5.56},{-5.71,5.49,-5.57},{6.53,1.49,-4.64},{0.05,1.32,-5.53}};
};

class Land_A_Pub_01 : Residential
{
	zombieChance = 0.2;
	lootPos[] = {{1.83,0.39,-5.75},{-1.77,0.33,-5.76},{-6.66,-6.43,-5.76},{-4.64,-0.1,-5.75},{-5.76,-3.05,-5.75},{-2.08,0.92,-1.79},{-4.77,-5.89,-1.78},{-6.94,-1.94,-1.77},{-4.05,-0.78,-1.78},{1.4,-1.74,-1.76},{3.14,-2.79,-1.76},{3.58,-0.59,-1.76},{3.03,-4.04,-1.76},{1.94,3.19,-1.78},{-0.1,6.22,-1.78},{5.3,7.56,-1.79},{6.93,-2.85,-1.79},{2.57,-4.6,-5.76},{4.07,5.41,-5.76},{0.75,2.3,-5.75},{6.47,-1.71,-5.06}};
	zedPos[] = {{-1.76563,0.334473,-5.75623},{2.56934,-4.6001,-5.75623},{4.06738,5.41406,-5.75623},{-6.66211,-6.4292,-5.75623},{0.75293,2.2998,-5.74622},{-4.63574,-0.100586,-5.74622},{-5.75977,-3.05029,-5.74622},{1.83398,0.394043,-5.74619},{-2.08203,0.922852,-1.79126},{5.30469,7.55957,-1.79126},{6.93164,-2.84668,-1.79126},{-0.0957031,6.22461,-1.78125},{1.94141,3.18799,-1.78125},{-4.05273,-0.779785,-1.78125},{-4.76563,-5.89111,-1.78125},{-6.94434,-1.9375,-1.77124},{1.39844,-1.73779,-1.76123},{3.03027,-4.04346,-1.76123},{3.13867,-2.78564,-1.76123},{3.58301,-0.591309,-1.76123}};
};

class Land_Shed_wooden : Residential
{
	zedPos[] = {{-0.342773,1.0293,-1.29156},{1.26807,-0.362305,-1.29156}};
	lootPos[] = {{1.26807,-0.362305,-1.29156},{-0.342773,1.0293,-1.29156}};
};

class Land_HouseBlock_A1_1 : Residential
{
	zedPos[] = {{-3.52881,0.15918,-4.74365},{-3.56152,-2.33496,-4.73096}};
	lootPos[] = {{-3.52881,0.15918,-4.74365},{-3.56152,-2.33496,-4.73096}};
};

/*
class Land_HouseV_1I1 : Residential
{
	zedPos[] = {{0.100586,-2.34473,-2.88281}};
	lootPos[] = {{0.100586,-2.34473,-2.88281}};
};

class Land_A_MunicipalOffice : Residential
{
	maxRoaming = 3;
	zedPos[] = {{-0.20752,-6.48633,-18.429},{3.31641,-5.77441,-18.429},{-4.66113,-6.27246,-18.429}};
	lootChance = 0.4;
	lootPos[] = {{-4.66113,-6.27246,-18.429},{3.31641,-5.77441,-18.429},{-0.20752,-6.48633,-18.429},{-9.72412,-4.8877,-3.759},{-9.57813,3.55566,-3.759},{-7.17285,11.083,-3.76901},{5.06934,11.1836,-3.74899},{9.3208,5.38574,-3.76901},{9.65283,-4.82129,-3.74899},{3.23535,-0.106445,-0.169037},{4.85156,-3.69043,-0.169037},{-0.80127,-7.88184,-0.169037},{-4.4082,-4.91797,-0.169037},{-4.90771,-2.23145,-0.169037}};
};
*/

class Land_HouseV2_04_interier : Residential
{
	zedPos[] = {{2.10938,6.60449,-5.76862},{-2.30029,4.22461,-5.75937},{-4.96289,2.91309,-5.74985},{1.95557,4.16211,-5.74939},{-5.13281,6.74316,-5.74857},{7.51025,-0.931641,-5.74176},{7.49561,5.83594,-5.73901}};
	lootPos[] = {{7.5,6.93,-5.74},{7.58,-1.89,-5.74},{1.85,2.66,-5.06},{3.38,6.4,-5.77},{-1.44,3.1,-5.76},{-3.63,6.88,-4.99},{-4.96,2.91,-5.75},{0.29,1.26,-2.93},{-1.44,6.44,-5.74},{4.82,2.63,-5.74}};
};

class Land_HouseV2_01A : Residential
{
	zedPos[] = {{-1.60547,-3.23535,-5.61884},{-3.37256,-3.34082,-5.58344}};
	lootPos[] = {{-3.37256,-3.34082,-5.58344},{-1.60547,-3.23535,-5.61884}};
};

class Land_psi_bouda : Residential
{
	zombieChance = 0;
	maxRoaming = 0;
	zedPos[] = {{1.02197,0.0185547,-0.519989}};
	lootPos[] = {{1.02197,0.0185547,-0.519989}};
};

class Land_KBud : Residential
{
	zombieChance = 0.3;
	maxRoaming = 0;
	zedPos[] = {{-0.017334,0.0107422,-0.663696}};
	lootPos[] = {{-0.017334,0.0107422,-0.663696}};
};

/*
class Land_sara_domek_zluty : Residential
{
	maxRoaming = 1;
	zedPos[] = {{-6.17139,-2.33789,-2.43384},{-0.660645,2.05469,-2.43372},{6.36401,-0.236328,-2.43372},{2.95679,3.00684,-2.43365},{-3.75342,-3.54785,-2.42389},{-2.77441,0.751953,-2.42371},{-5.07666,3.04395,-2.42352},{0.627197,-0.584961,-2.41394},{7.06665,2.9541,-2.4137}};
	lootPos[] = {{2.96,3.01,-2.43},{7.07,2.95,-2.41},{6.36,-0.24,-2.43},{0.63,-0.58,-2.44},{-0.66,2.05,-2.43},{-2.77,0.75,-2.42},{-5.08,3.04,-2.42},{-6.17,-2.34,-2.43},{-3.75,-3.55,-2.42}};
};
*/

class Land_HouseV_3I4 : Residential
{
	maxRoaming = 3;
	zedPos[] = {{5.46387,2.80273,-2.61298}};
	lootPos[] = {{5.46387,2.80273,-2.61298}};
};

/*
Zero Config
class Land_Shed_W4 : Residential
{
	maxRoaming = 3;
	zedPos[] = {};
	lootPos[] = {};
};
*/

class Land_HouseV_3I1 : Residential
{
	maxRoaming = 3;
	zedPos[] = {};
	lootPos[] = {};
};

/*
class Land_HouseV_1L2 : Residential
{
	maxRoaming = 3;
	zedPos[] = {{-0.448242,5.29883,-3.01697}};
	lootPos[] = {{-0.448242,5.29883,-3.01697}};
};
*/

class Land_HouseV_1T : Residential
{
	maxRoaming = 3;
	zedPos[] = {{2.53027,-2.41895,-3.22815}};
	lootPos[] = {{2.53027,-2.41895,-3.22815}};
};

class Land_HouseV_1L1 : Residential
{
	zedPos[] = {{1.20801,5.86035,-1.09302}};
	lootPos[] = {{1.20801,5.86035,-1.09302}};
};

class Land_HouseV_1I2 : Residential
{
	zedPos[] = {{-3.60205,2.81641,-2.23148}};
	lootPos[] = {{-3.60205,2.81641,-2.23148}};
};

class Land_HouseV_2L : Residential
{
	zedPos[] = {{-3.98438,-3.87207,-4.02338},{4.32617,1.81836,-3.96332}};
	lootPos[] = {{4.32617,1.81836,-3.96332},{-3.98438,-3.87207,-4.02338}};
};

class Land_HouseV_1I3 : Residential
{
	zedPos[] = {{2.19531,-0.954102,-2.23218}};
	lootPos[] = {{2.19531,-0.954102,-2.23218}};
};

class Land_houseV_2T2 : Residential
{
	zedPos[] = {{-4.24951,0.988281,-4.0574}};
	lootPos[] = {{-4.24951,0.988281,-4.0574}};
};

class Land_HouseBlock_A1 : Residential
{
	zedPos[] = {{-3.48242,2.13965,-8.81882},{-4.56689,-3,-8.81262}};
	lootPos[] = {{-4.56689,-3,-8.81262},{-3.48242,2.13965,-8.81882}};
};

class Land_HouseBlock_A2_1 : Residential
{
	zedPos[] = {{3.98975,4.48926,-7.4043}};
	lootPos[] = {{3.98975,4.48926,-7.4043}};
};

class Land_HouseBlock_A3 : Residential
{
	zedPos[] = {{0.554688,2.70801,-5.4317}};
	lootPos[] = {{0.56,2.71,-5.43},{-0.72,-3.61,-5.45},{1.04,-1.56,-5.45}};
};

class Land_HouseBlock_B5 : Residential
{
	zedPos[] = {{-5.10742,5.23926,-7.57431}};
	lootPos[] = {{-5.10742,5.23926,-7.57431}};
};

class Land_HouseBlock_B6 : Residential
{
	zedPos[] = {{-3.01172,0.820313,-7.60886}};
	lootPos[] = {{-3.01172,0.820313,-7.60886}};
};

class Land_HouseBlock_C1 : Residential
{
	zedPos[] = {{5.85889,4.46875,-9.59036}};
	lootPos[] = {{5.85889,4.46875,-9.59036}};
};

class Land_HouseV2_01B : Residential
{
	zedPos[] = {{9.53711,3.39453,-6.11053}};
	lootPos[] = {{9.53711,3.39453,-6.11053}};
};

class Land_HouseV2_03 : Residential
{
	zedPos[] = {{0.812988,7.99805,-5.89618},{9.96143,-9.00488,-5.48578}};
	lootPos[] = {{0.812988,7.99805,-5.89618},{9.96143,-9.00488,-5.48578}};
};

/*
class Land_Mil_Guardhouse : Residential
{
	maxRoaming = 3;
	zedPos[] = {{-2.44727,0.250977,-1.70563},{-2.44873,3.00293,-1.70285}};
	lootPos[] = {{-2.44727,0.250977,-1.70563},{-2.44873,3.00293,-1.70285}};
};
*/

class LADAWreck : Residential
{
	maxRoaming = 0;
	zedPos[] = {};
	lootChance = 0.2;
	lootPos[] = {{-0.106934,-0.660156,-0.144714}};
};

class SKODAWreck : Residential
{
	maxRoaming = 0;
	zedPos[] = {};
	lootChance = 0.2;
	lootPos[] = {{-0.66,-0.09,-0.58}};
};

class Land_GuardShed : Residential
{
	maxRoaming = 1;
	zedPos[] = {{-0.02,-1,-0.61}};
	lootPos[] = {{-0.02,-1,-0.61}};
};

class RU_WarfareBBarracks : Residential
{
	maxRoaming = 0;
	zedPos[] = {{2.06,-2.63,0.52},{-0.01,2.35,0.55},{2.43,2.04,1.08},{-2.81,2.49,1.3},{-0.72,-0.03,1.31},{-0.38,-2.29,1.87}};
	lootChance = 0.1;
	lootPos[] = {{-2.81,2.49,1.3},{-0.72,-0.03,1.31},{2.06,-2.63,0.52},{-0.38,-2.29,1.87},{2.43,2.04,1.08},{-0.01,2.35,0.55}};
};

class Land_NAV_Lighthouse : Residential
{
	zedPos[] = {{-0.16,-0.1,-6.78},{-0.06,3.36,-7.87}};
	lootChance = 0.4;
	lootPos[] = {{-0.16,-0.1,-6.78},{0.01,-1.7,2.42},{-0.06,3.36,-7.87}};
};

class Land_Panelak3 : Residential
{
	zedPos[] = {};
	lootPos[]={{0.54,-0.71,-8.11},{2.51,-1.84,12.38},{2.8,-0.67,12.38},{3.98,-1.49,12.38}};
};
// ALT-MAP Support 
class Land_sara_Domek_sedy : Residential // single story stucko #39
{
	zedPos[] = {{1.72266,2.12744,-2.14196}};
	lootPos[]={{4.39453,3.2583,-2.14196},{-5.47656,1.50586,-2.14196},{-1.81445,1.95605,-2.14196}};
};

class land_mbg_brickhouse_01 : Residential // 2 story brick outer staircase stripped
{
	zedPos[] = {{2.13965,2.89258,-3.35652}};
	lootPos[]={{2.13965,2.89258,-3.35652},{-3.04443,1.43359,-3.35652},{1.77637,1.81055,-0.051506}};
};

class Land_dum_mesto_in : Residential // 2 story some boarded windows estate
{
	zedPos[] = {{4.85645,1.62305,-1.28095}};
	lootPos[]={{-4.05469,4.21289,-4.26331},{4.85645,1.62305,-1.28095},{-3.86035,-4.19531,-1.11247}};
};
class Land_dum_mesto2 : Residential // 2 stucco red/orage light by door
{
	zedPos[] = {{-3.01074,1.48145,-0.945732}};
	lootPos[]={{1.31836,4.90625,-4.34475},{-3.01074,1.48145,-0.945732},{-1.86816,4.46582,-0.944004},{-1.43652,-1.51563,-0.944004},{1.40234,-7.55664,-0.944},{1.05273,5.43994,-4.34475}};
};
class Land_MBG_GER_ESTATE_2 : Residential // 2 stucco red/orage light by door
{
	zedPos[] = {{2.38281,-1.03418,-2.13187}};
	lootPos[]={{5.34766,-0.882813,-2.13187},{2.38281,-1.03418,-2.13187},{2.54688,-4.41602,-2.13187},{-7.71094,-2.73242,-2.13187},{-2.22656,5.91602,-2.13187},{-5.36328,4.46387,-2.13187}};
};
class Land_MBG_GER_HUS_4 : Residential // 2 stucco red/orage light by door
{
	zedPos[] = {{-3.01074,1.48145,-0.945732}};
	lootPos[]={{-4.05176,0.607422,-0.112886},{4.31885,2.46094,-0.112885},{4.58203,-2.88672,-0.112886},{5.85449,1.11523,-3.11289},{3.30811,-5.375,-3.11289},{-3.5708,6.20703,-3.11288}};
};
class Land_dum_rasovna : Residential // old stucco window-dor-door tile roof
{
	zedPos[] = {{-1.11914,0.794922,-2.66958}};
	lootPos[]={{-1.11914,0.794922,-2.66958},{-0.580078,-3.34766,-2.66958},{1.80664,2.07227,0.272606}};
};
class Land_cihlovej_dum_in : Residential // door, red-blu light, 2 windows
{
	zedPos[] = {{-1.69922,0.681641,-1.8147}};
	lootPos[]={{-1.69922,0.681641,-1.8147},{1.97852,1.83496,-5.27588},{-1.44531,0.173828,-1.81471},{-0.0527344,-1.43359,-1.81472}};
};
class Land_MBG_GER_RHUS_1 : Residential // brick 1 door 4 windows
{
	zedPos[] = {{-1.69922,0.681641,-1.8147}};
	lootPos[]={{-1.69922,0.681641,-1.8147},{1.97852,1.83496,-5.27588},{-1.44531,0.173828,-1.81471},{-0.0527344,-1.43359,-1.81472}};
};
class Land_MBG_GER_RHUS_2 : Residential // cement 1 door 4 windows
{
	zedPos[] = {{-2.77441,-3.31738,-3.36569}};
	lootPos[]={{2.33398,-1.23145,-3.36569},{2.08203,-1.7998,-0.465693},{-0.678711,-4.04883,-0.465693},{2.33008,3.3291,-0.465692}};
};
class Land_MBG_GER_PUB_2 : Residential // fionas irish pub
{
	zedPos[] = {{4.20264,-3.15381,-3.53086},{-6.24268,-4.08228,-3.53085}};
	lootPos[]={{-0.338867,-5.44336,-3.53086},{-2.61182,-4.51978,-3.53086},{-6.23779,-2.42676,-3.53085},{4.42334,-4.17285,-0.630859},{3.15088,4.45898,-0.630852}};
};
class Land_sara_domek_vilka : Residential // reddish villa - no entry
{
	lootPos[]={{-5.53467,-1.77637,-4.17358},{3.11279,6.25879,-4.1599},{0.339844,7.14258,-4.1599}};
};
class Land_mbg_apartments_big_01 : Residential // brick with archways, limited access
{
	lootPos[]={{-4.7915,4.07861,4.80171},{-6.07764,-4.86182,4.80168},{9.38916,-7.12158,-1.05012},{-11.3857,-5.63916,-1.05012},{-11.2231,8.8335,-1.05013},{11.4961,7.89697,-1.05012},{4.59082,-5.81592,-4.34196}};
};
class Land_dum_ras : Residential // stucco 1 window, 2 doors
{
	zedPos[] = {{0.891602,2.02539,-2.66959},{0.189453,-3.6333,-2.66958},{0.952148,2.08594,0.272604}};
	lootPos[] = {{0.891602,2.02539,-2.66959},{0.189453,-3.6333,-2.66958},{0.952148,2.08594,0.272604}};
};
class Land_deutshe_mini : Residential // stucco 3 windows, doorway
{
	zedPos[] = {{2.51074,-2.4657,-2.74846},{2.51953,1.31262,-2.74846}};
	lootPos[] = {{2.51074,-2.4657,-2.74846},{2.51953,1.31262,-2.74846}};
};
class land_seb_bouda1 : Residential // cement floor1, wooden floor2
{
	zedPos[] = {{-2.27832,0.0546875,0.573326},{-0.192871,-2.34766,1.13067}};
	lootPos[] = {{-2.27832,0.0546875,0.573326},{-0.192871,-2.34766,1.13067}};
};
class land_x_vez_tex : Residential // brick tower
{
	zedPos[] = {{-0.80957,1.62183,-4.59428}};
	lootPos[] = {{-0.80957,1.62183,-4.59428},{-1.18555,0.894531,-4.59901},{-0.114258,1.20581,-0.273163},{-3.95801,5.15552,-0.271477}};
};
class Land_House_K_3_EP1 : Residential // beige stucco
{
	zedPos[] = {{0.510254,0.844727,2.98969}};
	lootPos[] = {{-1.27661,5.95703,-0.537671},{0.510254,0.844727,2.98969},{-5.37305,1.13379,2.06888},{-4.18359,0.335693,1.48434},{-3.16992,1.97803,4.41596},{1.85449,0.0739746,7.37541}};
};
class Land_House_C_5_V2_EP1 : Residential // beige stucco
{
	lootPos[] = {{2.80371,2.10449,-1.36692},{-2.93921,-0.624023,-1.36692}};
};
class Land_House_C_5_V3_EP1 : Residential // beige stucco
{
	lootPos[] = {{-2.94141,-0.604736,-1.4715},{1.50977,3.43945,-1.4715}};
};
class Land_House_L_1_EP1 : Residential // beige stucco
{
	zedPos[] = {{0.450195,0.440674,-0.602669}};
	lootPos[] = {{-0.196289,-0.788086,-0.605874}};
}
class Land_House_C_5_V1_EP1 : Residential // beige stucco
{
	lootPos[] = {{-2.52344,-1.32263,-1.4715},{2.51953,3.46631,-1.4715}};
};
class Land_House_C_2_EP1 : Residential // beige stucco 2 rollup doors on right., blue door on left
{
	zedPos[] = {{2.54175,-1.31506,-2.31269}};
	lootPos[] = {{0.698975,2.37585,-2.30393},{-3.36646,0.386719,0.547501},{2.58179,-4.30444,0.808586},{5.20459,2.83118,0.764496}};
};
class Land_House_K_7_EP1 : Residential // beige stucco
{
	zedPos[] = {{-7.3396,2.26685,-0.218369}};
	lootPos[] = {{-7.3396,2.26685,-0.218369},{-7.77991,1.25049,3.29032},{-1.7948,4.49707,3.32767},{-1.06494,1.22388,6.52805},{-5.67395,1.74756,6.52805}};
};
class Land_House_C_4_EP1 : Residential // beige stucco
{
	zedPos[] = {{-4.46118,-0.365112,-3.48355}};
	lootPos[] = {{-4.46118,-0.365112,-3.48355},{5.28979,-0.619751,-3.48355},{-5.14575,-2.38733,-0.350571},{-3.15259,2.37488,2.77978},{-2.18457,-4.203,2.80865},
				{5.64478,1.86035,2.79369}};
};
class Land_House_C_11_EP1 : Residential // 2 story wood railings
{
	zedPos[] = {{4.677,2.36658,-2.08453}};
	lootPos[] = {{6.32324,2.50964,-2.08453},{-0.41626,-2.88489,-2.08453},{5.4292,1.52686,0.972969},{4.75293,-2.96155,0.972969}};
};
class Land_House_C_1_EP1 : Residential // 
{
	zedPos[] = {{6.95361,-0.499756,-0.927746}};
	lootPos[] = {{6.95361,-0.499756,-0.927746},{5.08594,-3.28662,-0.927746},{-5.49121,0.735107,-0.927746},{-7.29883,-0.112061,-0.927746},{7.37158,-1.21387,3.66758}};
};
class Land_dum_istan3_hromada2 : Residential // brick 2 story
{
	zedPos[] = {{6.95361,-0.499756,-0.927746}};
	lootPos[] = {{6.36035,-5.50195,2.08801},{0.35791,2.87939,2.08801},{-6.51294,1.10254,-1.28517},{-1.73999,3.7168,-1.28517}};
};
class Land_House_C_3_EP1 : Residential // 
{
	zedPos[] = {{5.27441,-2.22119,-3.91483}};
	lootPos[] = {{6.31348,2.77441,-3.91483},{-0.25293,-2.20093,1.93362},{-5.75098,0.645996,4.38845},{-5.69043,-0.0236816,0.576138},{-7.58984,-0.866943,-3.86868}};
};
class Land_House_C_1_v2_EP1 : Residential // 
{
	lootPos[] = {{6.24365,-0.537109,-1.30966},{4.14746,1.3584,-1.31308}};
};
class Land_House_C_9_EP1 : Residential // 
{
	zedPos[] = {{-2.45605,-1.96484,-3.74547}};
	lootPos[] = {{-0.637695,4.77246,-3.74925},{-2.45605,-1.96484,-3.74547},{2.46387,-5.54102,-0.152166},{-3.35986,-5.38086,-0.152166},{5.96436,-0.922363,2.58488}};
};
class Land_House_K_1_EP1 : Residential // 
{
	lootPos[] = {{-3.49609,3.95941,1.54511},{-0.168945,4.21155,1.56626}};
};
class Land_House_K_8_EP1 : Residential // 
{
	zedPos[] = {{-0.846069,-3.47266,-2.53287}};
	lootPos[] = {{-0.846069,-3.47266,-2.53287},{-0.502625,-0.395508,-2.56585},{1.90704,0.25293,0.250847},{1.33685,5.20801,0.366202},{-2.16797,0.402344,3.35996},
		{1.93939,-1.36816,3.35996},{-1.46851,1.52539,6.12626}};
};
class Land_House_C_5_EP1 : Residential // 
{
	zedPos[] = {{-0.846069,-3.47266,-2.53287}};
	lootPos[] = {{-0.846069,-3.47266,-2.53287},{-3.8877,-3.41077,-0.802206},{-2.99829,0.612793,-0.802206}};
};
class Land_dum_istan3_pumpa : Residential // brick
{
	lootPos[] = {{3.53687,1.09668,1.47485},{0.770752,0.611816,1.47485},{-2.95117,1.18604,1.47485}};
	zedPos[] = {{0.918945,-5.70605,-1.7704}};
};
class land_sara_domek_kovarna: Residential
{
	zedPos[] = {{0.0998535,-0.891602,-0.880356}};
};
class land_sara_domek_hospoda: Residential
{
	lootPos[] = {{-2.14844,-3.56396,-2.74878},{-1.16064,-4.72485,-2.75951}};
	zedPos[] = {{1.48291,-3.28223,-1.85291}};

};
class LAND_vokzal_big: Residential // Train Station
{
	lootPos[] = {{7.28613,-0.216797,-7.96283},{6.84961,2.56152,-7.96283},{6.9834,-4.98047,-7.96283},{-7.07227,1.28223,-7.96283}};
	zedPos[] = {{7.28613,-0.216797,-7.96283},{6.84961,2.56152,-7.96283},{6.9834,-4.98047,-7.96283},{-7.07227,1.28223,-7.96283}};
};
class LAND_Zachytka : Residential
{
	lootPos[] = {
		{3.79492,-4.12891,-2.02697},
		{-4.92285,-6.8584,-2.02697},
		{-3.6543,-6.7002,-2.02697},
		{-2.60449,-6.87891,-2.02697},
		{-1.82422,0.0361328,-2.02697},
		{-6.2832,-4.51074,-2.02697},
		{-3.60547,5.1875,-2.02697},
		{4.42188,11.2158,-2.02697}};
	zedPos[] = {
		{3.79492,-4.12891,-2.02697},
		{-4.92285,-6.8584,-2.02697},
		{-3.6543,-6.7002,-2.02697},
		{-2.60449,-6.87891,-2.02697},
		{-1.82422,0.0361328,-2.02697},
		{-6.2832,-4.51074,-2.02697},
		{-3.60547,5.1875,-2.02697},
		{4.42188,11.2158,-2.02697}};
};
class LAND_hospoda  : Residential
{
	lootPos[] = {
		{3.46094,-1.42871,-1.80302},
		{2.40137,-1.22656,-1.80307},
		{7.81836,-1.63281,-1.80282},
		{2.04004,-6.71777,-1.80289},
		{-5.56641,0.793945,-1.80295},
		{-4.18164,8.64063,-1.80286},
		{1.16602,5.0791,-1.80348},
		{1.21582,3.73242,-1.8034},
		{0.248047,5.55176,-1.80324},
		{-1.84766,3.92969,-1.80313},
		{-1.85254,0.222656,-1.80321}};
	zedPos[] = {
		{3.46094,-1.42871,-1.80302},
		{2.40137,-1.22656,-1.80307},
		{7.81836,-1.63281,-1.80282},
		{2.04004,-6.71777,-1.80289},
		{-5.56641,0.793945,-1.80295},
		{-4.18164,8.64063,-1.80286},
		{1.16602,5.0791,-1.80348},
		{1.21582,3.73242,-1.8034},
		{0.248047,5.55176,-1.80324},
		{-1.84766,3.92969,-1.80313},
		{-1.85254,0.222656,-1.80321}};
};
class LAND_Kiosk2 : Residential
{
	lootPos[] = {{-20.7441,45.2878,3.05876},{-3.80933,-33.6328,3.02246},{-3.57007,-22.666,3.02246},{4.76587,-24.3711,-0.618923},{-1.10449,43.1938,-0.58263},
		{8.77441,23.7346,-0.845428},{-9.86914,41.6533,3.05876},	{7.84668,20.991,4.76736},{6.91211,27.9067,10.1178}};
	zedPos[] = {{-20.7441,45.2878,3.05876},	{-3.80933,-33.6328,3.02246},	{-3.57007,-22.666,3.02246},	{4.76587,-24.3711,-0.618923},{-1.10449,43.1938,-0.58263},
		{8.77441,23.7346,-0.845428},{-9.86914,41.6533,3.05876},	{7.84668,20.991,4.76736},{6.91211,27.9067,10.1178}};
};


class LAND_skola : Residential
{
	lootPos[] = {
		{15.8508,20.459,-2.00361},
		{29.0132,22.3887,-2.00361},
		{30.6335,16.1104,-2.00361},
		{30.7412,5.33691,-2.00361},
		{18.7554,5.07324,-2.00361},
		{2.84912,14.2744,-2.00361},
		{-1.27197,12.2324,-2.00361},
		{-5.66699,16.6445,-2.00361},
		{-2.93408,22.0967,-2.00361},
		{5.48535,21.7969,-2.00361},
		{-9.52954,-8.64063,-2.00361},
		{-18.5305,-9.60449,-2.00361},
		{-23.9783,-0.905273,-2.00361},
		{-8.50586,13.9482,-2.00361},
		{5.84448,0.175781,-2.00361},
		{2.56885,-14.167,-2.00361},
		{-3.15063,-14.084,-2.00361},
		{-3.76294,-21.2754,-2.00361},
		{5.4397,-24.5635,-2.00361},
		{18.5049,-11.9141,-2.00361},
		{10.7795,-18.4443,-2.00361},
		{18.3979,-21.9854,1.22083},
		{20.1707,-14.1572,1.22083},
		{30.334,5.12402,1.22083},
		{22.9521,12.1387,1.22083},
		{1.45825,18.208,1.22083},
		{-5.56128,20.1572,1.22083},
		{-6.19165,15.4678,1.22083},
		{-1.05029,9.69141,1.22083},
		{6.17896,5.19434,1.22083},
		{5.00513,2.78711,1.22083},
		{5.81836,-5.65625,1.22083},
		{-0.54541,-15.1104,1.22083},
		{1.8418,-19.8584,1.22083},
		{-2.10864,-21.9961,1.22083},
		{-5.78857,-24.9277,1.22083},
		{16.3679,-15.4463,1.22083},
		{28.0537,-17.1328,1.22083},
		{22.1833,11.416,-2.00361}};
	zedPos[] = {
		{15.8508,20.459,-2.00361},
		{29.0132,22.3887,-2.00361},
		{30.6335,16.1104,-2.00361},
		{30.7412,5.33691,-2.00361},
		{18.7554,5.07324,-2.00361},
		{2.84912,14.2744,-2.00361},
		{-1.27197,12.2324,-2.00361},
		{-5.66699,16.6445,-2.00361},
		{-2.93408,22.0967,-2.00361},
		{5.48535,21.7969,-2.00361},
		{-9.52954,-8.64063,-2.00361},
		{-18.5305,-9.60449,-2.00361},
		{-23.9783,-0.905273,-2.00361},
		{-8.50586,13.9482,-2.00361},
		{5.84448,0.175781,-2.00361},
		{2.56885,-14.167,-2.00361},
		{-3.15063,-14.084,-2.00361},
		{-3.76294,-21.2754,-2.00361},
		{5.4397,-24.5635,-2.00361},
		{18.5049,-11.9141,-2.00361},
		{10.7795,-18.4443,-2.00361},
		{18.3979,-21.9854,1.22083},
		{20.1707,-14.1572,1.22083},
		{30.334,5.12402,1.22083},
		{22.9521,12.1387,1.22083},
		{1.45825,18.208,1.22083},
		{-5.56128,20.1572,1.22083},
		{-6.19165,15.4678,1.22083},
		{-1.05029,9.69141,1.22083},
		{6.17896,5.19434,1.22083},
		{5.00513,2.78711,1.22083},
		{5.81836,-5.65625,1.22083},
		{-0.54541,-15.1104,1.22083},
		{1.8418,-19.8584,1.22083},
		{-2.10864,-21.9961,1.22083},
		{-5.78857,-24.9277,1.22083},
		{16.3679,-15.4463,1.22083},
		{28.0537,-17.1328,1.22083},
		{22.1833,11.416,-2.00361}};
};
class LAND_Tav_Panelak2 : Residential
{
	lootPos[] = {{2.7627,-5.62524,5.43665},
		{2.63867,-0.156494,5.43665},
		{3.4873,2.76855,5.43665},
		{6.06152,3.64966,5.43665},
		{6.70996,0.734619,5.43665},
		{4.71875,-1.69263,5.43665},
		{-0.347656,-2.23315,5.43665},
		{0.814453,-1.73901,2.71097},
		{-0.545898,-2.29468,2.71097},
		{-0.415039,4.25122,1.32864},
		{0.75,-2.01318,0.0714264},
		{0.644531,-1.86401,-2.62859}};
	zedPos[] = {{2.7627,-5.62524,5.43665},
		{2.63867,-0.156494,5.43665},
		{3.4873,2.76855,5.43665},
		{6.06152,3.64966,5.43665},
		{6.70996,0.734619,5.43665},
		{4.71875,-1.69263,5.43665},
		{-0.347656,-2.23315,5.43665},
		{0.814453,-1.73901,2.71097},
		{-0.545898,-2.29468,2.71097},
		{-0.415039,4.25122,1.32864},
		{0.75,-2.01318,0.0714264},
		{0.644531,-1.86401,-2.62859}};
};
class LAND_Tav_panelak : Residential
{
	lootPos[] = {{5.24121,-6.39453,2.77144},
		{6.71191,-5.43262,2.77144},
		{4.65625,-1.83838,2.77144},
		{6.69531,0.225586,2.77144},
		{6.54395,3.06519,2.77144},
		{3.40234,3.32324,2.77144},
		{2.61523,0.798096,2.77144},
		{2.7041,-4.98389,2.77144},
		{3.66016,-6.17651,2.77144},
		{-0.982422,-1.86328,2.77144},
		{-0.904297,4.13086,1.32864},
		{0.942383,-2.10474,0.0714226},
		{-2.56836,-1.68628,0.0714226},
		{-2.69531,3.42407,0.0714226},
		{-6.24902,3.01392,0.0714226},
		{-6.07227,0.556396,0.0714226},
		{-5.75488,-2.03857,0.0714226},
		{-6.66406,-4.34497,0.0714226},
		{-5.49219,-6.70581,0.0714226},
		{-2.41602,-4.19434,0.0714226},
		{-3.70801,-6.17212,0.0714226}};
	zedPos[] = {{5.24121,-6.39453,2.77144},
		{6.71191,-5.43262,2.77144},
		{4.65625,-1.83838,2.77144},
		{6.69531,0.225586,2.77144},
		{6.54395,3.06519,2.77144},
		{3.40234,3.32324,2.77144},
		{2.61523,0.798096,2.77144},
		{2.7041,-4.98389,2.77144},
		{3.66016,-6.17651,2.77144},
		{-0.982422,-1.86328,2.77144},
		{-0.904297,4.13086,1.32864},
		{0.942383,-2.10474,0.0714226},
		{-2.56836,-1.68628,0.0714226},
		{-2.69531,3.42407,0.0714226},
		{-6.24902,3.01392,0.0714226},
		{-6.07227,0.556396,0.0714226},
		{-5.75488,-2.03857,0.0714226},
		{-6.66406,-4.34497,0.0714226},
		{-5.49219,-6.70581,0.0714226},
		{-2.41602,-4.19434,0.0714226},
		{-3.70801,-6.17212,0.0714226}};
};
class LAND_Tav_Panelak3 : Residential
{
	lootPos[] = {{0.0878906,0.793457,-10.8154},	{-0.810547,3.44824,-10.8154}};
	zedPos[] = {{0.0878906,0.793457,-10.8154},	{-0.810547,3.44824,-10.8154}};
};
class LAND_Big_Panelak : Residential
{
	lootPos[] = {{3.30566,-9.23413,-14.7521},	{3.10059,-7.05005,-14.7521},	{5.36914,0.495361,-14.7521},	{-0.236328,-3.16772,-14.7521},	{3.05078,-0.838379,-14.7521}};
	zedPos[] = {{3.30566,-9.23413,-14.7521},	{3.10059,-7.05005,-14.7521},	{5.36914,0.495361,-14.7521},	{-0.236328,-3.16772,-14.7521},	{3.05078,-0.838379,-14.7521}};
};
class LAND_Posta : Residential
{
	lootPos[] = {{-17.4678,-9.28809,1.00044},{-16.5732,-1.32227,1.00044},{-3.60254,-5.11377,1.00044},{9.72168,-6.61035,1.00044},{17.333,-8.2085,1.00044},
		{13.3633,7.1958,1.00044},{1.56445,8.49707,1.00044}};
	zedPos[] = {{-17.4678,-9.28809,1.00044},{-16.5732,-1.32227,1.00044},{-3.60254,-5.11377,1.00044},{9.72168,-6.61035,1.00044},	{17.333,-8.2085,1.00044},
		{13.3633,7.1958,1.00044},{1.56445,8.49707,1.00044}};
};
class Land_smd_dum_istan2b : Residential // stucco 4 windows up, 2 down on left
{
	zedPos[] = {{-2.41797,2.20996,-2.34969}};
	lootPos[] = {{5.30371,-3.37402,0.822983},{-2.41504,-4.07617,0.823578},{-3.25977,-2.8623,3.80017},{-3.63574,1.1543,3.8002}};
};
class Land_smd_dum_olez_istan1_open : Residential // worn stucco 3 windows up, stairs-door on left, 1 window down
{
	zedPos[] = {{2.61328,-3.07422,-1.84399},{-4.4043,2.40918,-1.84398}};
	lootPos[] = {{1.50391,1.4043,-1.84399},{-6.95117,-5.76855,-1.84398},{4.18652,-3.46045,1.37497}};
};
class Land_smd_dum_olez_istan2_maly_open : Residential // worn stucco 3 windows up, stairs-door on left, 1 window down
{
	zedPos[] = {{-2.6709,-1.38867,-1.87241}};
	lootPos[] = {{-2.33594,2.87939,-1.87241},{-0.493164,-1.98486,1.34656}};
};
class Land_smd_dum_olez_istan2_open : Residential // cement open door shutter window wood canopy
{
	zedPos[] = {{2.34082,-2.22852,-0.229703}};
	lootPos[] = {{-2.41406,-4.83887,-0.229703},{-3.9834,3.29883,-0.229703}};
};
class Land_smd_house_y_open : Residential // cement open door, AC, blue roof
{
	zedPos[] = {{-0.40625,3.14844,-1.40688}};
	lootPos[] = {{2.68066,-3.13281,-1.40688},{2.41504,3.57764,-1.40688},{-3.43652,2.75293,-1.40688}};
};
class Land_majak : Residential // stone lighthouse
{
	zedPos[] = {{-0.756836,1.10938,-8.07302}};
	lootPos[] = {{-0.756836,1.10938,-8.07302},{-0.483398,-0.784668,-8.07302},{0.208984,-1.5918,1.72248}};
};
class Land_smd_sara_zluty_statek_in : Residential // 
{
	zedPos[] = {{4.76367,-2.59277,-2.91795}};
	lootPos[] = {{3.50293,-2.22168,-2.91434},{8.08105,2.90723,-2.8938},{3.50586,3.97852,-2.88629},{-1.37305,1.58594,-2.88646}};
};
class Land_smd_dum_olezlina_open : Residential // 4 windows up 3 down and door
{
	zedPos[] = {{3.68604,1.09766,-3.83481}};
	lootPos[] = {{3.68604,1.09766,-3.83481},{-2.39355,-2.43457,-3.83481},{-4.78809,-2.15039,-0.434065}};
};
class Land_majak2 : Residential // stone lighthouse
{
	zedPos[] = {{0.125977,1.02539,-8.07302}};
	lootPos[] = {{-0.570801,1.09668,-8.07302},{1.74023,1.0752,1.72248}};
};
class Land_smd_budova3_open : Residential // blue doors + fireplace
{
	zedPos[] = {{1.44531,-0.165039,-1.91334}};
	lootPos[] = {{-0.738281,-1.79004,-1.9121},{-1.49609,2.75537,-1.9142}};
};
class Land_budova5 : Residential // guardhouse stoop
{
	lootPos[] = {{-2.24902,0.361328,-1.95059},{-2.25098,3.33887,-1.95059}};
};
class Land_smd_dum_istan3_hromada : Residential //brick 2 story with awning
{
	zedPos[] = {{0.521973,2.65039,-3.328}};
	lootPos[] = {{-1.12988,-2.4541,-3.328},{0.297852,0.660156,-3.328}};
};
class Land_smd_kasarna : Residential // 
{
	zedPos[] = {{6.47363,20.6445,-8.77723},{-14.2305,16.1533,-8.77723}};
};
// ALT-MAP Support
class Land_House_L_7_EP1 : Residential // tak adobe open door on left 1 window on right
{
	zedPos[] = {{5.14258,0.34082,-0.169495}};
	lootPos[] = {{5.14258,0.34082,-0.169495},{-4.36523,2.34766,-0.649666},{-4.22705,-4.20996,-0.930611}};
};
class Land_House_K_6_EP1 : Residential // tak 3 story cement open door red blanket on second balcony
{
	zedPos[] = {{-3.42285,0.123291,1.48813},{1.25244,3.29688,4.42145}};
	lootPos[] = {{1.6333,4.93286,-1.60791},{0.728516,2.53174,1.47144},{-3.42285,0.123291,1.48813},{1.25244,3.29688,4.42145},{-3.85645,0.323242,4.3952}};
};
//class Land_Mil_Guardhouse_EP1 : Land_Mil_Guardhouse{};	// tak 

class land_seb_bouda3 : Residential // nm house
{
	zedPos[] = {{-0.324219,4.1377,-1.72852},{1.2998,-3.30176,-1.72853},{-1.80664,-3.65234,-1.7286}};
	lootPos[] = {{1.83545,-2.07031,-1.72861},{-2.51172,-3.19824,-1.7287},{2.03906,-1.02344,-1.72863},{-2.31543,-0.154297,-1.72868},{-2.37695,3.83887,-1.72868},{2.21289,3.88965,-1.72866}};
};
class land_seb_mine_maringotka: Residential { // Nm
		lootPos[] = {{0.291992, 0.46582, -0.644005}, {-0.0292969, -1.37817, -0.644009}};
};

