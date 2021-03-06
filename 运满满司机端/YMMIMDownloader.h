//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperation, NSOperationQueue, NSString, NSURLSession;

@interface YMMIMDownloader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSMutableDictionary *_URLOperations;
    double _downloadTimeout;
    long long _downloadPrioritizaton;
    CDUnknownBlockType _headersFilter;
    NSOperationQueue *_downloadQueue;
    NSOperation *_lastAddedOperation;
    Class _operationClass;
    struct NSMutableDictionary *_HTTPHeaders;
    NSObject<OS_dispatch_queue> *_barrierQueue;
    NSURLSession *_session;
    NSMutableDictionary *_allDownloadReceipts;
    unsigned long long _backgroundTaskId;
}

+ (id)sharedDownloader;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain, nonatomic) NSMutableDictionary *allDownloadReceipts; // @synthesize allDownloadReceipts=_allDownloadReceipts;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(nonatomic) long long downloadPrioritizaton; // @synthesize downloadPrioritizaton=_downloadPrioritizaton;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(retain, nonatomic) NSMutableDictionary *URLOperations; // @synthesize URLOperations=_URLOperations;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationWithTask:(id)arg1;
- (void)removeAndClearAll;
- (void)cancelAllDownloads;
- (void)setSuspended:(_Bool)arg1;
- (void)remove:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)cancel:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)addProgressCallback:(CDUnknownBlockType)arg1 completedBlock:(CDUnknownBlockType)arg2 forURL:(id)arg3 createCallback:(CDUnknownBlockType)arg4;
- (id)downloadReceiptForURLString:(id)arg1;
- (id)downloadDataWithURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
@property(nonatomic) long long maxConcurrentDownloads;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)dealloc;
- (void)saveAllDownloadReceipts;
- (void)setAllStateToNone;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

