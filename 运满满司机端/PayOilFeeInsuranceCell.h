//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface PayOilFeeInsuranceCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_priceLabel;
    UILabel *_originPriceLabel;
    UIImageView *_chooseStatusImageView;
}

@property(nonatomic) __weak UIImageView *chooseStatusImageView; // @synthesize chooseStatusImageView=_chooseStatusImageView;
@property(nonatomic) __weak UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configCellWithViewModel:(id)arg1;
- (void)awakeFromNib;

@end

