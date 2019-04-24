//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKYFormRequestDelegate.h"

@class NSString, SKYFormRequests;

@interface PPIPayTasks : NSObject <SKYFormRequestDelegate>
{
    id <PPIPayTaskDelegate> payTaskDelegate;
    SKYFormRequests *ppiFormRequest;
    NSString *taskTradeCode;
}

+ (id)payTaskExec:(id)arg1 parent:(id)arg2 timeOut:(double)arg3 delegate:(id)arg4;
@property(retain, nonatomic) NSString *taskTradeCode; // @synthesize taskTradeCode;
@property(retain, nonatomic) SKYFormRequests *ppiFormRequest; // @synthesize ppiFormRequest;
@property(retain, nonatomic) id <PPIPayTaskDelegate> payTaskDelegate; // @synthesize payTaskDelegate;
- (void).cxx_destruct;
- (void)taskExecSuccess:(id)arg1;
- (void)taskExecError:(id)arg1;
- (void)onRequestSucc:(id)arg1;
- (void)onRequestFail:(id)arg1 errMsg:(id)arg2;
- (void)payTaskExec:(double)arg1 url:(id)arg2;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

