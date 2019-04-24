//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMWithdrawStatusModel;

@interface YMMWithdrawDetailCell : YMMBaseTableViewCell
{
    _Bool _isFirstCell;
    _Bool _isLastCell;
    _Bool _showEditBtn;
    YMMWithdrawStatusModel *_infoModel;
    CDUnknownBlockType _actionCallBack;
    UIImageView *_tipsImageView;
    UILabel *_titleLab;
    UILabel *_infoLab;
    UILabel *_timeLab;
    UIView *_HLineView;
    UIButton *_editBankBtn;
}

+ (double)contentHeight:(id)arg1 width:(double)arg2;
+ (double)ymm_heightForCellWithItem:(id)arg1 withStep:(unsigned long long)arg2;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIButton *editBankBtn; // @synthesize editBankBtn=_editBankBtn;
@property(retain, nonatomic) UIView *HLineView; // @synthesize HLineView=_HLineView;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UILabel *infoLab; // @synthesize infoLab=_infoLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(copy, nonatomic) CDUnknownBlockType actionCallBack; // @synthesize actionCallBack=_actionCallBack;
@property(nonatomic) _Bool showEditBtn; // @synthesize showEditBtn=_showEditBtn;
@property(retain, nonatomic) YMMWithdrawStatusModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
- (void).cxx_destruct;
- (void)editButtonAction:(id)arg1;
- (void)updateCellConstraints;
- (void)bottomCellUpdateConstraints;
- (void)midCellUpdateConstraints;
- (void)firstCellUpdateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

