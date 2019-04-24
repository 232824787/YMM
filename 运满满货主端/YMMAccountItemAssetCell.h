//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMAccountCenterItemModel, YMMMyAssetsModel;

@interface YMMAccountItemAssetCell : YMMBaseTableViewCell
{
    YMMAccountCenterItemModel *_model;
    YMMMyAssetsModel *_assetsModel;
    CDUnknownBlockType _withdrawBlock;
    CDUnknownBlockType _rechargeBlock;
    UILabel *_titleL;
    UIImageView *_rightArrow;
    UILabel *_rightL;
    UILabel *_moneyL;
    UILabel *_frozenMoneyL;
    UIView *_horizonalLineV;
    UIButton *_withdrawBtn;
    UIButton *_rechargeBtn;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIButton *rechargeBtn; // @synthesize rechargeBtn=_rechargeBtn;
@property(retain, nonatomic) UIButton *withdrawBtn; // @synthesize withdrawBtn=_withdrawBtn;
@property(retain, nonatomic) UIView *horizonalLineV; // @synthesize horizonalLineV=_horizonalLineV;
@property(retain, nonatomic) UILabel *frozenMoneyL; // @synthesize frozenMoneyL=_frozenMoneyL;
@property(retain, nonatomic) UILabel *moneyL; // @synthesize moneyL=_moneyL;
@property(retain, nonatomic) UILabel *rightL; // @synthesize rightL=_rightL;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *titleL; // @synthesize titleL=_titleL;
@property(copy, nonatomic) CDUnknownBlockType rechargeBlock; // @synthesize rechargeBlock=_rechargeBlock;
@property(copy, nonatomic) CDUnknownBlockType withdrawBlock; // @synthesize withdrawBlock=_withdrawBlock;
@property(retain, nonatomic) YMMMyAssetsModel *assetsModel; // @synthesize assetsModel=_assetsModel;
@property(retain, nonatomic) YMMAccountCenterItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)withdrawAction:(id)arg1;
- (void)recharAction:(id)arg1;
- (void)makeConstraint;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

