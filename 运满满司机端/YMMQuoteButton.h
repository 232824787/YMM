//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMQuoteButton : YMMCommonModel
{
    NSString *_text;
    NSString *_buttonId;
    NSString *_jumpSchema;
    long long _type;
    long long _highLightShow;
}

@property(nonatomic) long long highLightShow; // @synthesize highLightShow=_highLightShow;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *jumpSchema; // @synthesize jumpSchema=_jumpSchema;
@property(copy, nonatomic) NSString *buttonId; // @synthesize buttonId=_buttonId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

