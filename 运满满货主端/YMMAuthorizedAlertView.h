//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, UIButton, UILabel, UIView;

@interface YMMAuthorizedAlertView : YMMPopupMaskView
{
    _Bool _needCloseBtn;
    id <YMMAuthorizedAlertDelegate> _delegate;
    CDUnknownBlockType _didClickCloseBtnBlock;
    CDUnknownBlockType _didClickConfirmBtnBlock;
    NSString *_title;
    NSString *_message;
    NSString *_confirmTitle;
    NSString *_confirmSchema;
    NSString *_confirmBtnBackgroundColor;
    UIView *_radiusView;
    UIButton *_headerBtn;
    UIButton *_closeBtn;
    UILabel *_messageLab;
    UIButton *_confirmBtn;
    CDUnknownBlockType _dissmissBlock;
}

+ (id)new;
@property(copy, nonatomic) CDUnknownBlockType dissmissBlock; // @synthesize dissmissBlock=_dissmissBlock;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *messageLab; // @synthesize messageLab=_messageLab;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *headerBtn; // @synthesize headerBtn=_headerBtn;
@property(retain, nonatomic) UIView *radiusView; // @synthesize radiusView=_radiusView;
@property(nonatomic) _Bool needCloseBtn; // @synthesize needCloseBtn=_needCloseBtn;
@property(copy, nonatomic) NSString *confirmBtnBackgroundColor; // @synthesize confirmBtnBackgroundColor=_confirmBtnBackgroundColor;
@property(copy, nonatomic) NSString *confirmSchema; // @synthesize confirmSchema=_confirmSchema;
@property(copy, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType didClickConfirmBtnBlock; // @synthesize didClickConfirmBtnBlock=_didClickConfirmBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickCloseBtnBlock; // @synthesize didClickCloseBtnBlock=_didClickCloseBtnBlock;
@property(nonatomic) __weak id <YMMAuthorizedAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickConfirmButton:(id)arg1;
- (void)didClickCloseButton:(id)arg1;
- (void)ymm_loadView;
- (void)show;
- (void)reloadData;
- (void)initContentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 message:(id)arg3 confirmTitle:(id)arg4 confirmSchema:(id)arg5 confirmBtnBackgroundColor:(id)arg6 needCloseBtn:(_Bool)arg7 dismissBlock:(CDUnknownBlockType)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

