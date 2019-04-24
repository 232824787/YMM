//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface HCBETCQiluConfirmView : UIView
{
    UIView *_containerView;
    UILabel *_titleLabel;
    UIView *_cardInfoContainerView;
    UILabel *_plateLabel;
    UILabel *_cardNoLabel;
    UIButton *_cancelBtn;
    UIButton *_doneBtn;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *cardNoLabel; // @synthesize cardNoLabel=_cardNoLabel;
@property(retain, nonatomic) UILabel *plateLabel; // @synthesize plateLabel=_plateLabel;
@property(retain, nonatomic) UIView *cardInfoContainerView; // @synthesize cardInfoContainerView=_cardInfoContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)clickDoneBtn:(id)arg1;
- (void)clickCancelBtn:(id)arg1;
- (void)setPlate:(id)arg1 andCardNo:(id)arg2;
- (void)loadUI;
- (id)initWithDoneBlock:(CDUnknownBlockType)arg1 andCancelBlock:(CDUnknownBlockType)arg2;

@end

