//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIStackView, YMMCargoShipperModel, YYLabel;

@interface YMMCargoShipperProfileCell : YMMBaseTableViewCell
{
    UIStackView *_horizonalStackView;
    UIImageView *_shipperImageView;
    UIStackView *_verticalStackView;
    UIStackView *_nameInfoStackView;
    UILabel *_shipperNameLabel;
    UILabel *_depositeLabel;
    UILabel *_registerDateLabel;
    UILabel *_shipperTagLabel;
    UIImageView *_vipLogo;
    YYLabel *_authLabel;
    YMMCargoShipperModel *_shipperInfo;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) YMMCargoShipperModel *shipperInfo; // @synthesize shipperInfo=_shipperInfo;
@property(retain, nonatomic) YYLabel *authLabel; // @synthesize authLabel=_authLabel;
@property(retain, nonatomic) UIImageView *vipLogo; // @synthesize vipLogo=_vipLogo;
@property(retain, nonatomic) UILabel *shipperTagLabel; // @synthesize shipperTagLabel=_shipperTagLabel;
@property(retain, nonatomic) UILabel *registerDateLabel; // @synthesize registerDateLabel=_registerDateLabel;
@property(retain, nonatomic) UILabel *depositeLabel; // @synthesize depositeLabel=_depositeLabel;
@property(retain, nonatomic) UILabel *shipperNameLabel; // @synthesize shipperNameLabel=_shipperNameLabel;
@property(retain, nonatomic) UIStackView *nameInfoStackView; // @synthesize nameInfoStackView=_nameInfoStackView;
@property(retain, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;
@property(retain, nonatomic) UIImageView *shipperImageView; // @synthesize shipperImageView=_shipperImageView;
@property(retain, nonatomic) UIStackView *horizonalStackView; // @synthesize horizonalStackView=_horizonalStackView;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (id)createAuthAttributedStringWith:(id)arg1;
- (void)shipperAvaterZoomIn;
- (_Bool)isShowShipperTag;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

