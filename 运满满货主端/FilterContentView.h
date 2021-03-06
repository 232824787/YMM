//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UIScrollView, YMMRegion;

@interface FilterContentView : UIView
{
    NSMutableArray *_regionButtons;
    NSMutableArray *_historyRegionButtons;
    NSMutableArray *_lineViews;
    UIImageView *_indicatorView;
    UIImageView *_indicatorInnerView;
    YMMRegion *_selectedRegion;
    _Bool _canChooseCountry;
    _Bool _isSaveRegionToHistory;
    _Bool _canChooseProvince;
    id <FilterContentViewDelegate> _delegate;
    unsigned long long _menuItemType;
    double _viewOriginY;
    UIView *_contentView;
    UIScrollView *_scrollView;
    UIView *_filterBgView;
    UIView *_topView;
    UILabel *_topTitleLabel;
    UIView *_bottomLineView;
    UIButton *_selectedButton;
    UIButton *_backButton;
    UIView *_historyRegionView;
    UILabel *_historyReginLabel;
    double _splitLineHeight;
    long long _columnNum;
    double _itemHeight;
    double _contentViewPaddingLeft;
    double _contentViewPaddingTop;
}

@property(nonatomic) double contentViewPaddingTop; // @synthesize contentViewPaddingTop=_contentViewPaddingTop;
@property(nonatomic) double contentViewPaddingLeft; // @synthesize contentViewPaddingLeft=_contentViewPaddingLeft;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) long long columnNum; // @synthesize columnNum=_columnNum;
@property(nonatomic) double splitLineHeight; // @synthesize splitLineHeight=_splitLineHeight;
@property(retain, nonatomic) UILabel *historyReginLabel; // @synthesize historyReginLabel=_historyReginLabel;
@property(retain, nonatomic) UIView *historyRegionView; // @synthesize historyRegionView=_historyRegionView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *filterBgView; // @synthesize filterBgView=_filterBgView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool canChooseProvince; // @synthesize canChooseProvince=_canChooseProvince;
@property(nonatomic) _Bool isSaveRegionToHistory; // @synthesize isSaveRegionToHistory=_isSaveRegionToHistory;
@property(nonatomic) double viewOriginY; // @synthesize viewOriginY=_viewOriginY;
@property(nonatomic) _Bool canChooseCountry; // @synthesize canChooseCountry=_canChooseCountry;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(nonatomic) __weak id <FilterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isMunicipalities:(id)arg1;
- (void)setHistoryRegion:(id)arg1;
- (void)tapFilterItem:(id)arg1;
- (void)pickHistoryRegion:(id)arg1;
- (void)selectedRegionWithIndex:(long long)arg1;
- (void)showTopRegion;
- (void)selectCurrentRegion;
- (id)histroyPlaceArray;
- (id)historyRegions;
- (id)placeArray;
- (_Bool)isSelectWholeArea:(id)arg1;
- (void)setStartPlaceRegion:(id)arg1;
- (id)innerImage;
- (id)triangleImage;
- (void)hideContentView;
- (void)showContentView:(struct CGRect)arg1 withRegion:(id)arg2;
- (void)initSplitLineView;
- (void)removeSplitLineView;
- (void)initFilterItemView:(id)arg1;
- (void)removeFilterItemButtonView;
- (void)initCurrentMenuIndicatorView:(struct CGRect)arg1;
- (void)hideHistoryView;
- (void)showHistoryRegionView;
- (void)removeHistoryButtonView;
- (void)showOrHideBackButton;
- (void)hideTopView;
- (void)showTopView;
- (void)loadControls;
- (void)setViewsFrame;
- (long long)buttonRows;
- (double)buttonWidth;
- (void)scrollToTop;
- (double)contentViewWidth;
- (id)init;

@end

