//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, YMMCargoDetailModel, YMMCreditScoreView, YYLabel;

@interface YMMCargoShipperCell : YMMBaseTableViewCell
{
    UIImageView *_shiperIcon;
    UILabel *_shiperNameLb;
    UILabel *_shiperTag;
    UILabel *_shiperBaoTap;
    YYLabel *_orderNumLb;
    UILabel *_onlinePaymentNumLb;
    UILabel *_companyLb;
    UILabel *_shiperDetailGuid;
    UIImageView *_vipLogo;
    UILabel *_praiseRateLb;
    UIButton *_eValueDisplayBt;
    UILabel *_brokerNameLb;
    YMMCreditScoreView *_creditScoreView;
    UILabel *_firstTagLabel;
    UILabel *_secondTagLabel;
    UILabel *_thirdTagLabel;
    YMMCargoDetailModel *_cargoModel;
}

+ (id)orderNumText:(id)arg1;
+ (_Bool)isCreditScoreUser:(id)arg1;
+ (double)tagHeightForTags:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) YMMCargoDetailModel *cargoModel; // @synthesize cargoModel=_cargoModel;
@property(retain, nonatomic) UILabel *thirdTagLabel; // @synthesize thirdTagLabel=_thirdTagLabel;
@property(retain, nonatomic) UILabel *secondTagLabel; // @synthesize secondTagLabel=_secondTagLabel;
@property(retain, nonatomic) UILabel *firstTagLabel; // @synthesize firstTagLabel=_firstTagLabel;
@property(retain, nonatomic) YMMCreditScoreView *creditScoreView; // @synthesize creditScoreView=_creditScoreView;
@property(retain, nonatomic) UILabel *brokerNameLb; // @synthesize brokerNameLb=_brokerNameLb;
@property(retain, nonatomic) UIButton *eValueDisplayBt; // @synthesize eValueDisplayBt=_eValueDisplayBt;
@property(retain, nonatomic) UILabel *praiseRateLb; // @synthesize praiseRateLb=_praiseRateLb;
@property(retain, nonatomic) UIImageView *vipLogo; // @synthesize vipLogo=_vipLogo;
@property(retain, nonatomic) UILabel *shiperDetailGuid; // @synthesize shiperDetailGuid=_shiperDetailGuid;
@property(retain, nonatomic) UILabel *companyLb; // @synthesize companyLb=_companyLb;
@property(retain, nonatomic) UILabel *onlinePaymentNumLb; // @synthesize onlinePaymentNumLb=_onlinePaymentNumLb;
@property(retain, nonatomic) YYLabel *orderNumLb; // @synthesize orderNumLb=_orderNumLb;
@property(retain, nonatomic) UILabel *shiperBaoTap; // @synthesize shiperBaoTap=_shiperBaoTap;
@property(retain, nonatomic) UILabel *shiperTag; // @synthesize shiperTag=_shiperTag;
@property(retain, nonatomic) UILabel *shiperNameLb; // @synthesize shiperNameLb=_shiperNameLb;
@property(retain, nonatomic) UIImageView *shiperIcon; // @synthesize shiperIcon=_shiperIcon;
- (void).cxx_destruct;
- (_Bool)isShowShipperTag;
- (void)updateConstraints;
- (void)addSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)ymm_configWithItemModel:(id)arg1;

@end

