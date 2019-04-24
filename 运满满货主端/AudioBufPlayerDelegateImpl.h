//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioBufPlayerDelegate.h"

@class NSString;

@interface AudioBufPlayerDelegateImpl : NSObject <AudioBufPlayerDelegate>
{
    bds_weak_ptr_8ba8035f _owner;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playerWillStartPlayback:(id)arg1;
- (void)aboutToEnd:(id)arg1;
- (void)PlayerError:(int)arg1 fromPlayer:(id)arg2 errorDescription:(id)arg3;
- (void)PlaybackFinished:(id)arg1;
- (void)PlayerWasResumed:(id)arg1;
- (void)PlayerWasPaused:(int)arg1 fromPlayer:(id)arg2;
- (void)updatedTotalLength:(double)arg1 fromPlayer:(id)arg2;
- (void)playProgressChanged:(double)arg1 fromPlayer:(id)arg2;
- (id)initWithOwner:(bds_weak_ptr_8ba8035f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

