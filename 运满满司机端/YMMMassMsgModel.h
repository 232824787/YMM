//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSMutableArray, YMMIMUserBaseInfo;

@interface YMMMassMsgModel : YMMCommonModel
{
    YMMIMUserBaseInfo *_selfImBaseInfo;
    NSMutableArray *_driversImBaseInfoList;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *driversImBaseInfoList; // @synthesize driversImBaseInfoList=_driversImBaseInfoList;
@property(retain, nonatomic) YMMIMUserBaseInfo *selfImBaseInfo; // @synthesize selfImBaseInfo=_selfImBaseInfo;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

