//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIView, YMMVirtualContactGradientColorButton;

@interface YMMVirtualContactCallAlertView : YMMPopupMaskView
{
    CDUnknownBlockType _selectPhoneAction;
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _changePhoneAction;
    NSString *_phone;
    NSString *_headPic;
    NSString *_editPhoneButtonTitle;
    NSArray *_phoneList;
    UIButton *_closeButton;
    UIView *_mView;
    UIImageView *_headPicImageView;
    UILabel *_phoneTopLabel;
    UILabel *_phoneLabel;
    UILabel *_phoneDownLabel;
    UIButton *_editPhoneButton;
    UILabel *_phoneListTopTipLabel;
    UIView *_phoneListView;
    YMMVirtualContactGradientColorButton *_singleCallButton;
}

@property(retain, nonatomic) YMMVirtualContactGradientColorButton *singleCallButton; // @synthesize singleCallButton=_singleCallButton;
@property(retain, nonatomic) UIView *phoneListView; // @synthesize phoneListView=_phoneListView;
@property(retain, nonatomic) UILabel *phoneListTopTipLabel; // @synthesize phoneListTopTipLabel=_phoneListTopTipLabel;
@property(retain, nonatomic) UIButton *editPhoneButton; // @synthesize editPhoneButton=_editPhoneButton;
@property(retain, nonatomic) UILabel *phoneDownLabel; // @synthesize phoneDownLabel=_phoneDownLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *phoneTopLabel; // @synthesize phoneTopLabel=_phoneTopLabel;
@property(retain, nonatomic) UIImageView *headPicImageView; // @synthesize headPicImageView=_headPicImageView;
@property(retain, nonatomic) UIView *mView; // @synthesize mView=_mView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSArray *phoneList; // @synthesize phoneList=_phoneList;
@property(copy, nonatomic) NSString *editPhoneButtonTitle; // @synthesize editPhoneButtonTitle=_editPhoneButtonTitle;
@property(copy, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) CDUnknownBlockType changePhoneAction; // @synthesize changePhoneAction=_changePhoneAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType selectPhoneAction; // @synthesize selectPhoneAction=_selectPhoneAction;
- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)changePhone;
- (void)dismiss;
- (void)show;
- (void)ymm_maskDidDisappear;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskWillDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_maskWillAppear;
- (void)ymm_loadView;
- (id)init;

@end

