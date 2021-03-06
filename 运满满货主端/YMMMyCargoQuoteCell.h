//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

#import "YMMListBtnViewDelegate.h"
#import "YMMListBtnViewSource.h"

@class NSArray, NSString, UILabel, UIView, YMMListBtnView, YMMMyCargoQuoteInfoView;

@interface YMMMyCargoQuoteCell : YMMBaseTableViewCell <YMMListBtnViewSource, YMMListBtnViewDelegate>
{
    long long _currentTime;
    CDUnknownBlockType _listBtnBlock;
    CDUnknownBlockType _timeOutBlock;
    CDUnknownBlockType _telephoneBlock;
    UILabel *_quoteLab;
    UILabel *_timeLab;
    UILabel *_counterOfferLab;
    UILabel *_cargoQuoteStateLab;
    YMMMyCargoQuoteInfoView *_quoteInfoView;
    UILabel *_pressedLab;
    YMMListBtnView *_btnList;
    NSArray *_btnAry;
    UIView *_backView;
    UILabel *_tonTipsLab;
}

+ (id)initWithTableView:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UILabel *tonTipsLab; // @synthesize tonTipsLab=_tonTipsLab;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSArray *btnAry; // @synthesize btnAry=_btnAry;
@property(retain, nonatomic) YMMListBtnView *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) UILabel *pressedLab; // @synthesize pressedLab=_pressedLab;
@property(retain, nonatomic) YMMMyCargoQuoteInfoView *quoteInfoView; // @synthesize quoteInfoView=_quoteInfoView;
@property(retain, nonatomic) UILabel *cargoQuoteStateLab; // @synthesize cargoQuoteStateLab=_cargoQuoteStateLab;
@property(retain, nonatomic) UILabel *counterOfferLab; // @synthesize counterOfferLab=_counterOfferLab;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UILabel *quoteLab; // @synthesize quoteLab=_quoteLab;
@property(copy, nonatomic) CDUnknownBlockType telephoneBlock; // @synthesize telephoneBlock=_telephoneBlock;
@property(copy, nonatomic) CDUnknownBlockType timeOutBlock; // @synthesize timeOutBlock=_timeOutBlock;
@property(copy, nonatomic) CDUnknownBlockType listBtnBlock; // @synthesize listBtnBlock=_listBtnBlock;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)listBtnView:(id)arg1 didSelectRow:(long long)arg2;
- (double)listBtnView:(id)arg1 BtnHeightForRow:(long long)arg2;
- (double)listBtnView:(id)arg1 BtnWidthForRow:(long long)arg2;
- (id)listBtnView:(id)arg1 BtnCell:(id)arg2 btnTitleForRow:(long long)arg3;
- (long long)numberOfRowInYMMListBtnView:(id)arg1;
- (void)updateTime:(long long)arg1;
- (void)timeCountDown;
- (_Bool)shouldShowCountDown;
- (_Bool)isCargoQuoteNewBranch;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

