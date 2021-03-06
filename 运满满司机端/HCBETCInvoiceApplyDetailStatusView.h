//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, HCBETCInvoiceApplyDetailModel, UIImageView, UILabel;

@interface HCBETCInvoiceApplyDetailStatusView : UIView
{
    HCBETCInvoiceApplyDetailModel *_detailModel;
    CDUnknownBlockType _blockViewExpress;
    UIView *_viewContainer;
    CAGradientLayer *_gradientLayer;
    UILabel *_labStatus;
    UILabel *_labDesc;
    UIImageView *_imgVStatus;
    UIView *_viewPostStatus;
    UILabel *_labPostStatus;
    UILabel *_labExpress;
    UIImageView *_imgVArrow;
}

@property(retain, nonatomic) UIImageView *imgVArrow; // @synthesize imgVArrow=_imgVArrow;
@property(retain, nonatomic) UILabel *labExpress; // @synthesize labExpress=_labExpress;
@property(retain, nonatomic) UILabel *labPostStatus; // @synthesize labPostStatus=_labPostStatus;
@property(retain, nonatomic) UIView *viewPostStatus; // @synthesize viewPostStatus=_viewPostStatus;
@property(retain, nonatomic) UIImageView *imgVStatus; // @synthesize imgVStatus=_imgVStatus;
@property(retain, nonatomic) UILabel *labDesc; // @synthesize labDesc=_labDesc;
@property(retain, nonatomic) UILabel *labStatus; // @synthesize labStatus=_labStatus;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(copy, nonatomic) CDUnknownBlockType blockViewExpress; // @synthesize blockViewExpress=_blockViewExpress;
@property(retain, nonatomic) HCBETCInvoiceApplyDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (id)postageAttributedString;
- (void)actionViewExpress:(id)arg1;
- (void)updateStatus;
- (void)setupSubviews;
- (id)init;

@end

