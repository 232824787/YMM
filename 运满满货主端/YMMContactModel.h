//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMContactModel : YMMCommonModel
{
    _Bool _isShow;
    long long _type;
    NSString *_jumpSchema;
    NSString *_telIconUrl;
}

@property(copy, nonatomic) NSString *telIconUrl; // @synthesize telIconUrl=_telIconUrl;
@property(copy, nonatomic) NSString *jumpSchema; // @synthesize jumpSchema=_jumpSchema;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;

@end

