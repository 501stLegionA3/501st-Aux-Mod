// config.bin - 16:54:27 10/31/16, generated in 0.04 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled


//Hello, this is namenai. So theres a CUP dev named Taro who gave me this, I did some slight modifications but by large
//He made these blast refraction effects. Please credit him.

#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(blast_refract)
	{
		addonRootClass = macro_patch_name(particle_effects)
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			macro_patch_name(particle_effects)
		};
		version = 1;
		author[] = {"Taro"};
	};
};

class CfgAmmo
{
	
	class Missile_AGM_02_F;
	class LAAT_proton_torpedo: Missile_AGM_02_F
	{
		
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		// effectsMissileInit = "PylonBackEffects";
		
	};

	
};
#define sizeMulti .25
#define effectMulti 4
class CfgCloudlets
{
	class Default;

	class blast_wave_effect : Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		colorVar[] = {0, 0, 0, 0};
		color[] = {{0.1, 0.1, 0.1, 1*effectMulti*2}, {0.25, 0.25, 0.25, 1*effectMulti}, {0.5, 0.5, 0.5, 1*effectMulti}, {0, 0, 0, 1*effectMulti}, {0, 0, 0, 0.5*effectMulti}, {0, 0, 0, 0.3*effectMulti}};
		interval = 3 * 10;
		lifeTime = 0.4;
		lifeTimeVar = 0;
		MoveVelocityVar[] = {0.2, 0.5, 0.2};
		moveVelocity[] = {0, 0, 0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\refract";
		particleType = "Billboard";
		positionVar[] = {0.40000001, 0.1, 0.40000001};
		randomDirectionIntensity = 0.2;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 90;
		rubbing = 0.1;
		sizeVar = 0.5;
		Size[] = {1, 2, 5, 8, 12, 17};
		timerPeriod = 1;
		volume = 7.9000001;
		weight = 10;
	};
	class blast_wave_effect_small : blast_wave_effect
	{
		lifeTime = 0.6;
		Size[] = {1*sizeMulti, 2*sizeMulti, 5*sizeMulti, 8*sizeMulti, 12*sizeMulti, 17*sizeMulti};//{1, 2, 5, 8, 12, 17};
	};
	class blast_wave_effect_medium : blast_wave_effect
	{
		lifeTime = 0.6;
		Size[] = {1*sizeMulti, 8*sizeMulti, 20*sizeMulti, 35*sizeMulti, 50*sizeMulti, 70*sizeMulti};
	};
	class blast_wave_effect_large : blast_wave_effect
	{
		lifeTime = 0.6;
		Size[] = {1*sizeMulti, 16*sizeMulti, 40*sizeMulti, 70*sizeMulti, 100*sizeMulti, 140*sizeMulti};
	};
	class blast_wave_effect_very_large : blast_wave_effect
	{
		lifeTime = 1.0;
		Size[] = {1*sizeMulti, 35*sizeMulti, 80*sizeMulti, 140*sizeMulti, 200*sizeMulti, 280*sizeMulti};
	};

	class Missile3;

	class RD501_Laat_Missile3:Missile3
	{
		color[] = {{0.0,0.2,0.7,0.18},{0.0,0.25,0.75,0.06},{0.0,0.4,0.8,0}};
	};
	class RD501_Laat_Missile3_Violet:Missile3
	{
		color[] = {{0.35,0.0,0.35,0.03},{0.325,0.0,0.6,0.03},{0.4,0.0,0.5,0}};
	};
	class RocketBackfireRPG;

	class RD501_laat_RocketBackfireRPG:RocketBackfireRPG
	{
		color[] = {{0.0,0.2,0.7, -2}, {0.0,0.25,0.75, -1}, {0.0,0.25,0.8, -0.6}, {0.0,0.3,0.8, -0.4}, {0.0,0.4,0.8, 0}};
	};

	class PylonBacksmoke;
	class RD501_laat_PylonBacksmoke:PylonBacksmoke
	{
		color[] = {{0.0,0.2,0.7,0.18},{0.0,0.25,0.75,0.06},{0.0,0.4,0.8,0}};
		sizeCoef = 4;
	}

};
class CfgLights
{
	class RocketLight;
	class RD_501_Laat_RocketLight:RocketLight
	{
		// diffuse[] = {1, 0.55, 0.05};
		color[] = {.05,0.28,1};
		diffuse[] = {.05,0.28,1};	
	};
	class RD_501_Laat_RocketLight_Violet:RocketLight
	{
		color[] = {0.4,0.15,0.5};
		diffuse[] = {0.4,0.15,0.5};	
	};
};

