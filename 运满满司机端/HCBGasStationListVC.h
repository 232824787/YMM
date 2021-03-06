//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseViewController.h"

#import "HCBGasFilterCollectionViewDelegate.h"
#import "HCBRegionCollectionViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Advert, HCBGasFilterCollectionView, HCBGasFilterInfoView, HCBGasFilterModel, HCBGasFilterView, HCBPerolHomeFilterModel, HCBPetrolNavigationBarView, HCBPosition, HCBRegion, HCBRegionCollectionViewController, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UITableView, UIView;

@interface HCBGasStationListVC : HCBPetrolBaseViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, HCBRegionCollectionViewControllerDelegate, HCBGasFilterCollectionViewDelegate>
{
    HCBRegion *_selectedCity;
    _Bool _isReqRecommend;
    _Bool _isShowSelArea;
    _Bool _isAlwayShowNavigationBar;
    _Bool _isLoadedComplete;
    _Bool _isRemoveAdGroupChange;
    CDUnknownBlockType _regionChanged;
    CDUnknownBlockType _selectedFilterChanged;
    NSArray *_defaultArray;
    UIButton *_refreshAddressBtn;
    UITableView *_gasStationTableView;
    NSMutableArray *_gasStationListArray;
    HCBGasFilterInfoView *_gasFilterInfoView;
    HCBGasFilterCollectionView *_gasFilterCollectionView;
    UIView *_gasFilterCollectionViewContainer;
    Advert *_ad;
    long long _loadMoreType;
    UIImageView *_barImageView;
    long long _cityId;
    NSString *_cityName;
    HCBGasFilterView *_gasFilterView;
    NSArray *_homeFilterConditionArray;
    HCBGasFilterModel *_brandFilter;
    HCBRegionCollectionViewController *_selectCityController;
    NSMutableArray *_secondActivityArray;
    HCBPerolHomeFilterModel *_perolHomefilterModel;
    HCBPosition *_curLoc;
    double _navigationHeight;
    NSDictionary *_defaultSelectedDic;
    HCBPetrolNavigationBarView *_navigationBar;
    UIButton *_selectToTopButton;
    NSString *_selectedPetrolCard;
    double _gasFilterViewHight;
}

