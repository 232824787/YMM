//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBDataTaskProtocol.h"

@class MBTask, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MBBaseTaskData : NSObject <MBDataTaskProtocol>
{
    NSMutableDictionary *_dataStatusDict;
    NSMutableDictionary *_dataDict;
    NSString *_dataCategory;
    NSRecursiveLock *_lock;
    MBTask *_currentTask;
}

+ (id)validDataID:(id)arg1;
@property(retain, nonatomic) MBTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *dataCategory; // @synthesize dataCategory=_dataCategory;
@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) NSMutableDictionary *dataStatusDict; // @synthesize dataStatusDict=_dataStatusDict;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_requestBody;
- (void)updateStatusAfterProcess:(id)arg1;
- (id)processJson:(id)arg1 forTask:(id)arg2;
- (_Bool)addDictionaryEntries:(id)arg1 fromSourceDictionary:(id)arg2;
- (_Bool)appendArray:(id)arg1 fromSourceArray:(id)arg2;
- (_Bool)replaceArray:(id)arg1 withSourceArray:(id)arg2;
- (id)loadObjFromDir:(id)arg1;
- (void)threadOfClearAllCacheAndRemoveFiles:(id)arg1;
- (void)clearAllCacheAndRemoveFiles:(_Bool)arg1 synchronized:(_Bool)arg2;
- (void)threadOfClearCacheForID:(id)arg1;
- (void)clearCacheForID:(id)arg1 removeCacheFile:(_Bool)arg2;
- (void)removeObjWithDir:(id)arg1;
- (void)threadOfSaveCacheForID:(id)arg1;
- (void)saveCacheForID:(id)arg1;
- (void)saveObj:(id)arg1 toDir:(id)arg2;
- (void)saveMemoryCache:(id)arg1 forDataId:(id)arg2;
- (_Bool)shouldCacheForTask:(id)arg1;
- (void)invalidDataForID:(id)arg1;
- (void)invalidAllData;
- (_Bool)canGetMoreForID:(id)arg1;
- (void)updateRequestBodyFromTask:(id)arg1;
- (id)getDataRequestForTask:(id)arg1;
- (id)getMBJsonObjectForID:(id)arg1;
- (id)getDataStatusForID:(id)arg1;
- (Class)getDataObjectClassForID:(id)arg1;
- (id)getCacheDir;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

