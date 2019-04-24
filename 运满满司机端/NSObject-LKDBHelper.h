//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (LKDBHelper)
+ (void)insertToDBWithArray:(id)arg1 filter:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
+ (void)insertToDBWithArray:(id)arg1 filter:(CDUnknownBlockType)arg2;
+ (void)insertArrayByAsyncToDB:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (void)insertArrayByAsyncToDB:(id)arg1;
+ (_Bool)isExistsWithModel:(id)arg1;
+ (_Bool)deleteWithWhere:(id)arg1;
+ (_Bool)deleteToDB:(id)arg1;
+ (_Bool)updateToDBWithSet:(id)arg1 where:(id)arg2;
+ (_Bool)updateToDB:(id)arg1 where:(id)arg2;
+ (_Bool)insertWhenNotExists:(id)arg1;
+ (_Bool)insertToDB:(id)arg1;
+ (id)searchSingleWithWhere:(id)arg1 orderBy:(id)arg2;
+ (id)searchWithSQL:(id)arg1;
+ (id)searchWithWhere:(id)arg1;
+ (id)searchWithWhere:(id)arg1 orderBy:(id)arg2 offset:(long long)arg3 count:(long long)arg4;
+ (id)searchColumn:(id)arg1 where:(id)arg2 orderBy:(id)arg3 offset:(long long)arg4 count:(long long)arg5;
+ (long long)rowCountWithWhere:(id)arg1;
+ (long long)rowCountWithWhereFormat:(id)arg1;
+ (_Bool)checkModelClass:(id)arg1;
- (_Bool)isExistsFromDB;
- (_Bool)deleteToDB;
- (_Bool)saveToDB;
- (_Bool)updateToDB;
@end

