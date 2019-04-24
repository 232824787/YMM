//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBTruckNaviBaseViewController.h"

#import "AMapSearchDelegate.h"
#import "HCBPOISearchResultListViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AMapSearchAPI, HCBPOISearchResultListView, HCBPosition, NSMutableArray, NSMutableDictionary, NSString, UISearchBar, UITableView, UIView;

@interface HCBTruckNaviPOISearchVC : HCBTruckNaviBaseViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, AMapSearchDelegate, HCBPOISearchResultListViewDelegate>
{
    _Bool _isResetNav;
    _Bool _isFromSearchBtn;
    NSString *_parentVCClassName;
    id <HCBTruckNaviPOISearchVCDelegate> _delegate;
    HCBPosition *_position;
    NSMutableArray *_confirgMarr;
    NSMutableDictionary *_nearbyMutDic;
    NSMutableArray *_historyArr;
    NSMutableArray *_associationMarr;
    NSMutableArray *_associationPOIMarr;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    NSString *_searchText;
    AMapSearchAPI *_search;
    HCBPOISearchResultListView *_poiResultView;
    UIView *_naviBarBgView;
}

@property(retain, nonatomic) UIView *naviBarBgView; // @synthesize naviBarBgView=_naviBarBgView;
@property(nonatomic) _Bool isFromSearchBtn; // @synthesize isFromSearchBtn=_isFromSearchBtn;
@property(retain, nonatomic) HCBPOISearchResultListView *poiResultView; // @synthesize poiResultView=_poiResultView;
@property(nonatomic) _Bool isResetNav; // @synthesize isResetNav=_isResetNav;
@property(retain, nonatomic) AMapSearchAPI *search; // @synthesize search=_search;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableArray *associationPOIMarr; // @synthesize associationPOIMarr=_associationPOIMarr;
@property(retain, nonatomic) NSMutableArray *associationMarr; // @synthesize associationMarr=_associationMarr;
@property(retain, nonatomic) NSMutableArray *historyArr; // @synthesize historyArr=_historyArr;
@property(retain, nonatomic) NSMutableDictionary *nearbyMutDic; // @synthesize nearbyMutDic=_nearbyMutDic;
@property(retain, nonatomic) NSMutableArray *confirgMarr; // @synthesize confirgMarr=_confirgMarr;
@property(retain, nonatomic) HCBPosition *position; // @synthesize position=_position;
@property(nonatomic) __weak id <HCBTruckNaviPOISearchVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *parentVCClassName; // @synthesize parentVCClassName=_parentVCClassName;
- (void).cxx_destruct;
- (id)setupPVCurrentPageName;
- (void)selectedItemObj:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)onInputTipsSearchDone:(id)arg1 response:(id)arg2;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchRecommendPoi;
- (void)showPoiResultView;
- (void)jumpToBusinessMap:(id)arg1 poiSearchType:(long long)arg2;
- (void)dealNearbyData:(id)arg1;
- (void)searchWithPOIName:(id)arg1 adCode:(id)arg2;
- (void)getAssociationWithSearchWord:(id)arg1;
- (void)getDefaultPosition;
- (id)createImageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)setupTableView;
- (void)setupUI;
- (void)setupData;
- (void)updateNavigation:(_Bool)arg1;
- (void)startSearch;
- (void)searchButtonClicked:(id)arg1;
- (void)cleanHistory:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHCBNavigatorURL:(id)arg1 query:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

