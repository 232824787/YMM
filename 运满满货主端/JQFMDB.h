//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, FMDatabaseQueue, NSString;

@interface JQFMDB : NSObject
{
    NSString *_dbPath;
    FMDatabaseQueue *_dbQueue;
    FMDatabase *_db;
}

+ (id)shareDatabase:(id)arg1 path:(id)arg2;
+ (id)shareDatabase:(id)arg1;
+ (id)shareDatabase;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (void).cxx_destruct;
- (void)jq_inTransaction:(CDUnknownBlockType)arg1;
- (void)jq_inDatabase:(CDUnknownBlockType)arg1;
- (_Bool)jq_alterTable:(id)arg1 dicOrModel:(id)arg2 excludeName:(id)arg3;
- (_Bool)jq_alterTable:(id)arg1 dicOrModel:(id)arg2;
- (long long)lastInsertPrimaryKeyId:(id)arg1;
- (void)open;
- (void)close;
- (int)jq_tableItemCount:(id)arg1;
- (id)jq_columnNameArray:(id)arg1;
- (_Bool)jq_isExistTable:(id)arg1;
- (_Bool)jq_deleteAllDataFromTable:(id)arg1;
- (_Bool)jq_deleteTable:(id)arg1;
- (id)jq_insertTable:(id)arg1 dicOrModelArray:(id)arg2;
- (id)jq_lookupTable:(id)arg1 dicOrModel:(id)arg2 whereFormat:(id)arg3;
- (_Bool)jq_updateTable:(id)arg1 dicOrModel:(id)arg2 whereFormat:(id)arg3;
- (_Bool)jq_deleteTable:(id)arg1 whereFormat:(id)arg2;
- (_Bool)insertTable:(id)arg1 dicOrModel:(id)arg2 columnArr:(id)arg3;
- (_Bool)jq_insertTable:(id)arg1 dicOrModel:(id)arg2;
- (id)getColumnArr:(id)arg1 db:(id)arg2;
- (id)propertTypeConvert:(id)arg1;
- (id)getModelPropertyKeyValue:(id)arg1 tableName:(id)arg2 clomnArr:(id)arg3;
- (id)modelToDictionary:(Class)arg1 excludePropertyName:(id)arg2;
- (id)createTable:(id)arg1 model:(Class)arg2 excludeName:(id)arg3;
- (id)createTable:(id)arg1 dictionary:(id)arg2 excludeName:(id)arg3;
- (_Bool)jq_createTable:(id)arg1 dicOrModel:(id)arg2 excludeName:(id)arg3;
- (_Bool)jq_createTable:(id)arg1 dicOrModel:(id)arg2;
- (id)initWithDBName:(id)arg1 path:(id)arg2;
- (id)initWithDBName:(id)arg1;

@end

