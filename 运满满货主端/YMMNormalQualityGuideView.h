//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface YMMNormalQualityGuideView : UIView
{
    unsigned long long _currentStep;
    CDUnknownBlockType _nextActionBlock;
    CDUnknownBlockType _againActionBlock;
    CDUnknownBlockType _closeActionBlock;
    UIView *_backgroundView;
    UIImageView *_imageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UIButton *_nextButton;
    UIButton *_resetButton;
    struct CGRect _imageFrame;
}

@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType closeActionBlock; // @synthesize closeActionBlock=_closeActionBlock;
@property(copy, nonatomic) CDUnknownBlockType againActionBlock; // @synthesize againActionBlock=_againActionBlock;
@property(copy, nonatomic) CDUnknownBlockType nextActionBlock; // @synthesize nextActionBlock=_nextActionBlock;
@property(nonatomic) unsigned long long currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
- (void).cxx_destruct;
- (void)_againButtonAction:(id)arg1;
- (void)_nextButtonAction:(id)arg1;
- (void)layoutSubviews;
- (void)setContentHide:(_Bool)arg1;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

@end

