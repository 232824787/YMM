//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class FilterGoodsNameView, FilterGoodsWeightRangeView, FilterLTLGoodsView, FilterRequestModel, FilterTruckLengthView, FilterTruckTypeView, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, YMMRegion;

@interface FilterNewContentView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_regionButtons;
    NSMutableArray *_historyRegionButtons;
    NSMutableArray *_filterRegionButtons;
    YMMRegion *_selectedRegion;
    double _filterRegionViewHeight;
    NSMutableArray *_currentRegionTitles;
    _Bool _isShowSubregions;
    _Bool _canChooseCountry;
    _Bool _isSaveRegionToHistory;
    _Bool _canChooseProvince;
    _Bool _isSupportMultipleDestination;
    _Bool _canFilterLTLGooos;
    _Bool _canTapBackgroundGesture;
    _Bool _isShowCargoTypeFilter;
    _Bool _isNeedResetWholeFrame;
    _Bool _isShowLoadDateTypeFilter;
    _Bool _isShowCargoNameTypeFilter;
    _Bool _isShowCargoWeightRangeFilter;
    _Bool _isShowTopRegion;
    _Bool _tempIsCustomWeightRange;
    _Bool _tempIsOnlyMinWeightRange;
    _Bool _tempIsOnlyMaxWeightRange;
    id <FilterContentViewDelegate> _delegate;
    unsigned long long _menuItemType;
    unsigned long long _filterViewScene;
    CDUnknownBlockType _hideFilterViewCallback;
    NSArray *_cargoTypeArr;
    FilterRequestModel *_filterReqeustModel;
    UIView *_contentView;
    UIScrollView *_scrollView;
    UIView *_filterBgView;
    UIView *_historyRegionView;
    UIView *_historyRegionContentView;
    UILabel *_historyReginLabel;
    UIView *_topView;
    UILabel *_regionTitleLabel;
    UIButton *_backButton;
    UIView *_filterRegionView;
    UIView *_filterRegionContentView;
    UILabel *_filterRegionLabel;
    UIButton *_selectedButton;
    UIButton *_clearFilterItemButton;
    double _splitLineHeight;
    long long _columnNum;
    double _itemHeight;
    NSMutableArray *_selectedRegionArr;
    YMMRegion *_currentSelectedRegion;
    NSMutableArray *_placeArray;
    NSMutableArray *_currentRegions;
    FilterTruckLengthView *_filterTruckLengthView;
    FilterTruckTypeView *_filterTruckTypeView;
    FilterLTLGoodsView *_filterLTLGoodsView;
    FilterGoodsNameView *_filterCargoTypeView;
    FilterGoodsWeightRangeView *_filterWeightRangeView;
    unsigned long long _tempTruckUseType;
    NSString *_tempCargoFilterType;
    NSMutableArray *_tempSelectedTruckTypeArr;
    NSMutableArray *_tempSelectedLengthArr;
    NSString *_tempLoadDateFilteType;
    NSMutableArray *_tempSelectedCargoTypeArr;
    NSMutableArray *_tempSelectedWeightRangeArr;
}

