//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol YMMTTSSdkDelegate <NSObject>
- (void)speakCanceled;
- (void)speakError:(NSError *)arg1 speakSentence:(long long)arg2;
- (void)speakFinishWorkingSentence:(long long)arg1;
- (void)speakEndSentence:(long long)arg1;
- (void)speakStartSentence:(long long)arg1;
- (void)speakStartWorkingSentence:(long long)arg1;
@end

