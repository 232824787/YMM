//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSDictionary, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface VFSDKRiskShieldManualVerifyTipsVC : VFSDKBaseViewController
{
    NSDictionary *_pageConfig;
    CDUnknownBlockType _didPressCommitButton;
    UIImageView *_iconView;
    UILabel *_titlelabel;
    UILabel *_descLabel;
    UIButton *_button;
    NSLayoutConstraint *_labelsVertical;
}

@property(retain, nonatomic) NSLayoutConstraint *labelsVertical; // @synthesize labelsVertical=_labelsVertical;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType didPressCommitButton; // @synthesize didPressCommitButton=_didPressCommitButton;
@property(retain, nonatomic) NSDictionary *pageConfig; // @synthesize pageConfig=_pageConfig;
- (void).cxx_destruct;
- (void)p_buttonDidPressed:(id)arg1;
- (void)p_setupUI;
- (id)trackablePVPageId;
- (void)viewDidLoad;

@end

