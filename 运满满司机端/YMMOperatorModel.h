//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSDictionary, NSNumber, NSString, YMMOperatorTypeModel;

@interface YMMOperatorModel : YMMBaseModel
{
    _Bool _isLongConnect;
    YMMOperatorTypeModel *_operator;
    NSString *_name;
    NSDictionary *_params;
    long long _modelType;
    NSNumber *_timestamp;
}

@property(nonatomic) _Bool isLongConnect; // @synthesize isLongConnect=_isLongConnect;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) YMMOperatorTypeModel *operator; // @synthesize operator=_operator;
- (void).cxx_destruct;
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

