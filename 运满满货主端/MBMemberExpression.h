//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBExpression.h"

@class NSString;

@interface MBMemberExpression : MBExpression
{
    _Bool _c2methodName;
    MBExpression *_expr;
    NSString *_memberName;
}

@property(nonatomic) _Bool c2methodName; // @synthesize c2methodName=_c2methodName;
@property(copy, nonatomic) NSString *memberName; // @synthesize memberName=_memberName;
@property(retain, nonatomic) MBExpression *expr; // @synthesize expr=_expr;
- (void).cxx_destruct;

@end

