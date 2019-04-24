//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class GTImageView, GTMainNoticeDataModel, UIButton, UIView;

@interface GTMainNoticeImageButtonMaskView : YMMPopupMaskView
{
    UIView *_backView;
    GTImageView *_imageView;
    UIButton *_imageButton;
    UIButton *_cancelBtn;
    UIView *_lineView;
    UIButton *_submitBtn;
    GTMainNoticeDataModel *_dataModel;
    id <GTMainNoticeDelegate> _delegate;
}

@property(nonatomic) __weak id <GTMainNoticeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTMainNoticeDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) GTImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)ymm_loadView;
- (void)touchCancel;
- (void)touchSubmit;
- (id)initWithDataModel:(id)arg1 delegate:(id)arg2;

@end

