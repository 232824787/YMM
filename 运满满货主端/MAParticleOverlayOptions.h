//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAParticleEmissionModule, MAParticleOverLifeModule, UIImage;

@interface MAParticleOverlayOptions : NSObject
{
    struct VelocityGenerateProxy *_internalVelocityGenerate;
    struct ColorGenerateProxy *_internalColorGenerate;
    struct ParticleShapeModuleProxy *_internalParticleShapeModule;
    _Bool _visibile;
    _Bool _loop;
    double _duration;
    long long _maxParticles;
    UIImage *_icon;
    double _particleLifeTime;
    id <MAParticleColorGenerate> _particleStartColor;
    id <MAParticleVelocityGenerate> _particleStartSpeed;
    MAParticleEmissionModule *_particleEmissionModule;
    id <MAParticleShapeModule> _particleShapeModule;
    MAParticleOverLifeModule *_particleOverLifeModule;
    struct CGSize _startParticleSize;
}

@property(retain, nonatomic) MAParticleOverLifeModule *particleOverLifeModule; // @synthesize particleOverLifeModule=_particleOverLifeModule;
@property(retain, nonatomic) id <MAParticleShapeModule> particleShapeModule; // @synthesize particleShapeModule=_particleShapeModule;
@property(retain, nonatomic) MAParticleEmissionModule *particleEmissionModule; // @synthesize particleEmissionModule=_particleEmissionModule;
@property(retain, nonatomic) id <MAParticleVelocityGenerate> particleStartSpeed; // @synthesize particleStartSpeed=_particleStartSpeed;
@property(retain, nonatomic) id <MAParticleColorGenerate> particleStartColor; // @synthesize particleStartColor=_particleStartColor;
@property(nonatomic) double particleLifeTime; // @synthesize particleLifeTime=_particleLifeTime;
@property(nonatomic) struct CGSize startParticleSize; // @synthesize startParticleSize=_startParticleSize;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long maxParticles; // @synthesize maxParticles=_maxParticles;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool visibile; // @synthesize visibile=_visibile;
- (void).cxx_destruct;
- (void)setParticleEmissonModule:(id)arg1;
- (struct ParticleOverLifeModule *)getParticleOverLife;
- (struct ParticleShapeModuleProxy *)getParticleShapeModule;
- (struct ParticleEmissionModule *)getParticleEmissionModule;
- (struct ColorGenerateProxy *)getColorGenerate;
- (struct VelocityGenerateProxy *)getVelocityGenerate;
- (void)dealloc;
- (id)init;

@end

