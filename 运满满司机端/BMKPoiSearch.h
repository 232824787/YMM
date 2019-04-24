//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKSearchBase.h"

#import "SearcherDelegate.h"

@class NSString, Searcher;

@interface BMKPoiSearch : BMKSearchBase <SearcherDelegate>
{
    int searchType;
    int _curPageIndex;
    Searcher *_searcher;
    int _pageCapacity;
    id <BMKPoiSearchDelegate> _delegate;
}

+ (int)getPageNum:(int)arg1 withCount:(int)arg2;
- (void).cxx_destruct;
- (_Bool)parsePoiIndoorSearchResult:(id)arg1 outPutResult:(id)arg2;
- (_Bool)parsePoilistSearchResult:(id)arg1 outPutResult:(id)arg2;
- (void)onPoiIndoorSearchResult:(id)arg1;
- (void)onCityListSearchResult:(id)arg1;
- (void)onAreaSearchResult:(id)arg1;
- (void)onPoiDetailPlaceSearchResult:(id)arg1;
- (void)onPOIListSearchResult:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (_Bool)poiIndoorSearch:(id)arg1;
- (_Bool)poiDetailSearch:(id)arg1;
- (_Bool)poiSearchNearBy:(id)arg1;
- (_Bool)poiSearchInbounds:(id)arg1;
- (_Bool)poiSearchInCity:(id)arg1;
@property(nonatomic) __weak id <BMKPoiSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

