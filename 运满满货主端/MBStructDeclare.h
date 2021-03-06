//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBExpression, NSArray, NSString;

@interface MBStructDeclare : NSObject
{
    MBExpression *_annotationIfConditionExpr;
    unsigned long long _lineNumber;
    NSString *_name;
    const char *_typeEncoding;
    NSArray *_keys;
}

@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) const char *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) MBExpression *annotationIfConditionExpr; // @synthesize annotationIfConditionExpr=_annotationIfConditionExpr;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 typeEncoding:(const char *)arg2 keys:(id)arg3;

@end

