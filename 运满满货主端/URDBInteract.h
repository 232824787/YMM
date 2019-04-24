//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface URDBInteract : NSObject
{
}

+ (void)deleteWithSql:(id)arg1 uuids:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
+ (void)deleteLogByUUID:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
+ (void)queryWithSql:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
+ (void)queryAllLogsWithLimitCount:(long long)arg1 completedBlock:(CDUnknownBlockType)arg2;
+ (void)queryAllLogsWithCompletedBlock:(CDUnknownBlockType)arg1;
+ (void)addColumn:(id)arg1 type:(id)arg2 inMainTableWithDB:(id)arg3;
+ (void)addColumn:(id)arg1 inMainTableWithDB:(id)arg2;
+ (void)addAppKeyColumnInMainTableWithDB:(id)arg1;
+ (void)addLidColumnInMainTableWithDB:(id)arg1;
+ (void)updateMainTableWithDB:(id)arg1;
+ (_Bool)createTable;

@end

