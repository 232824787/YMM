//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGBaseBottomManager.h"

@class UIImageView;

@interface MGDefaultBottomManager : MGBaseBottomManager
{
    double _aniViewHeigh;
    double _aniViewWidth;
    UIImageView *_imageViewA;
    UIImageView *_imageViewB;
    double _cencerX;
    double _topDistance;
}

@property(nonatomic) double topDistance; // @synthesize topDistance=_topDistance;
@property(nonatomic) double cencerX; // @synthesize cencerX=_cencerX;
@property(retain, nonatomic) UIImageView *imageViewB; // @synthesize imageViewB=_imageViewB;
@property(retain, nonatomic) UIImageView *imageViewA; // @synthesize imageViewA=_imageViewA;
- (void).cxx_destruct;
- (void)willChangeAnimation:(int)arg1 outTime:(double)arg2 currentStep:(long long)arg3;
- (void)recoveryView;
- (void)creatAniamtionView;
- (void)creatBottomView;

@end

