//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface YMMCompanyCargoCell : UITableViewCell
{
    UILabel *_cargoNameLabel;
    UILabel *_detailAddressLabel;
    UIImageView *_selectIndicatorImageView;
}

@property(retain, nonatomic) UIImageView *selectIndicatorImageView; // @synthesize selectIndicatorImageView=_selectIndicatorImageView;
@property(retain, nonatomic) UILabel *detailAddressLabel; // @synthesize detailAddressLabel=_detailAddressLabel;
@property(retain, nonatomic) UILabel *cargoNameLabel; // @synthesize cargoNameLabel=_cargoNameLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

