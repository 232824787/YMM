//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface PayOilFeeGasDescCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_gasNameLabel;
    UILabel *_gasAddressLabel;
}

@property(nonatomic) __weak UILabel *gasAddressLabel; // @synthesize gasAddressLabel=_gasAddressLabel;
@property(nonatomic) __weak UILabel *gasNameLabel; // @synthesize gasNameLabel=_gasNameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configCellWithViewModel:(id)arg1;
- (void)awakeFromNib;

@end

