//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, UISearchBar, UITableView, YMMBrokerViewModel, YMMCompanyContactView, YMMCompanyRelationModel, YMMNoDataView;

@interface YMMChooseCompanyViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    CDUnknownBlockType _assignCompanyCallback;
    YMMCompanyRelationModel *_selCompanyModel;
    long long _pageNumber;
    NSMutableArray *_dataArray;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    YMMCompanyContactView *_contactView;
    YMMBrokerViewModel *_brokerViewModel;
    NSIndexPath *_selectIndexPath;
    YMMNoDataView *_noDataView;
}

@property(retain, nonatomic) YMMNoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) YMMBrokerViewModel *brokerViewModel; // @synthesize brokerViewModel=_brokerViewModel;
@property(retain, nonatomic) YMMCompanyContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) YMMCompanyRelationModel *selCompanyModel; // @synthesize selCompanyModel=_selCompanyModel;
@property(copy, nonatomic) CDUnknownBlockType assignCompanyCallback; // @synthesize assignCompanyCallback=_assignCompanyCallback;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarClearButtonClicked;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)assignBrokerCompany:(id)arg1;
- (void)searchBrokerCompany:(id)arg1;
- (void)updateBrokerCompanyContact:(id)arg1 withContact:(id)arg2;
- (void)getBrokerCompanyContact:(id)arg1 withBrokerActionType:(unsigned long long)arg2;
- (void)brokerCompanyListTaskLoadMore;
- (void)brokerCompanyListTaskUpDate;
- (void)setTableBackgroundView;
- (void)dismissSearchBarKeyboard;
- (void)reloadCompanyContact:(id)arg1;
- (void)reloadRows:(id)arg1;
- (void)showErrorMessage:(id)arg1;
- (void)scrollTableViewToTop;
- (void)setViewConstraints;
- (void)initControls;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

