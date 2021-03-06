//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DropDownTableMaskViewDelegate.h"
#import "FilterContentViewDelegate.h"
#import "YMMHistoryGoodsFilterItemViewDelegate.h"

@class DropDownTableMaskView, FilterNewContentView, FilterRequestModel, NSString, YMMHistoryGoodsFilterItemView, YMMRegion;

@interface YMMHistoryGoodsFilterView : UIView <DropDownTableMaskViewDelegate, YMMHistoryGoodsFilterItemViewDelegate, FilterContentViewDelegate>
{
    _Bool _isShow;
    id <YMMHistoryGoodsFilterViewDelegate> _delegate;
    YMMHistoryGoodsFilterItemView *_srcFiltItem;
    YMMHistoryGoodsFilterItemView *_desFiltItem;
    YMMHistoryGoodsFilterItemView *_timeFiltItem;
    DropDownTableMaskView *_dropDownTable;
    long long _selectIndex;
    YMMHistoryGoodsFilterItemView *_currentFiltItem;
    UIView *_backgroundView;
    FilterNewContentView *_contentView;
    YMMRegion *_startRegion;
    YMMRegion *_endRegion;
    FilterRequestModel *_filterRequestModel;
}

@property(retain, nonatomic) FilterRequestModel *filterRequestModel; // @synthesize filterRequestModel=_filterRequestModel;
@property(retain, nonatomic) YMMRegion *endRegion; // @synthesize endRegion=_endRegion;
@property(retain, nonatomic) YMMRegion *startRegion; // @synthesize startRegion=_startRegion;
@property(retain, nonatomic) FilterNewContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) YMMHistoryGoodsFilterItemView *currentFiltItem; // @synthesize currentFiltItem=_currentFiltItem;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) DropDownTableMaskView *dropDownTable; // @synthesize dropDownTable=_dropDownTable;
@property(retain, nonatomic) YMMHistoryGoodsFilterItemView *timeFiltItem; // @synthesize timeFiltItem=_timeFiltItem;
@property(retain, nonatomic) YMMHistoryGoodsFilterItemView *desFiltItem; // @synthesize desFiltItem=_desFiltItem;
@property(retain, nonatomic) YMMHistoryGoodsFilterItemView *srcFiltItem; // @synthesize srcFiltItem=_srcFiltItem;
@property(nonatomic) __weak id <YMMHistoryGoodsFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapFilterItem:(unsigned long long)arg1 withFilterItem:(id)arg2;
- (void)startFilter;
- (void)touchCurrentFiltItem:(id)arg1;
- (void)dropDownTableDismiss;
- (void)selectedListItem:(id)arg1;
- (void)currentFiltItemDismiss:(id)arg1;
- (void)currentFiltItemShow:(id)arg1;
- (void)dropDownTableShow;
- (void)hideFilterContentView:(id)arg1 withHideSelf:(_Bool)arg2;
- (void)hideContentView;
- (void)hideFilterControl;
- (void)animateBackGroundView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

