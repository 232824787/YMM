//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YMMScrollTextViewProtocol.h"

@class CADisplayLink, NSDictionary, NSString, UIButton, UIColor, UILabel, YMMAdvertisementModel;

@interface YMMAdvertisementView : UIView <YMMScrollTextViewProtocol>
{
    YMMAdvertisementModel *_adModel;
    UIColor *_titleColor;
    UIColor *_adbackgroupColor;
    id <YMMAdvertisementViewDelegate> _delegate;
    CDUnknownBlockType _btnClick;
    NSString *_pageName;
    NSString *_textElementId;
    NSString *_btnElementId;
    NSDictionary *_extraDic;
    UILabel *_contenLabel;
    UIButton *_cancelButton;
    CADisplayLink *_link;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *contenLabel; // @synthesize contenLabel=_contenLabel;
@property(retain, nonatomic) NSDictionary *extraDic; // @synthesize extraDic=_extraDic;
@property(copy, nonatomic) NSString *btnElementId; // @synthesize btnElementId=_btnElementId;
@property(copy, nonatomic) NSString *textElementId; // @synthesize textElementId=_textElementId;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) CDUnknownBlockType btnClick; // @synthesize btnClick=_btnClick;
@property(nonatomic) __weak id <YMMAdvertisementViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *adbackgroupColor; // @synthesize adbackgroupColor=_adbackgroupColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) YMMAdvertisementModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)advertClick;
- (void)removeFromSuperview;
- (void)remove;
- (void)reloca;
- (void)stopAnimation;
- (void)startAnimation;
@property(copy, nonatomic) NSString *title;
- (void)deleteLinks;
- (void)createLinks;
- (void)createSubviews;
- (void)hook;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

