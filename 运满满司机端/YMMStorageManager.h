//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface YMMStorageManager : NSObject
{
    NSCache *__databaseQueueCache;
}

+ (id)sharedYMMStorageManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSCache *_databaseQueueCache; // @synthesize _databaseQueueCache=__databaseQueueCache;
- (void).cxx_destruct;
- (id)fetchAllKeysInGroup:(id)arg1 storage:(id)arg2 storageType:(long long)arg3;
- (id)fetchAllCacheKeysInGroup:(id)arg1;
- (id)fetchAllDocumentKeysInGroup:(id)arg1;
- (_Bool)removeAllItemsForGroup:(id)arg1 storage:(id)arg2 storageType:(long long)arg3;
- (_Bool)removeAllDocumentItemsForGroup:(id)arg1;
- (_Bool)removeAllDocumentItems;
- (_Bool)removeAllCachesItemsForGroup:(id)arg1;
- (_Bool)removeAllCachesItems;
- (_Bool)removeItemForKey:(id)arg1 group:(id)arg2 storage:(id)arg3 storageType:(long long)arg4;
- (_Bool)removeDocumentItemForKey:(id)arg1 group:(id)arg2;
- (_Bool)removeDocumentItemForKey:(id)arg1;
- (_Bool)removeCachesItemForKey:(id)arg1 group:(id)arg2;
- (_Bool)removeCachesItemForKey:(id)arg1;
- (id)fetchObjectForKey:(id)arg1 group:(id)arg2 storage:(id)arg3 storageType:(long long)arg4;
- (id)fetchDocumentObjectForKey:(id)arg1 group:(id)arg2;
- (id)fetchDocumentObjectForKey:(id)arg1;
- (id)fetchCachesObjectForKey:(id)arg1 group:(id)arg2;
- (id)fetchCachesObjectForKey:(id)arg1;
- (_Bool)storeObject:(id)arg1 forKey:(id)arg2 group:(id)arg3 storage:(id)arg4 storageType:(long long)arg5;
- (_Bool)storeDocumentObject:(id)arg1 forKey:(id)arg2 group:(id)arg3;
- (_Bool)storeDocumentObject:(id)arg1 forKey:(id)arg2;
- (_Bool)storeCachesObject:(id)arg1 forKey:(id)arg2 group:(id)arg3;
- (_Bool)storeCachesObject:(id)arg1 forKey:(id)arg2;
- (id)fetchDatabaseQueueWithKey:(id)arg1;
- (id)_fetchDatabaseQueueForStorage:(id)arg1 storageType:(long long)arg2;
- (id)_createDatabasePathForStorage:(id)arg1 storageType:(long long)arg2;

@end

