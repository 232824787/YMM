//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface HCBLoanOMRechargeReplenishInfoCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    NSLayoutConstraint *_boxBottom;
    UIView *_boxView;
}

@property(retain, nonatomic) UIView *boxView; // @synthesize boxView=_boxView;
@property(retain, nonatomic) NSLayoutConstraint *boxBottom; // @synthesize boxBottom=_boxBottom;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

