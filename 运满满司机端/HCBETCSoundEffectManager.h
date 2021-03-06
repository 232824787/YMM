//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HCBETCSoundEffectManager : NSObject
{
    unsigned int _systemSoundID[5];
    _Bool _playing;
    NSArray *_soundEffects;
}

+ (id)shared;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) NSArray *soundEffects; // @synthesize soundEffects=_soundEffects;
- (void).cxx_destruct;
- (void)loadSoundEffect:(unsigned long long)arg1;
- (void)playSoundEffect:(unsigned long long)arg1;
- (void)playFailRecharging;
- (void)playSucceedRecharging;
- (void)playFailReading;
- (void)playSucceedReading;
- (void)playReading;
- (void)clear;
- (void)setup;

@end