@property(nonatomic) double gasFilterViewHight; // @synthesize gasFilterViewHight=_gasFilterViewHight;
@property(copy, nonatomic) NSString *selectedPetrolCard; // @synthesize selectedPetrolCard=_selectedPetrolCard;
@property(retain, nonatomic) UIButton *selectToTopButton; // @synthesize selectToTopButton=_selectToTopButton;
@property(retain, nonatomic) HCBPetrolNavigationBarView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSDictionary *defaultSelectedDic; // @synthesize defaultSelectedDic=_defaultSelectedDic;
@property(nonatomic) double navigationHeight; // @synthesize navigationHeight=_navigationHeight;
@property(nonatomic) _Bool isRemoveAdGroupChange; // @synthesize isRemoveAdGroupChange=_isRemoveAdGroupChange;
@property(nonatomic) _Bool isLoadedComplete; // @synthesize isLoadedComplete=_isLoadedComplete;
@property(nonatomic) _Bool isAlwayShowNavigationBar; // @synthesize isAlwayShowNavigationBar=_isAlwayShowNavigationBar;
@property(retain, nonatomic) HCBPosition *curLoc; // @synthesize curLoc=_curLoc;
@property(nonatomic) _Bool isShowSelArea; // @synthesize isShowSelArea=_isShowSelArea;
@property(retain, nonatomic) HCBPerolHomeFilterModel *perolHomefilterModel; // @synthesize perolHomefilterModel=_perolHomefilterModel;
@property(retain, nonatomic) NSMutableArray *secondActivityArray; // @synthesize secondActivityArray=_secondActivityArray;
@property(retain, nonatomic) HCBRegionCollectionViewController *selectCityController; // @synthesize selectCityController=_selectCityController;
@property(retain, nonatomic) HCBGasFilterModel *brandFilter; // @synthesize brandFilter=_brandFilter;
@property(retain, nonatomic) NSArray *homeFilterConditionArray; // @synthesize homeFilterConditionArray=_homeFilterConditionArray;
@property(retain, nonatomic) HCBGasFilterView *gasFilterView; // @synthesize gasFilterView=_gasFilterView;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) UIImageView *barImageView; // @synthesize barImageView=_barImageView;
@property long long loadMoreType; // @synthesize loadMoreType=_loadMoreType;
@property(retain, nonatomic) Advert *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool isReqRecommend; // @synthesize isReqRecommend=_isReqRecommend;
@property(retain, nonatomic) UIView *gasFilterCollectionViewContainer; // @synthesize gasFilterCollectionViewContainer=_gasFilterCollectionViewContainer;
@property(retain, nonatomic) HCBGasFilterCollectionView *gasFilterCollectionView; // @synthesize gasFilterCollectionView=_gasFilterCollectionView;
@property(retain, nonatomic) HCBGasFilterInfoView *gasFilterInfoView; // @synthesize gasFilterInfoView=_gasFilterInfoView;
@property(retain, nonatomic) NSMutableArray *gasStationListArray; // @synthesize gasStationListArray=_gasStationListArray;
@property(retain, nonatomic) UITableView *gasStationTableView; // @synthesize gasStationTableView=_gasStationTableView;
@property(retain, nonatomic) UIButton *refreshAddressBtn; // @synthesize refreshAddressBtn=_refreshAddressBtn;
@property(retain, nonatomic) NSArray *defaultArray; // @synthesize defaultArray=_defaultArray;
@property(copy, nonatomic) CDUnknownBlockType selectedFilterChanged; // @synthesize selectedFilterChanged=_selectedFilterChanged;
@property(copy, nonatomic) CDUnknownBlockType regionChanged; // @synthesize regionChanged=_regionChanged;
- (void).cxx_destruct;
- (void)filterCollectionViewAdditionCellDidSelect;
- (void)filterCollectionViewFinishFilterWithItemIndexPaths:(id)arg1;
- (void)gasFilterCollectionViewContainerTap;
- (void)hideGasFilterCollectionView;
- (void)showGasFilterCollectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupTablePos:(double)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 gasStationAdCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 listActivitySplitLineCellWIthIndexPath:(id)arg2;
- (id)tableView:(id)arg1 gasStationSecondActivityCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissRegionCollectionViewController:(id)arg1;
- (void)regionCollectionViewController:(id)arg1 didMultiselectRegions:(id)arg2;
- (void)regionCollectionViewController:(id)arg1 didSelectRegion:(id)arg2;
- (void)reloadTableView;
- (void)setupSelectedRegionInfo:(id)arg1;
- (void)setupDefaultFilter;
- (void)fetchFilterConditionWithEnd:(CDUnknownBlockType)arg1;
- (void)fetchListAdWithEnd:(CDUnknownBlockType)arg1;
- (void)reqGetHomeListItemWithLocationWithEnd:(CDUnknownBlockType)arg1;
- (void)reqGetListStationRecommendListWithFilterInfoWithEnd:(CDUnknownBlockType)arg1;
- (void)reqGetListStationListWithFilterInfoWithEnd:(CDUnknownBlockType)arg1;
- (void)startInfoReq;
- (void)requestOilCardCondition;
- (void)persistentHistoryInAreaCollectionViewController:(id)arg1;
- (id)historySelectionsFromUDWithKey:(id)arg1;
- (void)initRefreshView;
- (void)didTapCitySwitcher:(id)arg1;
- (void)showAreaView:(id)arg1 isShow:(_Bool)arg2;
- (void)showGasFilterInfoView:(id)arg1 keyValue:(id)arg2 selected:(_Bool)arg3;
- (void)openUrlPage:(id)arg1;
- (void)setupListFilter;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initConditionUI;
- (void)viewDidLoad;
- (void)selectToTopButtonPress;
- (void)setupSelectToTopButton;
- (void)setupUI;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)urServiceCatchListData:(id)arg1 pos:(long long)arg2 type:(id)arg3;
- (id)setupPVCurrentPageName;
- (id)initWithCityId:(long long)arg1;
- (id)initWithHCBNavigatorURL:(id)arg1 query:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

