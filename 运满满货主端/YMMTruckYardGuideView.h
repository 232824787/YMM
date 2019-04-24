//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class UIButton, UIImageView;

@interface YMMTruckYardGuideView : YMMPopupMaskView
{
    double _serviceViewY;
    double _inTransitCellViewY;
    CDUnknownBlockType _dissmissCallback;
    unsigned long long _currentGuideStep;
    UIImageView *_firstStepImageView;
    UIImageView *_secondStepImageView;
    UIImageView *_lastStepImageView;
    UIButton *_bottomButton;
}

@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIImageView *lastStepImageView; // @synthesize lastStepImageView=_lastStepImageView;
@property(retain, nonatomic) UIImageView *secondStepImageView; // @synthesize secondStepImageView=_secondStepImageView;
@property(retain, nonatomic) UIImageView *firstStepImageView; // @synthesize firstStepImageView=_firstStepImageView;
@property(nonatomic) unsigned long long currentGuideStep; // @synthesize currentGuideStep=_currentGuideStep;
@property(copy) CDUnknownBlockType dissmissCallback; // @synthesize dissmissCallback=_dissmissCallback;
@property(nonatomic) double inTransitCellViewY; // @synthesize inTransitCellViewY=_inTransitCellViewY;
@property(nonatomic) double serviceViewY; // @synthesize serviceViewY=_serviceViewY;
- (void).cxx_destruct;
- (void)nextStepAction:(id)arg1;
- (void)setViewConstraints;
- (void)initControls;
- (void)show;
- (void)dealloc;
- (id)init;

@end

