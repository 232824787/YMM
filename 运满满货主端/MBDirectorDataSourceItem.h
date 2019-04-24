//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface MBDirectorDataSourceItem : NSObject <NSCoding>
{
    _Bool _showEmpty;
    _Bool _autoGetMore;
    NSString *_dataCategory;
    NSString *_dataID;
    NSMutableDictionary *_taskArgDict;
    NSMutableDictionary *_taskUserInfo;
    double _emptyHeight;
}

+ (id)dataSourceItemWithDataCategory:(id)arg1 dataID:(id)arg2;
@property(nonatomic) _Bool autoGetMore; // @synthesize autoGetMore=_autoGetMore;
@property(nonatomic) double emptyHeight; // @synthesize emptyHeight=_emptyHeight;
@property(nonatomic) _Bool showEmpty; // @synthesize showEmpty=_showEmpty;
@property(retain, nonatomic) NSMutableDictionary *taskUserInfo; // @synthesize taskUserInfo=_taskUserInfo;
@property(retain, nonatomic) NSMutableDictionary *taskArgDict; // @synthesize taskArgDict=_taskArgDict;
@property(copy, nonatomic) NSString *dataID; // @synthesize dataID=_dataID;
@property(copy, nonatomic) NSString *dataCategory; // @synthesize dataCategory=_dataCategory;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

