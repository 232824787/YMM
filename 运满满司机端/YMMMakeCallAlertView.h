//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, UIViewController;

@interface YMMMakeCallAlertView : YMMPopupMaskView
{
    UIViewController *_currentVC;
    NSString *_bargainId;
    NSString *_orderId;
    CDUnknownBlockType _makeCallAction;
    NSString *_telephone;
    UIView *_contentView;
    UIImageView *_rightCornerCloseButton;
    UIImageView *_bannerImageView;
    UILabel *_titleLabel;
    UILabel *_changeTelLabel;
    UIButton *_makeCallBtn;
    UITapGestureRecognizer *_rightCornerDismissGesture;
    UITapGestureRecognizer *_changeTelephoneGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *changeTelephoneGesture; // @synthesize changeTelephoneGesture=_changeTelephoneGesture;
@property(retain, nonatomic) UITapGestureRecognizer *rightCornerDismissGesture; // @synthesize rightCornerDismissGesture=_rightCornerDismissGesture;
@property(retain, nonatomic) UIButton *makeCallBtn; // @synthesize makeCallBtn=_makeCallBtn;
@property(retain, nonatomic) UILabel *changeTelLabel; // @synthesize changeTelLabel=_changeTelLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIImageView *rightCornerCloseButton; // @synthesize rightCornerCloseButton=_rightCornerCloseButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) CDUnknownBlockType makeCallAction; // @synthesize makeCallAction=_makeCallAction;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *bargainId; // @synthesize bargainId=_bargainId;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)closeAlertView:(id)arg1;
- (void)makeCallClick:(id)arg1;
- (void)changeTelLabelTap:(id)arg1;
- (double)FlexibleWidth;
- (double)FlexibleHeight;
- (void)dismiss;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_loadView;
- (double)ymm_animationDuration;
- (void)showAlertView;
- (void)addMakeCallAction:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithTelephone:(id)arg1;

@end

