//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface HCBETCRechargeInvoiceCell : UITableViewCell
{
    _Bool _isSelected;
    _Bool _isLocked;
    UILabel *_amountLabel;
    UILabel *_rechargeTimeLabel;
    UIImageView *_checkImageView;
    UIView *_separatorLine;
}

@property(nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(nonatomic) UILabel *rechargeTimeLabel; // @synthesize rechargeTimeLabel=_rechargeTimeLabel;
@property(nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)setModel:(id)arg1;
- (void)awakeFromNib;

@end

