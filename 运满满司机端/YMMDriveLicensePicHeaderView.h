//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface YMMDriveLicensePicHeaderView : UIView
{
    _Bool _canEdit;
    _Bool _backTap;
    int _picNum;
    CDUnknownBlockType _updateBlock;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIImageView *_homeImgView;
    UILabel *_homeLabel;
    UIImageView *_subImgView;
    UILabel *_subLabel;
    UIButton *_updateButton;
    UIImageView *_arrowIcon;
    UIButton *_backButton;
    NSString *_titleContent;
    NSString *_homeImgUrl;
    NSString *_subImgUrl;
}

@property(copy, nonatomic) NSString *subImgUrl; // @synthesize subImgUrl=_subImgUrl;
@property(copy, nonatomic) NSString *homeImgUrl; // @synthesize homeImgUrl=_homeImgUrl;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UIImageView *subImgView; // @synthesize subImgView=_subImgView;
@property(retain, nonatomic) UILabel *homeLabel; // @synthesize homeLabel=_homeLabel;
@property(retain, nonatomic) UIImageView *homeImgView; // @synthesize homeImgView=_homeImgView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool backTap; // @synthesize backTap=_backTap;
@property(nonatomic) int picNum; // @synthesize picNum=_picNum;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)disableBtnEvent:(_Bool)arg1;
- (void)showHomePage:(id)arg1 andHomePlace:(id)arg2 andSubPage:(id)arg3 andSubPlace:(id)arg4;
- (void)imgScan:(id)arg1;
- (void)backBtnEvent:(id)arg1;
- (void)updateBtnEvent:(id)arg1;
- (void)addsubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTitle:(id)arg2 andEdit:(_Bool)arg3 andPicNum:(int)arg4 andBackTap:(_Bool)arg5;

@end

