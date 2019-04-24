//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface HCBLoanCommonIconTextCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_rightLabelTailConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rightLabelTailConstraint; // @synthesize rightLabelTailConstraint=_rightLabelTailConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconHeightConstraint; // @synthesize iconHeightConstraint=_iconHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconWidthConstraint; // @synthesize iconWidthConstraint=_iconWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint; // @synthesize iconLeadingConstraint=_iconLeadingConstraint;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