@property(nonatomic) _Bool tempIsOnlyMaxWeightRange; // @synthesize tempIsOnlyMaxWeightRange=_tempIsOnlyMaxWeightRange;
@property(nonatomic) _Bool tempIsOnlyMinWeightRange; // @synthesize tempIsOnlyMinWeightRange=_tempIsOnlyMinWeightRange;
@property(nonatomic) _Bool tempIsCustomWeightRange; // @synthesize tempIsCustomWeightRange=_tempIsCustomWeightRange;
@property(retain, nonatomic) NSMutableArray *tempSelectedWeightRangeArr; // @synthesize tempSelectedWeightRangeArr=_tempSelectedWeightRangeArr;
@property(retain, nonatomic) NSMutableArray *tempSelectedCargoTypeArr; // @synthesize tempSelectedCargoTypeArr=_tempSelectedCargoTypeArr;
@property(copy, nonatomic) NSString *tempLoadDateFilteType; // @synthesize tempLoadDateFilteType=_tempLoadDateFilteType;
@property(retain, nonatomic) NSMutableArray *tempSelectedLengthArr; // @synthesize tempSelectedLengthArr=_tempSelectedLengthArr;
@property(retain, nonatomic) NSMutableArray *tempSelectedTruckTypeArr; // @synthesize tempSelectedTruckTypeArr=_tempSelectedTruckTypeArr;
@property(copy, nonatomic) NSString *tempCargoFilterType; // @synthesize tempCargoFilterType=_tempCargoFilterType;
@property(nonatomic) unsigned long long tempTruckUseType; // @synthesize tempTruckUseType=_tempTruckUseType;
@property(retain, nonatomic) FilterGoodsWeightRangeView *filterWeightRangeView; // @synthesize filterWeightRangeView=_filterWeightRangeView;
@property(retain, nonatomic) FilterGoodsNameView *filterCargoTypeView; // @synthesize filterCargoTypeView=_filterCargoTypeView;
@property(retain, nonatomic) FilterLTLGoodsView *filterLTLGoodsView; // @synthesize filterLTLGoodsView=_filterLTLGoodsView;
@property(retain, nonatomic) FilterTruckTypeView *filterTruckTypeView; // @synthesize filterTruckTypeView=_filterTruckTypeView;
@property(retain, nonatomic) FilterTruckLengthView *filterTruckLengthView; // @synthesize filterTruckLengthView=_filterTruckLengthView;
@property(retain, nonatomic) NSMutableArray *currentRegions; // @synthesize currentRegions=_currentRegions;
@property(retain, nonatomic) NSMutableArray *placeArray; // @synthesize placeArray=_placeArray;
@property(retain, nonatomic) YMMRegion *currentSelectedRegion; // @synthesize currentSelectedRegion=_currentSelectedRegion;
@property(nonatomic) _Bool isShowTopRegion; // @synthesize isShowTopRegion=_isShowTopRegion;
@property(retain, nonatomic) NSMutableArray *selectedRegionArr; // @synthesize selectedRegionArr=_selectedRegionArr;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) long long columnNum; // @synthesize columnNum=_columnNum;
@property(nonatomic) double splitLineHeight; // @synthesize splitLineHeight=_splitLineHeight;
@property(retain, nonatomic) UIButton *clearFilterItemButton; // @synthesize clearFilterItemButton=_clearFilterItemButton;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UILabel *filterRegionLabel; // @synthesize filterRegionLabel=_filterRegionLabel;
@property(retain, nonatomic) UIView *filterRegionContentView; // @synthesize filterRegionContentView=_filterRegionContentView;
@property(retain, nonatomic) UIView *filterRegionView; // @synthesize filterRegionView=_filterRegionView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *regionTitleLabel; // @synthesize regionTitleLabel=_regionTitleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *historyReginLabel; // @synthesize historyReginLabel=_historyReginLabel;
@property(retain, nonatomic) UIView *historyRegionContentView; // @synthesize historyRegionContentView=_historyRegionContentView;
@property(retain, nonatomic) UIView *historyRegionView; // @synthesize historyRegionView=_historyRegionView;
@property(retain, nonatomic) UIView *filterBgView; // @synthesize filterBgView=_filterBgView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FilterRequestModel *filterReqeustModel; // @synthesize filterReqeustModel=_filterReqeustModel;
@property(nonatomic) _Bool isShowCargoWeightRangeFilter; // @synthesize isShowCargoWeightRangeFilter=_isShowCargoWeightRangeFilter;
@property(nonatomic) _Bool isShowCargoNameTypeFilter; // @synthesize isShowCargoNameTypeFilter=_isShowCargoNameTypeFilter;
@property(nonatomic) _Bool isShowLoadDateTypeFilter; // @synthesize isShowLoadDateTypeFilter=_isShowLoadDateTypeFilter;
@property(retain, nonatomic) NSArray *cargoTypeArr; // @synthesize cargoTypeArr=_cargoTypeArr;
@property(nonatomic) _Bool isNeedResetWholeFrame; // @synthesize isNeedResetWholeFrame=_isNeedResetWholeFrame;
@property(nonatomic) _Bool isShowCargoTypeFilter; // @synthesize isShowCargoTypeFilter=_isShowCargoTypeFilter;
@property(copy, nonatomic) CDUnknownBlockType hideFilterViewCallback; // @synthesize hideFilterViewCallback=_hideFilterViewCallback;
@property(nonatomic) _Bool canTapBackgroundGesture; // @synthesize canTapBackgroundGesture=_canTapBackgroundGesture;
@property(nonatomic) _Bool canFilterLTLGooos; // @synthesize canFilterLTLGooos=_canFilterLTLGooos;
@property(nonatomic) _Bool isSupportMultipleDestination; // @synthesize isSupportMultipleDestination=_isSupportMultipleDestination;
@property(nonatomic) _Bool canChooseProvince; // @synthesize canChooseProvince=_canChooseProvince;
@property(nonatomic) _Bool isSaveRegionToHistory; // @synthesize isSaveRegionToHistory=_isSaveRegionToHistory;
@property(nonatomic) _Bool canChooseCountry; // @synthesize canChooseCountry=_canChooseCountry;
@property(nonatomic) unsigned long long filterViewScene; // @synthesize filterViewScene=_filterViewScene;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(nonatomic) __weak id <FilterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isSpecialRegion:(id)arg1;
- (_Bool)isMunicipalities:(id)arg1;
- (void)saveHistoryRegionForEndPlace;
- (void)setHistoryRegion:(id)arg1 withMenuType:(unsigned long long)arg2;
- (void)clearFilterItem;
- (void)clearFilterRegion;
- (void)removeFilterItem:(id)arg1;
- (void)tapFilterItem:(id)arg1;
- (void)pickHistoryRegion:(id)arg1;
- (void)didSelectRegionWithIndex:(long long)arg1;
- (id)cacheFilterRegions;
- (void)saveFilterRegionsToCache;
- (void)saveFilterRegion:(id)arg1;
- (void)setHistoryButtonState;
- (void)setFilterButtonState;
- (void)showTopRegion;
- (void)selectCurrentRegion;
- (void)resetFilterParams:(id)arg1;
- (id)histroyPlaceArray;
- (id)historyRegions;
- (id)truckLengthArray;
- (_Bool)isSelectWholeArea:(id)arg1;
- (void)setStartPlaceRegion:(id)arg1;
- (void)hideAllView;
- (void)showTip:(id)arg1;
- (void)hideContentView;
- (void)showContentViewWithFilterCondition:(id)arg1;
- (void)initFilterItemView;
- (void)removeFilterItemButtonView;
- (void)hideQueryView;
- (void)showQueryView;
- (void)hideFilterTruckLenAndTypeView;
- (void)resetFilterTruckLenAndTypeViewFrame;
- (void)showFilterTruckLenAndTypeView;
- (void)hideLengthFieldKeyboard;
- (void)addGestureForCustomLength;
- (void)setCargoTypeViewFrame;
- (void)hideFilterCargoTypeView;
- (void)showCargoTypeView;
- (void)setWeightRangeViewFrame;
- (void)hideFilterWeightRangeView;
- (void)showWeightRangeView;
- (void)hideFilterRegionView;
- (void)showFilterRegionView;
- (double)getTextWidth:(double)arg1 withText:(id)arg2;
- (void)removeFilterRegionView;
- (void)hideHistoryView;
- (void)showHistoryRegionView;
- (void)removeHistoryButtonView;
- (void)showOrHideBackButton;
- (void)hideTopView;
- (void)showTopView;
- (void)showTitleWithRegion:(id)arg1;
- (void)scrollToTop;
- (void)loadControls;
- (void)setViewsFrame;
- (long long)buttonRows;
- (double)buttonWidth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

