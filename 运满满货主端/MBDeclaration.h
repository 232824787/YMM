//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBExpression, MBTypeSpecifier, NSString;

@interface MBDeclaration : NSObject
{
    unsigned long long _lineNumber;
    MBTypeSpecifier *_type;
    NSString *_name;
    MBExpression *_initializer;
}

@property(retain, nonatomic) MBExpression *initializer; // @synthesize initializer=_initializer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MBTypeSpecifier *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void).cxx_destruct;

@end

