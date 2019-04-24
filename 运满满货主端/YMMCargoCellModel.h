//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSAttributedString, NSNumber, NSString, NSURL, UIColor, YMMCargoIconConfigModel, YMMCargoModel;

@interface YMMCargoCellModel : YMMCommonModel
{
    _Bool _showQuoteBt;
    _Bool _showShipperTag;
    _Bool _showDepositeTag;
    _Bool _showVipTag;
    _Bool _hasBeenBrowsed;
    _Bool _isQuoteCargo;
    YMMCargoModel *_cargo;
    NSNumber *_cargoId;
    NSURL *_avacterURL;
    NSString *_cargoLineStr;
    NSAttributedString *_truckInfoAStr;
    NSString *_cargoInfoStr;
    NSString *_tradeInfoStr;
    NSString *_distanceStr;
    NSString *_updateTimeStr;
    NSString *_shipperNameStr;
    NSString *_quoteInfoStr;
    NSString *_quoteTitle;
    UIColor *_quoteBtColor;
    UIColor *_quoteTitleColor;
    UIColor *_quoteBtLayerColor;
    NSString *_shipperTagStr;
    UIColor *_shipperTagColor;
    NSString *_cargoTipInfo;
    UIColor *_cargoTipInfoColor;
    UIColor *_backgroundColor;
    double _cargoInfoHeight;
    NSArray *_extendIcons;
    YMMCargoIconConfigModel *_brandLogo;
    NSAttributedString *_lineTagsImageViewAttributedString;
    NSAttributedString *_expectFreightAStr;
    double _cargoHeightBlod;
    double _cargoHeightNormal;
    NSAttributedString *_truckInfoBlodAStr;
    NSAttributedString *_truckInfoNormalAStr;
    struct CGSize _cargoTipIconSize;
}

+ (id)initWithCargo:(id)arg1;
@property(retain, nonatomic) NSAttributedString *truckInfoNormalAStr; // @synthesize truckInfoNormalAStr=_truckInfoNormalAStr;
@property(retain, nonatomic) NSAttributedString *truckInfoBlodAStr; // @synthesize truckInfoBlodAStr=_truckInfoBlodAStr;
@property(nonatomic) double cargoHeightNormal; // @synthesize cargoHeightNormal=_cargoHeightNormal;
@property(nonatomic) double cargoHeightBlod; // @synthesize cargoHeightBlod=_cargoHeightBlod;
@property(copy, nonatomic) NSAttributedString *expectFreightAStr; // @synthesize expectFreightAStr=_expectFreightAStr;
@property(copy, nonatomic) NSAttributedString *lineTagsImageViewAttributedString; // @synthesize lineTagsImageViewAttributedString=_lineTagsImageViewAttributedString;
@property(retain, nonatomic) YMMCargoIconConfigModel *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(copy, nonatomic) NSArray *extendIcons; // @synthesize extendIcons=_extendIcons;
@property(nonatomic) _Bool isQuoteCargo; // @synthesize isQuoteCargo=_isQuoteCargo;
@property(nonatomic) double cargoInfoHeight; // @synthesize cargoInfoHeight=_cargoInfoHeight;
@property(nonatomic) _Bool hasBeenBrowsed; // @synthesize hasBeenBrowsed=_hasBeenBrowsed;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize cargoTipIconSize; // @synthesize cargoTipIconSize=_cargoTipIconSize;
@property(retain, nonatomic) UIColor *cargoTipInfoColor; // @synthesize cargoTipInfoColor=_cargoTipInfoColor;
@property(copy, nonatomic) NSString *cargoTipInfo; // @synthesize cargoTipInfo=_cargoTipInfo;
@property(nonatomic) _Bool showVipTag; // @synthesize showVipTag=_showVipTag;
@property(nonatomic) _Bool showDepositeTag; // @synthesize showDepositeTag=_showDepositeTag;
@property(retain, nonatomic) UIColor *shipperTagColor; // @synthesize shipperTagColor=_shipperTagColor;
@property(copy, nonatomic) NSString *shipperTagStr; // @synthesize shipperTagStr=_shipperTagStr;
@property(nonatomic) _Bool showShipperTag; // @synthesize showShipperTag=_showShipperTag;
@property(retain, nonatomic) UIColor *quoteBtLayerColor; // @synthesize quoteBtLayerColor=_quoteBtLayerColor;
@property(retain, nonatomic) UIColor *quoteTitleColor; // @synthesize quoteTitleColor=_quoteTitleColor;
@property(retain, nonatomic) UIColor *quoteBtColor; // @synthesize quoteBtColor=_quoteBtColor;
@property(copy, nonatomic) NSString *quoteTitle; // @synthesize quoteTitle=_quoteTitle;
@property(nonatomic) _Bool showQuoteBt; // @synthesize showQuoteBt=_showQuoteBt;
@property(copy, nonatomic) NSString *quoteInfoStr; // @synthesize quoteInfoStr=_quoteInfoStr;
@property(copy, nonatomic) NSString *shipperNameStr; // @synthesize shipperNameStr=_shipperNameStr;
@property(copy, nonatomic) NSString *updateTimeStr; // @synthesize updateTimeStr=_updateTimeStr;
@property(copy, nonatomic) NSString *distanceStr; // @synthesize distanceStr=_distanceStr;
@property(copy, nonatomic) NSString *tradeInfoStr; // @synthesize tradeInfoStr=_tradeInfoStr;
@property(copy, nonatomic) NSString *cargoInfoStr; // @synthesize cargoInfoStr=_cargoInfoStr;
@property(copy, nonatomic) NSAttributedString *truckInfoAStr; // @synthesize truckInfoAStr=_truckInfoAStr;
@property(copy, nonatomic) NSString *cargoLineStr; // @synthesize cargoLineStr=_cargoLineStr;
@property(retain, nonatomic) NSURL *avacterURL; // @synthesize avacterURL=_avacterURL;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) YMMCargoModel *cargo; // @synthesize cargo=_cargo;
- (void).cxx_destruct;
- (void)addJournalForHtmlError;
- (_Bool)isFineSecurityCargo;
- (_Bool)isSecurityCargo;
- (id)assembleCargoInfoStr;
- (id)truckInfoAttributedStrWithFont:(id)arg1;
- (void)updateCellHeight:(double)arg1 isBlod:(_Bool)arg2;

@end

