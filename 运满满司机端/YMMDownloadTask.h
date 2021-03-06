//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMNetworkTask.h"

#import "YMMNetwork.h"

@class AFURLSessionManager, NSString, NSURL, NSURLSessionDownloadTask;

@interface YMMDownloadTask : YMMNetworkTask <YMMNetwork>
{
    NSURL *_outputUrl;
    NSString *_downloadUrlString;
    CDUnknownBlockType _downloadProgressBlock;
    NSURLSessionDownloadTask *_downloadTask;
}

+ (id)ymm_task;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(retain, nonatomic) NSString *downloadUrlString; // @synthesize downloadUrlString=_downloadUrlString;
@property(retain, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
- (void).cxx_destruct;
- (void)ymm_resume;
- (void)ymm_suspendTask;
- (void)ymm_cancelTask;
- (void)ymm_sendRequestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) AFURLSessionManager *ymm_sessionManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

