//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, YYLabel;

@interface YMMCargoDetailCargoInfoImageCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _clickDepositBlock;
    YYLabel *_headTitleLab;
    YYLabel *_detailInfoLab;
    UIButton *_iconImgBtn;
    id <YMMCargoDetailCargoInfoProtocol> _model;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) id <YMMCargoDetailCargoInfoProtocol> model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *iconImgBtn; // @synthesize iconImgBtn=_iconImgBtn;
@property(retain, nonatomic) YYLabel *detailInfoLab; // @synthesize detailInfoLab=_detailInfoLab;
@property(retain, nonatomic) YYLabel *headTitleLab; // @synthesize headTitleLab=_headTitleLab;
@property(copy, nonatomic) CDUnknownBlockType clickDepositBlock; // @synthesize clickDepositBlock=_clickDepositBlock;
- (void).cxx_destruct;
- (void)popDetail;
- (void)layoutSubviews;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

