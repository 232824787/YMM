//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YMMAudioConfig;

@interface YMMAudioManager : NSObject
{
    _Bool _isPlaying;
    _Bool _isBlock;
    id <YMMIAudioSource> _audioSource;
    YMMAudioConfig *_nowAudio;
    CDUnknownBlockType _audioCallBack;
}

+ (id)shared;
@property(nonatomic) _Bool isBlock; // @synthesize isBlock=_isBlock;
@property(copy, nonatomic) CDUnknownBlockType audioCallBack; // @synthesize audioCallBack=_audioCallBack;
@property(retain, nonatomic) YMMAudioConfig *nowAudio; // @synthesize nowAudio=_nowAudio;
@property(retain, nonatomic) id <YMMIAudioSource> audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)stop;
- (_Bool)toPlay:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)on;
- (void)off;
- (id)init;

@end

