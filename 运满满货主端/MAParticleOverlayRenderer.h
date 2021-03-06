//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOverlayRenderer.h"

@class MAParticleOverlay;

@interface MAParticleOverlayRenderer : MAOverlayRenderer
{
    unsigned int _textureID;
    struct GLShaderManager *_glShaderManager;
    struct ParticleSystem *_particleSystem;
}

- (void)clearTextures;
- (void)glRender;
- (void)initTexture;
- (void)updateOptions;
- (void)buildParticleOverlayRenderer;
- (void)dealloc;
- (id)initWithParticleOverlay:(id)arg1;
@property(readonly, nonatomic) MAParticleOverlay *particleOverlay;

@end

