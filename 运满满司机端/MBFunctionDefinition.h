//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBBlockBody, MBTypeSpecifier, NSArray, NSString;

@interface MBFunctionDefinition : NSObject
{
    unsigned long long _lineNumber;
    MBTypeSpecifier *_returnTypeSpecifier;
    unsigned long long _kind;
    NSString *_name;
    NSArray *_params;
    MBBlockBody *_block;
}

@property(retain, nonatomic) MBBlockBody *block; // @synthesize block=_block;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) MBTypeSpecifier *returnTypeSpecifier; // @synthesize returnTypeSpecifier=_returnTypeSpecifier;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void).cxx_destruct;

@end

