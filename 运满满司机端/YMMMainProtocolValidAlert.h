//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseAlertView.h"

@class UIView, YMMAgreementCheckLastAgreementResponseModel, YMMDTAttributedTextView;

@interface YMMMainProtocolValidAlert : YMMBaseAlertView
{
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _cancelBlock;
    YMMAgreementCheckLastAgreementResponseModel *_checkModel;
    YMMDTAttributedTextView *_textView;
    UIView *_contentV;
}

@property(retain, nonatomic) UIView *contentV; // @synthesize contentV=_contentV;
@property(retain, nonatomic) YMMDTAttributedTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) YMMAgreementCheckLastAgreementResponseModel *checkModel; // @synthesize checkModel=_checkModel;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
- (void).cxx_destruct;
- (void)setup;
- (void)show;
- (id)contentView;
- (id)init;

@end

