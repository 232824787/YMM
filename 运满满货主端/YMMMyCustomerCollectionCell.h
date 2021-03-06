//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, YMMMyItemModel;

@interface YMMMyCustomerCollectionCell : UICollectionViewCell
{
    CDUnknownBlockType _telAction;
    CDUnknownBlockType _evaluateAction;
    UIButton *_telBtn;
    UILabel *_csTitleLabel;
    UILabel *_csInfoLabel;
    UIImageView *_telImageView;
    UILabel *_gapLine;
    UILabel *_bottomLine;
    UIButton *_evaluateBtn;
    UILabel *_evaluateTipLabel;
    YMMMyItemModel *_itemModel;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)reuseItemCollectionCell:(id)arg1 indexPath:(id)arg2;
@property(retain, nonatomic) YMMMyItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UILabel *evaluateTipLabel; // @synthesize evaluateTipLabel=_evaluateTipLabel;
@property(retain, nonatomic) UIButton *evaluateBtn; // @synthesize evaluateBtn=_evaluateBtn;
@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *gapLine; // @synthesize gapLine=_gapLine;
@property(retain, nonatomic) UIImageView *telImageView; // @synthesize telImageView=_telImageView;
@property(retain, nonatomic) UILabel *csInfoLabel; // @synthesize csInfoLabel=_csInfoLabel;
@property(retain, nonatomic) UILabel *csTitleLabel; // @synthesize csTitleLabel=_csTitleLabel;
@property(retain, nonatomic) UIButton *telBtn; // @synthesize telBtn=_telBtn;
@property(copy, nonatomic) CDUnknownBlockType evaluateAction; // @synthesize evaluateAction=_evaluateAction;
@property(copy, nonatomic) CDUnknownBlockType telAction; // @synthesize telAction=_telAction;
- (void).cxx_destruct;
- (double)tipDotHeight;
- (double)tipDotWidth;
- (void)ymm_configWithItemModel:(id)arg1 valueDict:(id)arg2;
- (void)clickedEvaluateAction:(id)arg1;
- (void)tapPersonConsignor;
- (void)touchConnect:(id)arg1;
- (void)clickedTelAction:(id)arg1;
- (void)initSubViews;
- (void)updateViewConstraints;
- (void)configConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

