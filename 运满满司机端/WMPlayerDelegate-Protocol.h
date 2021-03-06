//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, UITapGestureRecognizer, WMPlayer;

@protocol WMPlayerDelegate <NSObject>

@optional
- (void)wmplayerFinishedPlay:(WMPlayer *)arg1;
- (void)wmplayerReadyToPlay:(WMPlayer *)arg1 WMPlayerStatus:(long long)arg2;
- (void)wmplayerFailedPlay:(WMPlayer *)arg1 WMPlayerStatus:(long long)arg2;
- (void)wmplayer:(WMPlayer *)arg1 isHiddenTopAndBottomView:(_Bool)arg2;
- (void)wmplayer:(WMPlayer *)arg1 doubleTaped:(UITapGestureRecognizer *)arg2;
- (void)wmplayer:(WMPlayer *)arg1 singleTaped:(UITapGestureRecognizer *)arg2;
- (void)wmplayer:(WMPlayer *)arg1 clickedFullScreenButton:(UIButton *)arg2;
- (void)wmplayer:(WMPlayer *)arg1 clickedCloseButton:(UIButton *)arg2;
- (void)wmplayer:(WMPlayer *)arg1 clickedPlayOrPauseButton:(UIButton *)arg2;
@end

