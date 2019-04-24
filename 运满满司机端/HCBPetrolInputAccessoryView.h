//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, UIButton;

@interface HCBPetrolInputAccessoryView : UIView
{
    UIView *_view;
    UIButton *_doneButton;
    NSArray *_priceButtons;
    NSArray *_prices;
    NSLayoutConstraint *middleButtonLeftCons;
    NSLayoutConstraint *middleButtonRightCons;
    CDUnknownBlockType _tapPriceBlock;
    CDUnknownBlockType _doneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType tapPriceBlock; // @synthesize tapPriceBlock=_tapPriceBlock;
- (void).cxx_destruct;
- (void)doneAction:(id)arg1;
- (void)choosePrice:(id)arg1;
- (void)fillButtonsContent;
- (void)updatePrices:(id)arg1;
- (void)configContentWithPrice:(id)arg1 onTapPrice:(CDUnknownBlockType)arg2 onDone:(CDUnknownBlockType)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

