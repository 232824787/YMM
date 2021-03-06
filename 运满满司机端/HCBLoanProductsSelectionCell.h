//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint;

@interface HCBLoanProductsSelectionCell : UITableViewCell
{
    NSLayoutConstraint *_leftLeading;
    NSLayoutConstraint *_rightTailing;
    NSArray *_leftLabels;
    NSArray *_leftCouponLabels;
    NSArray *_rightLabels;
}

@property(retain, nonatomic) NSArray *rightLabels; // @synthesize rightLabels=_rightLabels;
@property(retain, nonatomic) NSArray *leftCouponLabels; // @synthesize leftCouponLabels=_leftCouponLabels;
@property(retain, nonatomic) NSArray *leftLabels; // @synthesize leftLabels=_leftLabels;
@property(retain, nonatomic) NSLayoutConstraint *rightTailing; // @synthesize rightTailing=_rightTailing;
@property(retain, nonatomic) NSLayoutConstraint *leftLeading; // @synthesize leftLeading=_leftLeading;
- (void).cxx_destruct;
- (void)p_configCoupon:(id)arg1 atIndex:(long long)arg2;
- (void)configWithTermProduct:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

