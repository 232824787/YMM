//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface YMMCargoInsuranceCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _insuranceBlock;
    CDUnknownBlockType _helpGuidBlock;
    UILabel *_insuranceTitleLb;
    UILabel *_insuranceDetailLb;
    UIImageView *_insuranceIcon;
    UILabel *_helpTitleLb;
    UILabel *_helpDetailLB;
    UIImageView *_helpIcon;
    UIButton *_insuranceBt;
    UIButton *_helpBt;
    UIView *_midLine;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *midLine; // @synthesize midLine=_midLine;
@property(retain, nonatomic) UIButton *helpBt; // @synthesize helpBt=_helpBt;
@property(retain, nonatomic) UIButton *insuranceBt; // @synthesize insuranceBt=_insuranceBt;
@property(retain, nonatomic) UIImageView *helpIcon; // @synthesize helpIcon=_helpIcon;
@property(retain, nonatomic) UILabel *helpDetailLB; // @synthesize helpDetailLB=_helpDetailLB;
@property(retain, nonatomic) UILabel *helpTitleLb; // @synthesize helpTitleLb=_helpTitleLb;
@property(retain, nonatomic) UIImageView *insuranceIcon; // @synthesize insuranceIcon=_insuranceIcon;
@property(retain, nonatomic) UILabel *insuranceDetailLb; // @synthesize insuranceDetailLb=_insuranceDetailLb;
@property(retain, nonatomic) UILabel *insuranceTitleLb; // @synthesize insuranceTitleLb=_insuranceTitleLb;
@property(copy, nonatomic) CDUnknownBlockType helpGuidBlock; // @synthesize helpGuidBlock=_helpGuidBlock;
@property(copy, nonatomic) CDUnknownBlockType insuranceBlock; // @synthesize insuranceBlock=_insuranceBlock;
- (void).cxx_destruct;
- (void)gotoHelp;
- (void)gotoInsurance;
- (void)updateConstraints;
- (void)addSubViews;
- (void)dealloc;
- (void)ymm_configWithItemModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

