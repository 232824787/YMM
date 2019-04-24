//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YMMCargoDepositGuaranteeModel;

@interface YMMCustomDepositAlertView : UIView
{
    _Bool _isPublish;
    CDUnknownBlockType _clickUrlLinkBlock;
    UIView *_maskView;
    UIView *_containerView;
    YMMCargoDepositGuaranteeModel *_depositItem;
}

@property(nonatomic) _Bool isPublish; // @synthesize isPublish=_isPublish;
@property(retain, nonatomic) YMMCargoDepositGuaranteeModel *depositItem; // @synthesize depositItem=_depositItem;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType clickUrlLinkBlock; // @synthesize clickUrlLinkBlock=_clickUrlLinkBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)boundingRectWithSize:(struct CGSize)arg1 textString:(id)arg2 font:(id)arg3;
- (void)sureButtonTapped:(id)arg1;
- (void)dimiss;
- (void)clickURL;
- (void)show:(id)arg1;
- (void)showAlertViewWithTextString:(id)arg1 isPublish:(_Bool)arg2;
- (void)showAlertViewWithTextString:(id)arg1 isReturn:(_Bool)arg2 isPublish:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

