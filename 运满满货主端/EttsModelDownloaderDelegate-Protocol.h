//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString;

@protocol EttsModelDownloaderDelegate <NSObject>
- (void)gotUpdateInfo:(NSArray *)arg1 error:(NSError *)arg2;
- (void)gotLocalModels:(NSArray *)arg1 error:(NSError *)arg2;
- (void)gotDefaultModels:(NSArray *)arg1 error:(NSError *)arg2;
- (void)gotRemoteModels:(NSArray *)arg1 error:(NSError *)arg2;
- (void)modelFinishedForHandle:(NSString *)arg1 withError:(NSError *)arg2;
- (void)modelDownloadProgressForHandle:(NSString *)arg1 totalBytes:(long long)arg2 downloadedBytes:(long long)arg3;
- (void)modelDownloadStartedForHandle:(NSString *)arg1;
- (void)modelDownloadQueuedForHandle:(NSString *)arg1 forModelID:(NSString *)arg2 userParams:(NSDictionary *)arg3 error:(NSError *)arg4;
@end

