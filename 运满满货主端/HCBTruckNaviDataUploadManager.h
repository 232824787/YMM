//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapSearchDelegate.h"

@class AMapNaviLocation, AMapReGeocodeSearchResponse, AMapSearchAPI, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface HCBTruckNaviDataUploadManager : NSObject <AMapSearchDelegate>
{
    _Bool _isUploadedEndNaviEvent;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastReportDate;
    AMapNaviLocation *_firstLocation;
    AMapNaviLocation *_lastLocation;
    double _hasBeenDrivingDistance;
    long long _hasBeenDrivingTime;
    AMapNaviLocation *_currentReportLocation;
    AMapReGeocodeSearchResponse *_lastReGeocodeSearchResponse;
    NSDate *_serviceLastUploadDate;
    NSDate *_uploadEndDate;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_safeQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _maxRequestThread;
    NSMutableArray *_dataArray;
    unsigned long long _curRequestThread;
    AMapSearchAPI *_search;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AMapSearchAPI *search; // @synthesize search=_search;
@property(nonatomic) unsigned long long curRequestThread; // @synthesize curRequestThread=_curRequestThread;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long maxRequestThread; // @synthesize maxRequestThread=_maxRequestThread;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *safeQueue; // @synthesize safeQueue=_safeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // @synthesize saveQueue=_saveQueue;
@property(retain, nonatomic) NSDate *uploadEndDate; // @synthesize uploadEndDate=_uploadEndDate;
@property(retain, nonatomic) NSDate *serviceLastUploadDate; // @synthesize serviceLastUploadDate=_serviceLastUploadDate;
@property(retain, nonatomic) AMapReGeocodeSearchResponse *lastReGeocodeSearchResponse; // @synthesize lastReGeocodeSearchResponse=_lastReGeocodeSearchResponse;
@property(retain, nonatomic) AMapNaviLocation *currentReportLocation; // @synthesize currentReportLocation=_currentReportLocation;
@property(nonatomic) long long hasBeenDrivingTime; // @synthesize hasBeenDrivingTime=_hasBeenDrivingTime;
@property(nonatomic) double hasBeenDrivingDistance; // @synthesize hasBeenDrivingDistance=_hasBeenDrivingDistance;
@property(nonatomic) _Bool isUploadedEndNaviEvent; // @synthesize isUploadedEndNaviEvent=_isUploadedEndNaviEvent;
@property(retain, nonatomic) AMapNaviLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) AMapNaviLocation *firstLocation; // @synthesize firstLocation=_firstLocation;
@property(retain, nonatomic) NSDate *lastReportDate; // @synthesize lastReportDate=_lastReportDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)initSearch;
- (void)setup;
- (void)addCurRequestThreadCount:(unsigned long long)arg1;
- (unsigned long long)curRequestThreadCount;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)onReGeocodeSearchDone:(id)arg1 response:(id)arg2;
- (void)driveManager:(id)arg1 updateNaviLocation:(id)arg2;
- (void)uploadEndNaviEvent;
- (void)resetArguments;
- (void)cacheLocationData:(id)arg1 ignoreCount:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

