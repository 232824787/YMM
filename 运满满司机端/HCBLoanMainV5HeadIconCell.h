//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class HCBLoanNewUserPageIconModel, UIImageView, UILabel;

@interface HCBLoanMainV5HeadIconCell : UICollectionViewCell
{
    HCBLoanNewUserPageIconModel *_iconModel;
    UIImageView *_iconImageView;
    UILabel *_titleLable;
    UILabel *_subTitleLable;
}

@property(nonatomic) __weak UILabel *subTitleLable; // @synthesize subTitleLable=_subTitleLable;
@property(nonatomic) __weak UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) HCBLoanNewUserPageIconModel *iconModel; // @synthesize iconModel=_iconModel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

