//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YFRunManager, YMMFixDBUtils;

@interface YFDataManager : NSObject
{
    YMMFixDBUtils *_db;
    YFRunManager *_runManager;
}

+ (void)initialize;
+ (id)shared;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) YFRunManager *runManager; // @synthesize runManager=_runManager;
@property(retain, nonatomic) YMMFixDBUtils *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)runloopRequest;
- (id)fileMD5:(id)arg1;
- (void)saveFileInfo:(id)arg1 unzipPath:(id)arg2;
- (void)downloadFile:(id)arg1;
- (void)diff:(id)arg1;
- (void)startDiffAndUpdate:(id)arg1;
- (void)operateFixDatas:(id)arg1;
- (void)requestFixInfo;
- (id)init;

@end