//------------------------------------------------------------
class IEDMineBigExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};


//ADDED

class RD501_Thermobaric_Explosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};


// class FX_Missile_AA
// {
// 	class FX_Missile_AA_light_01
// 	{
// 		simulation = "light";
// 		type = "RocketLight";
// 		position[] = {0, 0, 0};
// 		intensity = 0.01;
// 		interval = 1;
// 		lifeTime = 1;
// 	};
// 	class FX_Plane_Missile_AA_high
// 	{
// 		simulation = "particles";
// 		type = "Missile3";
// 		position[] = {0, 0, 0};
// 		intensity = 1;
// 		interval = 1;
// 		lifeTime = 1;
// 		qualityLevel = 2;
// 	};
// 	class FX_Plane_Missile_AA_medium
// 	{
// 		simulation = "particles";
// 		type = "Missile3";
// 		position[] = {0, 0, 0};
// 		intensity = 1;
// 		interval = 1;
// 		lifeTime = 1;
// 		qualityLevel = 1;
// 	};
// 	class FX_Plane_Missile_AA_low
// 	{
// 		simulation = "particles";
// 		type = "Missile3";
// 		position[] = {0, 0, 0};
// 		intensity = 1;
// 		interval = 1;
// 		lifeTime = 1;
// 		qualityLevel = 0;
// 	};
// };


class FX_Missile_AA;
class RD501_FX_Missile_AA:FX_Missile_AA
{
	class FX_Missile_AA_light_01
	{
		simulation = "light";
		type = "RD_501_Laat_RocketLight";
		position[] = {0, 0, 0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation = "particles";
		type = "RD501_Laat_Missile3";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RD501_FX_Missile_AA_Violet:RD501_FX_Missile_AA
{
	class FX_Missile_AA_light_02
	{
		simulation = "light";
		type = "RD_501_Laat_RocketLight_Violet";
		position[] = {0, 0, 0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class FX_Plane_Missile_AA_high_02
	{
		simulation = "particles";
		type = "RD501_Laat_Missile3_Violet";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};


class RD501_Laat_RocketBackEffectsRPG
{
	class RocketBackfire1
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RD501_laat_RocketBackfireRPG";
	};
	class RocketBacksmoke2
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RD501_laat_RocketBackfireRPG";
	};
	class RocketFrontsmoke
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RD501_laat_RocketBackfireRPG";
	};
};

class RD501_laat_PylonBackEffectsFFAR
{
	class RocketBackfire1
	{
		simulation = "particles";
		type = "PylonBackfireFFAR";
		start = 1;
		lifeTime = 1e-006;
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation = "particles";
		type = "RD501_laat_PylonBacksmoke";
	};
};

//Blast refect
class ExploAmmoLaserCannon
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
}

class SWOP_PlasmaExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
}



class IEDMineSmallExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class SencondaryExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MineNondirectionalExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MineNondirectionalExplosionSmall
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ExplosionEffects
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class BasicAmmoExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MineExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ATMineExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class BoundingMineExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class DirectionalMineExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class DirectionalMineExplosionBig
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class HERocketExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class HEShellExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ArtyShellExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class HelicopterExplosionEffects
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class HelicopterExplosionEffects2
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class VehicleExplosionEffectsBig
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class VehicleExplosionEffects
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class RocketExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class Demo_Charge_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class M136_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 40mm_HE_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class GrenadeExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 80mm_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MortarExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 155mm_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ATMissileExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class AAMissileExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ATRocketExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class BombExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class AA_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class Hellfire_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class SABOT_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MK82_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class MLRS_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_very_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class HERoundExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_large";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 25mm_Explode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class ExploAmmoExplosion
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 30mmExplode
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_small";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};

class 120mm_HE
{
	class blast_wave_refract
	{
		simulation = "particles";
		type = "blast_wave_effect_medium";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 3 * 1;
		lifeTime = 1;
	};
};