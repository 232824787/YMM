//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBRequest.h"

@class HCBRequestGroupContext, NSArray, NSMutableArray;

@interface HCBRequestGroup : HCBRequest
{
    _Bool _needRetry;
    _Bool _allowRepetition;
    NSArray *_requests;
    HCBRequestGroupContext *_context;
    NSMutableArray *_wrappedRequests;
    unsigned long long _totalRequestCount;
    unsigned long long _finishedRequestCount;
}

@property(nonatomic) _Bool allowRepetition; // @synthesize allowRepetition=_allowRepetition;
@property(nonatomic) unsigned long long finishedRequestCount; // @synthesize finishedRequestCount=_finishedRequestCount;
@property(nonatomic) unsigned long long totalRequestCount; // @synthesize totalRequestCount=_totalRequestCount;
@property(retain, nonatomic) NSMutableArray *wrappedRequests; // @synthesize wrappedRequests=_wrappedRequests;
@property(readonly, nonatomic) HCBRequestGroupContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void)setNeedRetry:(_Bool)arg1;
- (void).cxx_destruct;
- (void)handleFailure;
- (void)handleSuccess;
- (_Bool)isSucceed;
- (_Bool)isRepeat;
- (_Bool)isEmpty;
- (void)complete;
- (_Bool)finish;
- (void)run;
- (void)wrapRequest:(id)arg1;
- (id)errorForRequest:(id)arg1;
- (id)contentForRequest:(id)arg1;
- (id)description;
- (void)failedWithAutoLoginError:(id)arg1;
- (_Bool)needRetry;
- (void)startAsynchronous;
- (id)init;

@end

